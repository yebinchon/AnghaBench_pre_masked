
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int int8_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef int RFILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(RFILE *VAR_1, int64_t *VAR_2, size_t VAR_3)
{
   uint8_t VAR_4 = 0;
   uint16_t VAR_5;
   uint32_t VAR_6;
   uint64_t VAR_7;

   if (FUNC_0(VAR_1, &VAR_7, VAR_3) == -1)
      goto error;

   (void)VAR_4;

   switch (VAR_3)
   {
      case 1:
         *VAR_2 = *((int8_t *)(&VAR_7));
         break;
      case 2:
         VAR_5 = FUNC_1((uint16_t)VAR_7);
         *VAR_2 = *((int16_t *)(&VAR_5));
         break;
      case 4:
         VAR_6 = FUNC_2((uint32_t)VAR_7);
         *VAR_2 = *((int32_t *)(&VAR_6));
         break;
      case 8:
         VAR_7 = FUNC_3(VAR_7);
         *VAR_2 = *((int64_t *)(&VAR_7));
         break;
   }
   return 0;

error:
   return -VAR_0;
}
