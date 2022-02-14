
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef long uint32_t ;
struct TYPE_3__ {long* params; scalar_t__ cmd_code; scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ fileserv_msg; int response_event; int open_handle; } ;


 int VAR_0 ;
 long VAR_1 ;
 scalar_t__ VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (long) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char*,char const*,int) ;
 TYPE_2__ VAR_9 ;
 scalar_t__ FUNC_5 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_7 (int *) ;

int FUNC_8(const char *VAR_10, uint32_t VAR_11, char *VAR_12, uint32_t VAR_13, uint32_t *VAR_14)
{
   uint32_t VAR_15 = 0;
   char* VAR_16 = VAR_12;
   int VAR_17;
   int VAR_18 = -1;

   VAR_17 = (int) FUNC_3(VAR_10);
   if((VAR_17 = (int) FUNC_3(VAR_10)) < VAR_4 && FUNC_1() == 0)
   {
      VAR_9.fileserv_msg.params[0] = VAR_11;
      VAR_9.fileserv_msg.params[1] = VAR_13;


      VAR_15 = ((unsigned long)VAR_12 & (VAR_5-1));
      VAR_9.fileserv_msg.params[2] = VAR_15;


      FUNC_4(((char *)VAR_9.fileserv_msg.data), VAR_10, VAR_4);


      if (FUNC_6(&VAR_9.fileserv_msg, VAR_8, 16+VAR_17+1) == 0)
      {
         if(VAR_15) {

            VAR_16 -= VAR_15;
         }

         while(VAR_13) {
            uint32_t VAR_19 = (VAR_13 > VAR_1) ? (uint32_t)VAR_1 : VAR_13;

            if(FUNC_5( VAR_9.open_handle, VAR_16,
                                         FUNC_0((VAR_19*VAR_3)+VAR_15),
                                         VAR_6, ((void*)0)) != 0)
               break;


            VAR_16 += VAR_0;
            VAR_13 -= VAR_19;
         }


         if(FUNC_7(&VAR_9.response_event) == VAR_7 && VAR_9.fileserv_msg.cmd_code == VAR_2)
         {
            *VAR_14 = VAR_9.fileserv_msg.params[0];
            VAR_18 = 0;
         }
         else
         {

            *VAR_14 = VAR_9.fileserv_msg.params[1];
            VAR_18 = VAR_9.fileserv_msg.params[0];
         }
      }

      FUNC_2();
   }

   return VAR_18;
}
