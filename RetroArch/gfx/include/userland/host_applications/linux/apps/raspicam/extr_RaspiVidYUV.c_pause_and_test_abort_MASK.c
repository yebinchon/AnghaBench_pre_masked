
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ abort; } ;
struct TYPE_5__ {TYPE_1__ callback_data; } ;
typedef TYPE_2__ RASPIVIDYUV_STATE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(RASPIVIDYUV_STATE *VAR_1, int VAR_2)
{
   int VAR_3;

   if (!VAR_2)
      return 0;


   for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3+= VAR_0)
   {
      FUNC_0(VAR_0);
      if (VAR_1->callback_data.abort)
         return 1;
   }

   return 0;
}
