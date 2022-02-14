
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int*,int*) ;

__attribute__((used)) static void FUNC_1(int VAR_6, int VAR_7, int VAR_8, int VAR_9,
 int VAR_10, int VAR_11, char *VAR_12, int *VAR_13,
 int *VAR_14)
{
 int VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;







 VAR_15 = 13 + VAR_8;
 VAR_16 = (13 + 2) + VAR_8;
 VAR_17 = (13 + 3) + VAR_8;
 VAR_22 = 48;
 if (VAR_6 == 2) {
  VAR_15 += 8;
  VAR_16 += 8;
  VAR_17 += 8;
  VAR_22 = 40;
 }
 else if (VAR_6 == 1) {
  VAR_15 += 16;
  VAR_16 += 16;
  VAR_17 += 16;
  VAR_22 = 32;
 }

 VAR_20 = (2 << VAR_7);
 VAR_22 = (VAR_22 >> VAR_7);
 for (VAR_18 = 0; VAR_18 <= 113; VAR_18++)
  VAR_12[VAR_18] = '.';
 VAR_12[114] = '\0';
 VAR_12[0] = 'M';
 VAR_12[1] = VAR_12[6] = VAR_12[7] = 'D';
 VAR_12[2] = VAR_12[3] = VAR_12[4] = VAR_12[5] = 'P';
 VAR_19 = 0;
 for (VAR_18 = 0; VAR_18 <= 114; VAR_18++) {
  VAR_21 = 0;
  if (VAR_18 <= (13 + 95)) {
   if (VAR_9 && VAR_18 >= VAR_15 && ((VAR_18 - VAR_15) % VAR_20 == 0)
    && ((VAR_18 - VAR_15) < VAR_22 * VAR_20)) {
    VAR_21 = 'I';
   }
   if (VAR_10 && VAR_18 >= VAR_17 && ((VAR_18 - VAR_17) % VAR_20 == 0)
    && ((VAR_18 - VAR_17) < VAR_22 * VAR_20)) {
    VAR_21 = 'F';
   }
   if (VAR_11 && VAR_18 >= VAR_16 && ((VAR_18 - VAR_16) % VAR_20 == 0)
    && ((VAR_18 - VAR_16) < VAR_22 * VAR_20)) {
    VAR_21 = 'S';
   }
   if (VAR_18 >= (13 + 15) && VAR_18 <= ((13 + 15) + 32) && ((VAR_18 - (13 + 15)) % 4 == 0)) {
    VAR_19 = 1;
   }
  }
  if (VAR_21 !=0 ) {
   VAR_12[VAR_18] = VAR_21;
  }
  else if (VAR_19 != 0){
   VAR_12[VAR_18] = 'R';
   VAR_19 = 0;
  }
 }
 FUNC_0(VAR_12, VAR_13, VAR_14);
}
