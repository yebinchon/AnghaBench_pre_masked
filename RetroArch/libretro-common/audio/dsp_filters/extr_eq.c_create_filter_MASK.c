
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eq_gain {int dummy; } ;
struct eq_data {int block_size; int filter; int fft; } ;
typedef int fft_t ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,int ,float*,int) ;
 int FUNC_5 (int *,float*,int ,int) ;
 int * FUNC_6 (char const*,char*) ;
 int FUNC_7 (int *,char*,float) ;
 int FUNC_8 (float*) ;
 int VAR_0 ;
 int FUNC_9 (int ,struct eq_gain*,unsigned int,int) ;
 double FUNC_10 (double,double) ;
 int FUNC_11 (struct eq_gain*,unsigned int,int,int ) ;

__attribute__((used)) static void FUNC_12(struct eq_data *VAR_1, unsigned VAR_2,
      struct eq_gain *VAR_3, unsigned VAR_4, double VAR_5, const char *VAR_6)
{
   int VAR_7;
   int VAR_8 = VAR_1->block_size >> 1;
   double VAR_9 = 1.0 / FUNC_10(0.0, VAR_5);

   fft_t *VAR_10 = FUNC_3(VAR_2);
   float *VAR_11 = (float*)FUNC_0(VAR_1->block_size * 2 + 1, sizeof(*VAR_11));
   if (!VAR_10 || !VAR_11)
      goto end;


   FUNC_11(VAR_3, VAR_4, sizeof(*VAR_3), VAR_0);


   FUNC_9(VAR_1->filter, VAR_3, VAR_4, VAR_8);


   FUNC_5(VAR_10, VAR_11, VAR_1->filter, 1);






   for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   {
      float VAR_12 = VAR_11[VAR_7 + VAR_8];
      VAR_11[VAR_7 + VAR_8] = VAR_11[VAR_7];
      VAR_11[VAR_7] = VAR_12;
   }


   for (VAR_7 = 0; VAR_7 < (int)VAR_1->block_size; VAR_7++)
   {

      double VAR_13 = (double)VAR_7 / VAR_1->block_size;
      VAR_13 = 2.0 * (VAR_13 - 0.5);
      VAR_11[VAR_7] *= VAR_9 * FUNC_10(VAR_13, VAR_5);
   }


   if (VAR_6)
   {
      FILE *VAR_14 = FUNC_6(VAR_6, "w");
      if (VAR_14)
      {
         for (VAR_7 = 0; VAR_7 < (int)VAR_1->block_size - 1; VAR_7++)
            FUNC_7(VAR_14, "%.8f\n", VAR_11[VAR_7 + 1]);
         FUNC_1(VAR_14);
      }
   }





   FUNC_4(VAR_1->fft, VAR_1->filter, VAR_11 + 1, 1);

end:
   FUNC_2(VAR_10);
   FUNC_8(VAR_11);
}
