
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enable; void* max_value; void* step; void* min_value; } ;
typedef TYPE_1__ ccv_swt_range_t ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 void* FUNC_1 (char*,int ) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(const char* VAR_0, ccv_swt_range_t* VAR_1)
{
 VAR_1->enable = 0;
 if (FUNC_0(VAR_0, "x") && FUNC_0(VAR_0, "X"))
 {
  char* VAR_2 = FUNC_2((char*)VAR_0, ",");
  if (VAR_2)
  {
   VAR_1->min_value = FUNC_1(VAR_2, 0);
   VAR_2 = FUNC_2(0, ",");
   if (VAR_2)
   {
    VAR_1->step = FUNC_1(VAR_2, 0);
    VAR_2 = FUNC_2(0, ",");
    if (VAR_2)
    {
     VAR_1->max_value = FUNC_1(VAR_2, 0);
     VAR_1->enable = 1;
    }
   }
  }
 }
}
