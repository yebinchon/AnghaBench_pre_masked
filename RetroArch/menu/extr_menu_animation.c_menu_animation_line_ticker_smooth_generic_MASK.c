
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int,size_t,size_t,size_t,size_t,size_t,size_t,float,size_t*,float*,float*,size_t*,float*,float*) ;
 int FUNC_2 (size_t*,float*,float*,size_t*,float*,float*) ;

__attribute__((used)) static void FUNC_3(uint64_t VAR_0,
      bool VAR_1, size_t VAR_2, size_t VAR_3,
      size_t VAR_4, size_t VAR_5,
      size_t *VAR_6, size_t *VAR_7, float *VAR_8,
      bool *VAR_9,
      size_t *VAR_10, float *VAR_11, float *VAR_12,
      size_t *VAR_13, float *VAR_14, float *VAR_15)
{
   size_t VAR_16 = FUNC_0(VAR_2);

   size_t VAR_17 = VAR_5 - VAR_4;


   size_t VAR_18 = ((VAR_17 * 2) + 2) * VAR_16;
   size_t VAR_19 = VAR_0 % VAR_18;
   size_t VAR_20 = 0;
   bool VAR_21 = 0;
   bool VAR_22 = 1;


   if (VAR_19 < VAR_16)
      VAR_21 = 1;
   VAR_19 = (VAR_19 >= VAR_16) ? VAR_19 - VAR_16 : 0;

   if (VAR_19 >= VAR_17 * VAR_16)
   {
      VAR_22 = 0;

      if (VAR_19 < (VAR_17 + 1) * VAR_16)
      {
         VAR_21 = 1;
         VAR_19 = 0;
      }
      else
         VAR_19 -= (VAR_17 + 1) * VAR_16;
   }

   VAR_20 = VAR_19 % VAR_16;

   if (VAR_21 || (VAR_20 == 0))
   {


      *VAR_6 = VAR_4;
      *VAR_8 = 0.0f;
      *VAR_9 = 0;

      if (VAR_21)
         *VAR_7 = VAR_22 ? 0 : VAR_17;
      else
         *VAR_7 = VAR_22 ? (VAR_19 / VAR_16) : (VAR_17 - (VAR_19 / VAR_16));
   }
   else
   {

      *VAR_6 = VAR_4 - 1;
      *VAR_9 = VAR_1;

      if (VAR_22)
      {
         *VAR_7 = (VAR_19 / VAR_16) + 1;
         *VAR_8 = (float)VAR_3 * (float)(VAR_16 - VAR_20) / (float)VAR_16;
      }
      else
      {
         *VAR_7 = VAR_17 - (VAR_19 / VAR_16);
         *VAR_8 = (float)VAR_3 * (1.0f - (float)(VAR_16 - VAR_20) / (float)VAR_16);
      }


      if (*VAR_9)
         FUNC_1(
               VAR_22, VAR_16, VAR_20, VAR_3,
               VAR_5, *VAR_6, *VAR_7, *VAR_8,
               VAR_10, VAR_11, VAR_12,
               VAR_13, VAR_14, VAR_15);
   }



   if (!*VAR_9)
      FUNC_2(
            VAR_10, VAR_11, VAR_12,
            VAR_13, VAR_14, VAR_15);
}
