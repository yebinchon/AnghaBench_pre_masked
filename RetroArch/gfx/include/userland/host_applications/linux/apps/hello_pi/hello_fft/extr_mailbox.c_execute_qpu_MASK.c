
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,unsigned int*) ;

unsigned FUNC_1(int VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3, unsigned VAR_4) {
   int VAR_5=0;
   unsigned VAR_6[32];

   VAR_6[VAR_5++] = 0;
   VAR_6[VAR_5++] = 0x00000000;
   VAR_6[VAR_5++] = 0x30011;
   VAR_6[VAR_5++] = 16;
   VAR_6[VAR_5++] = 16;
   VAR_6[VAR_5++] = VAR_1;
   VAR_6[VAR_5++] = VAR_2;
   VAR_6[VAR_5++] = VAR_3;
   VAR_6[VAR_5++] = VAR_4;

   VAR_6[VAR_5++] = 0x00000000;
   VAR_6[0] = VAR_5*sizeof *VAR_6;

   FUNC_0(VAR_0, VAR_6);
   return VAR_6[5];
}
