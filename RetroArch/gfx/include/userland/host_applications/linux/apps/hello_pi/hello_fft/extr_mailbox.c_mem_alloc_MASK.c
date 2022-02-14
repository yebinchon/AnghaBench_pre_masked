
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,unsigned int*) ;

unsigned FUNC_1(int VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
   int VAR_4=0;
   unsigned VAR_5[32];
   VAR_5[VAR_4++] = 0;
   VAR_5[VAR_4++] = 0x00000000;

   VAR_5[VAR_4++] = 0x3000c;
   VAR_5[VAR_4++] = 12;
   VAR_5[VAR_4++] = 12;
   VAR_5[VAR_4++] = VAR_1;
   VAR_5[VAR_4++] = VAR_2;
   VAR_5[VAR_4++] = VAR_3;

   VAR_5[VAR_4++] = 0x00000000;
   VAR_5[0] = VAR_4*sizeof *VAR_5;

   FUNC_0(VAR_0, VAR_5);
   return VAR_5[5];
}
