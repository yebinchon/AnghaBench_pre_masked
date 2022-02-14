
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(unsigned VAR_0, unsigned VAR_1)
{
   unsigned VAR_2 = FUNC_0(VAR_0, VAR_1);
   unsigned VAR_3 = 0;
   while (VAR_2)
   {
      VAR_3++;
      VAR_2 >>= 1;
   }
   return VAR_3;
}
