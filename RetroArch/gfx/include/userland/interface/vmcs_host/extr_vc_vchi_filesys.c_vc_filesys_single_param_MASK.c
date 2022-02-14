
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * params; } ;
struct TYPE_4__ {TYPE_1__ fileserv_msg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(uint32_t VAR_2, uint32_t VAR_3)
{
   int VAR_4 = -1;

   if(FUNC_0() == 0)
   {
      VAR_1.fileserv_msg.params[0] = VAR_2;
      if (FUNC_2(&VAR_1.fileserv_msg, VAR_3, 4) == VAR_0)
         VAR_4 = 0;

      FUNC_1();
   }

   return VAR_4;
}
