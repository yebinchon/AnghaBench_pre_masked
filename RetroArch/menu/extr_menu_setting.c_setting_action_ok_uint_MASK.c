
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enum_idx; } ;
typedef TYPE_1__ rarch_setting_t ;
typedef int enum_idx ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int *,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_2(rarch_setting_t *VAR_1, bool VAR_2)
{
   char VAR_3[16];
   if (!VAR_1)
      return -1;

   FUNC_1(VAR_3, sizeof(VAR_3), "%d", VAR_1->enum_idx);

   FUNC_0(
         VAR_3,
         ((void*)0), ((void*)0), 0, 0, 0,
         VAR_0);
   return 0;
}
