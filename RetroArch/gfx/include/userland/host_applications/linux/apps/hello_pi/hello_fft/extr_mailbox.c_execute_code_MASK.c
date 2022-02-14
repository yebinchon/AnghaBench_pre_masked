
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,unsigned int*) ;

unsigned FUNC_1(int VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7)
{
   int VAR_8=0;
   unsigned VAR_9[32];
   VAR_9[VAR_8++] = 0;
   VAR_9[VAR_8++] = 0x00000000;

   VAR_9[VAR_8++] = 0x30010;
   VAR_9[VAR_8++] = 28;
   VAR_9[VAR_8++] = 28;
   VAR_9[VAR_8++] = VAR_1;
   VAR_9[VAR_8++] = VAR_2;
   VAR_9[VAR_8++] = VAR_3;
   VAR_9[VAR_8++] = VAR_4;
   VAR_9[VAR_8++] = VAR_5;
   VAR_9[VAR_8++] = VAR_6;
   VAR_9[VAR_8++] = VAR_7;

   VAR_9[VAR_8++] = 0x00000000;
   VAR_9[0] = VAR_8*sizeof *VAR_9;

   FUNC_0(VAR_0, VAR_9);
   return VAR_9[5];
}
