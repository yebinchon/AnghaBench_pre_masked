
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int RFILE ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(RFILE *VAR_1, uint64_t *VAR_2, size_t VAR_3)
{
   uint64_t VAR_4;

   if (FUNC_0(VAR_1, &VAR_4, VAR_3) == -1)
      goto error;

   switch (VAR_3)
   {
      case 1:
         *VAR_2 = *(uint8_t *)(&VAR_4);
         break;
      case 2:
         *VAR_2 = FUNC_1((uint16_t)VAR_4);
         break;
      case 4:
         *VAR_2 = FUNC_2((uint32_t)VAR_4);
         break;
      case 8:
         *VAR_2 = FUNC_3(VAR_4);
         break;
   }
   return 0;

error:
   return -VAR_0;
}
