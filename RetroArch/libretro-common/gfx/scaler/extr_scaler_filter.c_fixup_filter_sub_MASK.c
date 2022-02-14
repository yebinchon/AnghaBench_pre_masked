
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scaler_filter {int filter_len; int* filter_pos; int filter_stride; int * filter; } ;
typedef int int16_t ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(struct scaler_filter *VAR_0,
      int VAR_1, int VAR_2)
{
   int VAR_3;
   int VAR_4 = VAR_2 - VAR_0->filter_len;

   for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
   {
      int VAR_5 = VAR_0->filter_pos[VAR_3] - VAR_4;
      int VAR_6 = -VAR_0->filter_pos[VAR_3];

      if (VAR_5 > 0)
      {
         int16_t *VAR_7 = ((void*)0);

         VAR_0->filter_pos[VAR_3] -= VAR_5;

         VAR_7 = VAR_0->filter + VAR_3 * VAR_0->filter_stride;

         if (VAR_5 > (int)VAR_0->filter_len)
            FUNC_1(VAR_7, 0, VAR_0->filter_len * sizeof(int16_t));
         else
         {
            FUNC_0(VAR_7 + VAR_5, VAR_7,
                  (VAR_0->filter_len - VAR_5) * sizeof(int16_t));
            FUNC_1(VAR_7, 0, VAR_5 * sizeof(int16_t));
         }
      }

      if (VAR_6 > 0)
      {
         int16_t *VAR_8 = ((void*)0);

         VAR_0->filter_pos[VAR_3] += VAR_6;
         VAR_8 = VAR_0->filter + VAR_3 * VAR_0->filter_stride;

         if (VAR_6 > (int)VAR_0->filter_len)
            FUNC_1(VAR_8, 0, VAR_0->filter_len * sizeof(int16_t));
         else
         {
            FUNC_0(VAR_8, VAR_8 + VAR_6,
                  (VAR_0->filter_len - VAR_6) * sizeof(int16_t));
            FUNC_1(VAR_8 + (VAR_0->filter_len - VAR_6),
                  0, VAR_6 * sizeof(int16_t));
         }
      }
   }
}
