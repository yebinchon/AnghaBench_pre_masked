
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int* params; } ;
struct TYPE_4__ {TYPE_1__ fileserv_msg; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int,int *) ;

int FUNC_3(int VAR_3, const void *VAR_4, unsigned int VAR_5)
{
   int VAR_6 = 0;
   int VAR_7 = 0;
   int VAR_8 = 0;
   uint8_t *VAR_9 = (uint8_t*) VAR_4;

   if (VAR_5 == 0) {
      return 0;
   }

   if(FUNC_0() == 0)
   {


      do {
         VAR_7 = VAR_5 > VAR_0 ? VAR_0 : VAR_5;


         VAR_2.fileserv_msg.params[0] = (uint32_t)VAR_3;
         VAR_2.fileserv_msg.params[1] = 0xffffffffU;

         VAR_8 = FUNC_2(&VAR_2.fileserv_msg , VAR_1, (uint32_t)VAR_7, (uint8_t*)VAR_9);

         if(VAR_7 != VAR_8) {
            if(VAR_8 < 0)
               VAR_6 = -1;
            else
               VAR_6 += VAR_8;
            break;
         }

         VAR_9+=VAR_7;
         VAR_5 -= VAR_8;
         VAR_6 += VAR_8;
      }while(VAR_5 > 0);

      FUNC_1();
   }

   return VAR_6;
}
