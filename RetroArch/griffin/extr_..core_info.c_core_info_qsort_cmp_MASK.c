
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int display_name; } ;
typedef TYPE_1__ core_info_t ;


 scalar_t__ FUNC_0 (TYPE_1__ const*,int ) ;
 int FUNC_1 (TYPE_1__ const*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(const void *VAR_2, const void *VAR_3)
{
   const core_info_t *VAR_4 = (const core_info_t*)VAR_2;
   const core_info_t *VAR_5 = (const core_info_t*)VAR_3;
   int VAR_6 = FUNC_1(VAR_4, VAR_1);
   int VAR_7 = FUNC_1(VAR_5, VAR_1);







   if (VAR_6 != VAR_7)
      return VAR_7 - VAR_6;
   return FUNC_2(VAR_4->display_name, VAR_5->display_name);
}
