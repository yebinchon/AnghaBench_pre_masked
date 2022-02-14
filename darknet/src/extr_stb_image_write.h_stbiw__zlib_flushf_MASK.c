
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned char*,int ) ;

__attribute__((used)) static unsigned char *FUNC_2(unsigned char *VAR_0, unsigned int *VAR_1, int *VAR_2)
{
   while (*VAR_2 >= 8) {
      FUNC_1(VAR_0, FUNC_0(*VAR_1));
      *VAR_1 >>= 8;
      *VAR_2 -= 8;
   }
   return VAR_0;
}
