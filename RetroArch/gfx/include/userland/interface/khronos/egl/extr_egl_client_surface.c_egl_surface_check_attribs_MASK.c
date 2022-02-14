
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ EGLint ;
typedef int EGLenum ;
typedef int EGL_SURFACE_TYPE_T ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ const VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;

bool FUNC_0(
   EGL_SURFACE_TYPE_T VAR_15,
   const EGLint *VAR_16,
   bool *VAR_17,
   bool *VAR_18,
   bool *VAR_19,
   int *VAR_20,
   int *VAR_21,
   bool *VAR_22,
   EGLenum *VAR_23,
   EGLenum *VAR_24,
   bool *VAR_25
   )
{
   if (!VAR_16)
      return 1;

   while (*VAR_16 != VAR_2) {
      int VAR_26 = *VAR_16++;
      int VAR_27 = *VAR_16++;

      switch (VAR_26) {
      case 129:
         if (VAR_27 != VAR_12 && VAR_27 != VAR_11)
            return 0;
         if (VAR_27 == VAR_11 && VAR_17 != ((void*)0))
            *VAR_17 = 1;
         break;
      case 130:
         if (VAR_27 != VAR_9 && VAR_27 != VAR_10)
            return 0;
         if (VAR_27 == VAR_10 && VAR_18 != ((void*)0))
            *VAR_18 = 1;
         break;


      case 133:
         if (VAR_15 != VAR_14 || (VAR_27 != VAR_4 && VAR_27 != VAR_0))
            return 0;
         if (VAR_27 == VAR_4 && VAR_19 != ((void*)0))
            *VAR_19 = 1;
         break;


      case 128:
         if (VAR_15 != VAR_13 || VAR_27 < 0)
            return 0;
         if (VAR_20 != ((void*)0))
            *VAR_20 = VAR_27;
         break;
      case 136:
         if (VAR_15 != VAR_13 || VAR_27 < 0)
            return 0;
         if (VAR_21 != ((void*)0))
            *VAR_21 = VAR_27;
         break;
      case 135:
         if (VAR_15 != VAR_13 || (VAR_27 != VAR_1 && VAR_27 != VAR_8))
            return 0;
         if (VAR_22 != ((void*)0))
            *VAR_22 = VAR_27;
         break;
      case 132:
         if (VAR_15 != VAR_13 || (VAR_27 != VAR_3 && VAR_27 != VAR_6 && VAR_27 != VAR_7))
            return 0;
         if (VAR_23 != ((void*)0))
            *VAR_23 = VAR_27;
         break;
      case 131:
         if (VAR_15 != VAR_13 || (VAR_27 != VAR_3 && VAR_27 != VAR_5))
            return 0;
         if (VAR_24 != ((void*)0))
            *VAR_24 = VAR_27;
         break;
      case 134:
         if (VAR_15 != VAR_13 || (VAR_27 != VAR_1 && VAR_27 != VAR_8))
            return 0;
         if (VAR_25 != ((void*)0))
            *VAR_25 = VAR_27;
         break;
      default:
         return 0;
      }
   }

   return 1;
}
