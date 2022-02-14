
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_data {struct filter_data* workers; } ;


 int FUNC_0 (struct filter_data*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
   struct filter_data *VAR_1 = (struct filter_data*)VAR_0;
   if (!VAR_1) {
      return;
   }
   FUNC_0(VAR_1->workers);
   FUNC_0(VAR_1);
}
