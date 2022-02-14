
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int font_data_t ;
struct TYPE_2__ {int (* font_init_first ) (void**,int ,char*,float,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (void**,int ,char*,float,int) ;
 int FUNC_1 (int) ;

font_data_t *FUNC_2(char* VAR_1, float VAR_2, bool VAR_3)
{
   font_data_t *VAR_4 = ((void*)0);

   if (!VAR_0)
      return ((void*)0);

   if (!VAR_0->font_init_first((void**)&VAR_4,
            FUNC_1(0),
            VAR_1, VAR_2, VAR_3))
      return ((void*)0);

   return VAR_4;
}
