
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KHRN_IMAGE_WRAP_T ;
typedef scalar_t__ EGLint ;
typedef int EGLNativePixmapType ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;




 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 scalar_t__ VAR_11 ;


 scalar_t__ VAR_12 ;


 int VAR_13 ;



 scalar_t__ VAR_14 ;


 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

bool FUNC_2(const EGLint *VAR_18, bool *VAR_19, bool *VAR_20, bool *VAR_21, bool *VAR_22)
{
   if (!VAR_18)
      return 1;

   while (*VAR_18 != 140) {
      EGLint VAR_23 = *VAR_18++;
      EGLint VAR_24 = *VAR_18++;

      if (VAR_23 == 138 && VAR_24 != 0 && VAR_24 != 159)
         *VAR_19 = 1;

      if (VAR_23 == 153 && VAR_24 != 0 && VAR_24 != 159)
         *VAR_20 = 1;

      if (VAR_23 == 166 && VAR_24 != 0 && VAR_24 != 159)
         *VAR_21 = 1;

      if (VAR_23 == 169 && VAR_24 != 0 && VAR_24 != 159)
         *VAR_22 = 1;

      switch (VAR_23) {
      case 165:
      case 138:
      case 153:
      case 166:
      case 151:
      case 169:
      case 170:
         if (VAR_24 != 159 && VAR_24 < 0) return 0;
         break;
      case 168:
      case 167:
         if (VAR_24 != 159 && VAR_24 != 158 && VAR_24 != 128)
            return 0;
         break;
      case 164:
         if (VAR_24 != 159 && VAR_24 != VAR_11 && VAR_24 != VAR_1)
            return 0;
         break;
      case 163:
         if (VAR_24 != 159 && VAR_24 != 140 && VAR_24 != VAR_12 && VAR_24 != VAR_3)
            return 0;
         break;
      case 162:
         if (VAR_24 != 159 && VAR_24 < 1)
            return 0;
         break;
      case 161:
         if (VAR_24 != 159 && (VAR_24 & ~(VAR_4|VAR_6|VAR_5|VAR_7)))
            return 0;
         break;
      case 160:
         if (VAR_24 != 159 && VAR_24 < 0) return 0;
         break;
      case 152:
         break;
      case 149:





         if (VAR_24 != 159) {
            KHRN_IMAGE_WRAP_T VAR_25;
            if (!FUNC_1((EGLNativePixmapType)(intptr_t)VAR_24, &VAR_25))
               return 0;
            FUNC_0((EGLNativePixmapType)(intptr_t)VAR_24, &VAR_25);
         }
         break;
      case 146:
      case 148:
      case 147:
         break;
      case 145:
      case 144:
         if (VAR_24 != 159 && VAR_24 < 0) return 0;
         break;
      case 143:
         if (VAR_24 != 159 && VAR_24 != 158 && VAR_24 != 128)
            return 0;
         break;
      case 142:
      case 141:
         break;
      case 137:
         if (VAR_24 != 159 && (VAR_24 & ~(VAR_4|VAR_6|VAR_5|VAR_7)))
            return 0;
         break;
      case 135:
      case 136:
      case 134:
         if (VAR_24 != 159 && VAR_24 < 0) return 0;
         break;
      case 133:
      {
         int VAR_26 = VAR_17|VAR_10|VAR_9|
            VAR_2|VAR_13|
            VAR_16|VAR_15;



         if (VAR_24 != 159 && (VAR_24 & ~VAR_26))
            return 0;
         break;
      }
      case 129:
         if (VAR_24 != 159 && VAR_24 != 140 && VAR_24 != VAR_14)
            return 0;
         break;
      case 130:
      case 131:
      case 132:
         if (VAR_24 != 159 && VAR_24 < 0) return 0;
         break;
      default:
         return 0;
      }
   }

   return 1;
}
