
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint32_t ;
typedef int VC_CONTAINER_STATUS_T ;
typedef int FILE ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int,int,int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1(FILE *VAR_3, bool *VAR_4)
{
   uint32_t VAR_5;

   if (FUNC_0(&VAR_5, 1, sizeof(VAR_5), VAR_3) != sizeof(VAR_5))
      return VAR_1;

   switch (VAR_5)
   {
   case 129: *VAR_4 = 1; break;
   case 128: *VAR_4 = 0; break;
   default: return VAR_0;
   }

   return VAR_2;
}
