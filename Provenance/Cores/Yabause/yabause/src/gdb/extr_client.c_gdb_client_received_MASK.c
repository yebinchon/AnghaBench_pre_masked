
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_14__ {char* buffer; } ;
typedef TYPE_2__ gdb_packet ;
struct TYPE_15__ {TYPE_10__* context; int sock; } ;
typedef TYPE_3__ gdb_client ;
struct TYPE_13__ {int* R; int PC; int PR; int GBR; int VBR; int MACH; int MACL; int SR; } ;
struct TYPE_12__ {TYPE_1__ regs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_10__*,int) ;
 int FUNC_4 (TYPE_10__*,int) ;
 int FUNC_5 (int ,char*,int,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,char*,int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 char* FUNC_11 (int) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,char*,int*,int*) ;
 int FUNC_15 (char*,char*,int) ;

void FUNC_16(gdb_client * VAR_0, gdb_packet * VAR_1)
{
   char VAR_2 = '+';
   FUNC_12("packet received: %s\n", VAR_1->buffer);
   FUNC_5(VAR_0->sock, &VAR_2, 1, 0);

   if (VAR_1->buffer[0] == '?')
      FUNC_7(VAR_0);
   else if (VAR_1->buffer[0] == 'c')
      FUNC_10(VAR_0);
   else if (VAR_1->buffer[0] == 'g')
   {
      int VAR_3;
      char VAR_4[184+1];

      for(VAR_3 = 0;VAR_3 < 16;VAR_3++)
         FUNC_13(VAR_4 + 8 * VAR_3, "%08x", VAR_0->context->regs.R[VAR_3]);

      FUNC_13(VAR_4 + 8 * 16, "%08x", VAR_0->context->regs.PC);
      FUNC_13(VAR_4 + 8 * 17, "%08x", VAR_0->context->regs.PR);
      FUNC_13(VAR_4 + 8 * 18, "%08x", VAR_0->context->regs.GBR);
      FUNC_13(VAR_4 + 8 * 19, "%08x", VAR_0->context->regs.VBR);
      FUNC_13(VAR_4 + 8 * 20, "%08x", VAR_0->context->regs.MACH);
      FUNC_13(VAR_4 + 8 * 21, "%08x", VAR_0->context->regs.MACL);
      FUNC_13(VAR_4 + 8 * 22, "%08x", VAR_0->context->regs.SR);

      FUNC_8(VAR_0, VAR_4, 184);
   }
   else if (VAR_1->buffer[0] == 'H')
      FUNC_8(VAR_0, "OK", 2);
   else if (VAR_1->buffer[0] == 'q')
   {
      if (!FUNC_15(VAR_1->buffer, "qSupported", 10))
         FUNC_8(VAR_0, "PacketSize=1024", 15);
      else if (VAR_1->buffer[1] == 'C')
         FUNC_8(VAR_0, "", 0);
      else if (!FUNC_15(VAR_1->buffer, "qAttached", 9))
         FUNC_8(VAR_0, "0", 1);
      else if (!FUNC_15(VAR_1->buffer, "qTStatus", 8))
         FUNC_8(VAR_0, "T0", 2);
      else if (!FUNC_15(VAR_1->buffer, "qTfP", 8))
         FUNC_8(VAR_0, "", 0);
      else if (!FUNC_15(VAR_1->buffer, "qTfV", 8))
         FUNC_8(VAR_0, "", 0);
      else if (!FUNC_15(VAR_1->buffer, "qTsP", 8))
         FUNC_8(VAR_0, "", 0);
   }
   else if (VAR_1->buffer[0] == 'm')
   {
      u32 VAR_5;
      int VAR_6, VAR_7;
      char * VAR_8;
      char * VAR_9;

      FUNC_14(VAR_1->buffer, "m%x,%d", &VAR_5, &VAR_6);

      VAR_8 = FUNC_11(2 * VAR_6);
      VAR_9 = VAR_8;

      VAR_7 = 0;
      while(VAR_7 < VAR_6 / 4) {
         u32 VAR_10 = FUNC_1(VAR_5 + 4 * VAR_7);
         FUNC_13(VAR_9, "%08x", VAR_10);
         VAR_7 += 1;
         VAR_9 += 8;
      }

      switch(VAR_6 % 4) {
         case 2: {
            u16 VAR_11 = FUNC_2(VAR_5 + 4 * VAR_7);
            FUNC_13(VAR_9, "%04x", VAR_11);
            break;
         }
         case 1: {
            u8 VAR_12 = FUNC_0(VAR_5 + 4 * VAR_7);
            FUNC_13(VAR_9, "%02x", VAR_12);
            break;
         }
      }

      FUNC_8(VAR_0, VAR_8, 2 * VAR_6);

      FUNC_6(VAR_8);
   }
   else if (VAR_1->buffer[0] == 'v')
   {
      if (!FUNC_15(VAR_1->buffer, "vCont?", 6))
         FUNC_8(VAR_0, "", 0);
   }
   else if (VAR_1->buffer[0] == 's')
      FUNC_9(VAR_0);
   else if (VAR_1->buffer[0] == 'Z')
   {
      if (VAR_1->buffer[1] == '0')
      {
         u32 VAR_13;
         int VAR_14;
         FUNC_14(VAR_1->buffer, "Z0,%x,%d", &VAR_13, &VAR_14);
         FUNC_3(VAR_0->context, VAR_13);
      }
      FUNC_8(VAR_0, "OK", 2);
   }
   else if (VAR_1->buffer[0] == 'z')
   {
      if (VAR_1->buffer[1] == '0')
      {
         u32 VAR_15;
         int VAR_16;
         FUNC_14(VAR_1->buffer, "Z0,%x,%d", &VAR_15, &VAR_16);
         FUNC_4(VAR_0->context, VAR_15);
      }
      FUNC_8(VAR_0, "OK", 2);
   }
}
