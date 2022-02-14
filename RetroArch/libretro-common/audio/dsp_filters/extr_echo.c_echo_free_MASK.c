
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct echo_data {unsigned int num_channels; struct echo_data* channels; struct echo_data* buffer; } ;


 int FUNC_0 (struct echo_data*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
   unsigned VAR_1;
   struct echo_data *VAR_2 = (struct echo_data*)VAR_0;

   for (VAR_1 = 0; VAR_1 < VAR_2->num_channels; VAR_1++)
      FUNC_0(VAR_2->channels[VAR_1].buffer);
   FUNC_0(VAR_2->channels);
   FUNC_0(VAR_2);
}
