
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,unsigned int*) ;

unsigned FUNC_1(int VAR_0, unsigned VAR_1)
{
   int VAR_2=0;
   unsigned VAR_3[32];

   VAR_3[VAR_2++] = 0;
   VAR_3[VAR_2++] = 0x00000000;

   VAR_3[VAR_2++] = 0x30012;
   VAR_3[VAR_2++] = 4;
   VAR_3[VAR_2++] = 4;
   VAR_3[VAR_2++] = VAR_1;

   VAR_3[VAR_2++] = 0x00000000;
   VAR_3[0] = VAR_2*sizeof *VAR_3;

   FUNC_0(VAR_0, VAR_3);
   return VAR_3[5];
}
