
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int carttype; } ;
struct TYPE_5__ {int RBR; int IER; int DLL; int DLM; int IIR; int LCR; int MCR; int LSR; int MSR; int SCR; int* SREG; } ;
struct TYPE_6__ {int isechoenab; int thb_write_time; int connect_timeout; int portstring; int ipstring; TYPE_1__ reg; scalar_t__ escape_count; int modemstate; scalar_t__ cycles; scalar_t__ outbufferupdate; scalar_t__ outbuffersize; scalar_t__ outbufferend; scalar_t__ outbufferstart; scalar_t__ inbufferupdate; scalar_t__ inbuffersize; scalar_t__ inbufferend; scalar_t__ inbufferstart; scalar_t__ outbuffer; scalar_t__ inbuffer; } ;
typedef int Netlink ;


 int VAR_0 ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,void*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (void*,int ,int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (int ,char const*) ;

int FUNC_7(const char *VAR_6, const char *VAR_7)
{
   if ((VAR_4 = FUNC_2(sizeof(Netlink))) == ((void*)0))
   {
      VAR_1->carttype = VAR_0;
      FUNC_1(VAR_5, (void *)"Netlink");
      return 0;
   }

   FUNC_3((void *) VAR_4->inbuffer, 0, VAR_2);
   FUNC_3((void *) VAR_4->outbuffer, 0, VAR_2);

   VAR_4->inbufferstart = VAR_4->inbufferend = VAR_4->inbuffersize = 0;
   VAR_4->inbufferupdate = 0;
   VAR_4->outbufferstart = VAR_4->outbufferend = VAR_4->outbuffersize = 0;
   VAR_4->outbufferupdate = 0;

   VAR_4->isechoenab = 1;
   VAR_4->cycles = 0;
   VAR_4->thb_write_time = 0xFFFFFFFF;
   VAR_4->modemstate = VAR_3;
   VAR_4->escape_count = 0;

   VAR_4->reg.RBR = 0x00;
   VAR_4->reg.IER = 0x00;
   VAR_4->reg.DLL = 0x00;
   VAR_4->reg.DLM = 0x00;
   VAR_4->reg.IIR = 0x01;

   VAR_4->reg.LCR = 0x00;
   VAR_4->reg.MCR = 0x00;
   VAR_4->reg.LSR = 0x60;
   VAR_4->reg.MSR = 0x30;
   VAR_4->reg.SCR = 0x01;

   VAR_4->reg.SREG[7] = 50;
   VAR_4->connect_timeout = VAR_4->reg.SREG[7] * 1000000;

   if (VAR_6 == ((void*)0) || FUNC_5(VAR_6, "") == 0)

      FUNC_4(VAR_4->ipstring, "127.0.0.1");
 else
  FUNC_6(VAR_4->ipstring, VAR_6);

 if (VAR_7 == ((void*)0) || FUNC_5(VAR_7, "") == 0)

      FUNC_4(VAR_4->portstring, "1337");
 else
  FUNC_6(VAR_4->portstring, VAR_7);




   return 0;

}
