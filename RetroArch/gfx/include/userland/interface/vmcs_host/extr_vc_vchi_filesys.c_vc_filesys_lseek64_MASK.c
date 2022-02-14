
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int int64_t ;
struct TYPE_3__ {int* params; } ;
struct TYPE_4__ {TYPE_1__ fileserv_msg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int) ;

int64_t FUNC_3(int VAR_3, int64_t VAR_4, int VAR_5)
{
   int64_t VAR_6 = -1;

   if(FUNC_0() == 0)
   {
      VAR_2.fileserv_msg.params[0] = (uint32_t) VAR_3;
      VAR_2.fileserv_msg.params[1] = (uint32_t) VAR_4;
      VAR_2.fileserv_msg.params[2] = (uint32_t)(VAR_4 >> 32);
      VAR_2.fileserv_msg.params[3] = (uint32_t) VAR_5;

      if (FUNC_2(&VAR_2.fileserv_msg, VAR_1, 16) == VAR_0)
      {
         VAR_6 = VAR_2.fileserv_msg.params[0];
         VAR_6 += (int64_t)VAR_2.fileserv_msg.params[1] << 32;
      }

      FUNC_1();
   }

   return VAR_6;
}
