
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eq_data {struct eq_data* filter; struct eq_data* fftblock; struct eq_data* block; struct eq_data* save; int fft; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct eq_data*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
   struct eq_data *VAR_1 = (struct eq_data*)VAR_0;
   if (!VAR_1)
      return;

   FUNC_0(VAR_1->fft);
   FUNC_1(VAR_1->save);
   FUNC_1(VAR_1->block);
   FUNC_1(VAR_1->fftblock);
   FUNC_1(VAR_1->filter);
   FUNC_1(VAR_1);
}
