
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int64_t ;
typedef int VC_CONTAINER_IO_T ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int64_t FUNC_1(VC_CONTAINER_IO_T *VAR_0, int64_t *VAR_1)
{
   uint64_t VAR_2, VAR_3;

   VAR_2 = FUNC_0(VAR_0); (*VAR_1)--;
   if(VAR_2 == 0xFF) return -1;

   for(VAR_3 = 0x80; VAR_3; VAR_3 <<= 7)
   {
      if(VAR_2 & VAR_3) return VAR_2 & ~VAR_3;
      VAR_2 = (VAR_2 << 8) | FUNC_0(VAR_0); (*VAR_1)--;
   }
   return 0;
}
