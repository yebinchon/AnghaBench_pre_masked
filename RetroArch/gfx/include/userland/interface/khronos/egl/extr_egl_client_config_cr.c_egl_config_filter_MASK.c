
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int KHRN_IMAGE_WRAP_T ;
typedef scalar_t__ EGLint ;
typedef int EGLNativePixmapType ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ const VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__,scalar_t__*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;

bool FUNC_7(int VAR_6, const EGLint *VAR_7)
{
   if (!VAR_7)
      return 1;

   while (*VAR_7 != VAR_5) {
      EGLint VAR_8 = *VAR_7++;
      EGLint VAR_9 = *VAR_7++;
      EGLint VAR_10;

      if (!FUNC_2(VAR_6, VAR_8, &VAR_10) )
      {
         FUNC_0();
         return 0;
      }

      switch (VAR_8) {

      case 157:
      case 137:
      case 151:
      case 158:
      case 149:
      case 161:
      case 162:
      case 152:
      case 134:
      case 135:
      case 133:
         if (VAR_9 != VAR_0 && VAR_9 > VAR_10)
            return 0;
         break;
      case 160:
      case 159:
      case 156:
      case 155:
      case 154:
      case 143:
      case 142:
      case 141:
      case 128:



         if (VAR_9 != VAR_0 && VAR_9 != VAR_10)
            return 0;
         break;

      case 150:
         if (VAR_9 != VAR_10)
            return 0;
         break;


      case 153:
      case 136:
      case 132:
         if (VAR_9 != VAR_0 && (VAR_9 & ~VAR_10))
            return 0;
         break;


      case 147:
         if (VAR_9 != VAR_0) {
            EGLNativePixmapType VAR_11 = (EGLNativePixmapType)(intptr_t)VAR_9;
            KHRN_IMAGE_WRAP_T VAR_12;
            if (!FUNC_5(VAR_11, &VAR_12)) {





               FUNC_0();
               return 0;
            }
            if (!FUNC_3(VAR_6, &VAR_12) ||
               !FUNC_6(VAR_11, FUNC_1(VAR_6)))
            {
               FUNC_4(VAR_11, &VAR_12);
               return 0;
            }

            FUNC_4(VAR_11, &VAR_12);
         }
         break;
      case 144:
      case 146:
      case 145:
      case 140:






      case 139:





      case 131:
      case 130:
      case 129:
         break;

      default:
         FUNC_0();
         break;
      }
   }

   return 1;
}
