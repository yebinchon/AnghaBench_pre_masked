
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,int,int,int *) ;
 int* FUNC_4 (int) ;
 int FUNC_5 (int*,int ,int) ;

void FUNC_6 (const char *VAR_0, byte *VAR_1, int VAR_2, int VAR_3) {
 byte *VAR_4;
 int VAR_5;
 int VAR_6;
 FILE *VAR_7;

 VAR_4 = FUNC_4(VAR_2*VAR_3*4 + 18);
 FUNC_5 (VAR_4, 0, 18);
 VAR_4[2] = 2;
 VAR_4[12] = VAR_2&255;
 VAR_4[13] = VAR_2>>8;
 VAR_4[14] = VAR_3&255;
 VAR_4[15] = VAR_3>>8;
 VAR_4[16] = 32;


 VAR_6 = 18 + VAR_2 * VAR_3 * 4;
 for (VAR_5=18 ; VAR_5<VAR_6 ; VAR_5+=4)
 {
  VAR_4[VAR_5] = VAR_1[VAR_5-18+2];
  VAR_4[VAR_5+1] = VAR_1[VAR_5-18+1];
  VAR_4[VAR_5+2] = VAR_1[VAR_5-18+0];
  VAR_4[VAR_5+3] = VAR_1[VAR_5-18+3];
 }

 VAR_7 = FUNC_1 (VAR_0, "wb");
 FUNC_3 (VAR_4, 1, VAR_6, VAR_7);
 FUNC_0 (VAR_7);

 FUNC_2 (VAR_4);
}
