
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; size_t buflen; char bufsum; int cslen; char* buffer; char* checksum; int client; } ;
typedef TYPE_1__ gdb_packet ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (char*,char*,int*) ;

void FUNC_4(gdb_packet * VAR_0, char * VAR_1, size_t VAR_2)
{
   size_t VAR_3;
   char VAR_4;

   for(VAR_3 = 0;VAR_3 < VAR_2;VAR_3++)
   {
      VAR_4 = VAR_1[VAR_3];
      switch(VAR_0->state)
      {
         case 0:
            if ('$' == VAR_4)
            {
               VAR_0->state = 1;
               VAR_0->buflen = 0;
               VAR_0->bufsum = 0;
            }
            else if (3 == VAR_4)
               FUNC_0(VAR_0->client);
            break;
         case 1:
            if ('#' == VAR_4)
            {
               VAR_0->state = 2;
               VAR_0->cslen = 0;
            }
            else
            {
               VAR_0->buffer[VAR_0->buflen++] = VAR_4;
               VAR_0->bufsum += VAR_4;
            }
            break;
         case 2:
            VAR_0->checksum[VAR_0->cslen++] = VAR_4;
            if (2 == VAR_0->cslen)
            {
               int VAR_5;
               FUNC_3(VAR_0->checksum, "%2x", &VAR_5);
               VAR_0->buffer[VAR_0->buflen] = '\0';
               if (VAR_0->bufsum == VAR_5)
                  FUNC_2(VAR_0->client, VAR_0);
               else
                  FUNC_1(VAR_0->client);
               VAR_0->state = 0;
            }
            break;
      }
   }
}
