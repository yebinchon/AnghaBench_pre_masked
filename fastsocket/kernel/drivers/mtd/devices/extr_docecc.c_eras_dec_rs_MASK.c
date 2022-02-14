
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gf ;
typedef int dtype ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,int) ;
 size_t FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int
FUNC_6(dtype VAR_6[VAR_4 + 1], dtype VAR_7[VAR_4 + 1],
            gf VAR_8[VAR_4 - VAR_2 + 1], gf VAR_9[VAR_4-VAR_2], int VAR_10[VAR_4-VAR_2],
            int VAR_11)
{
  int VAR_12, VAR_13, VAR_14;
  int VAR_15, VAR_16, VAR_17,VAR_18;
  gf VAR_19,VAR_20,VAR_21,VAR_22,VAR_23,VAR_24,VAR_25;
  gf VAR_26[VAR_4-VAR_2 + 1], VAR_27[VAR_4-VAR_2 + 1];

  gf VAR_28[VAR_4-VAR_2 + 1], VAR_29[VAR_4-VAR_2 + 1], VAR_30[VAR_4-VAR_2 + 1];
  gf VAR_31[VAR_4-VAR_2], VAR_32[VAR_4-VAR_2 + 1], VAR_33[VAR_4-VAR_2];
  int VAR_34, VAR_35;

  VAR_34 = 0;
  for(VAR_15=0;VAR_15<VAR_4-VAR_2;VAR_15++)
      VAR_34 |= VAR_8[VAR_15];

  if (!VAR_34) {



    VAR_35 = 0;
    goto finish;
  }

  for(VAR_15=1;VAR_15<=VAR_4-VAR_2;VAR_15++){
    VAR_27[VAR_15] = VAR_8[0];
  }
  for(VAR_16=1;VAR_16<VAR_4-VAR_2;VAR_16++){
    if(VAR_8[VAR_16] == 0)
      continue;
    VAR_21 = VAR_7[VAR_8[VAR_16]];

    for(VAR_15=1;VAR_15<=VAR_4-VAR_2;VAR_15++)
      VAR_27[VAR_15] ^= VAR_6[FUNC_4(VAR_21 + (VAR_1+VAR_15-1)*VAR_5*VAR_16)];
  }




  for(VAR_15=1;VAR_15<=VAR_4-VAR_2;VAR_15++) {
      VAR_21 = VAR_7[VAR_27[VAR_15]];
      if (VAR_21 != VAR_0)
          VAR_21 = FUNC_4(VAR_21 + 2 * VAR_2 * (VAR_1+VAR_15-1)*VAR_5);
      VAR_27[VAR_15] = VAR_21;
  }

  FUNC_0(&VAR_26[1],VAR_4-VAR_2);
  VAR_26[0] = 1;

  if (VAR_11 > 0) {

    VAR_26[1] = VAR_6[FUNC_4(VAR_5 * VAR_10[0])];
    for (VAR_15 = 1; VAR_15 < VAR_11; VAR_15++) {
      VAR_19 = FUNC_4(VAR_5*VAR_10[VAR_15]);
      for (VAR_16 = VAR_15+1; VAR_16 > 0; VAR_16--) {
 VAR_21 = VAR_7[VAR_26[VAR_16 - 1]];
 if(VAR_21 != VAR_0)
   VAR_26[VAR_16] ^= VAR_6[FUNC_4(VAR_19 + VAR_21)];
      }
    }
  }
  for(VAR_15=0;VAR_15<VAR_4-VAR_2+1;VAR_15++)
    VAR_28[VAR_15] = VAR_7[VAR_26[VAR_15]];





  VAR_17 = VAR_11;
  VAR_13 = VAR_11;
  while (++VAR_17 <= VAR_4-VAR_2) {

    VAR_25 = 0;
    for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++){
      if ((VAR_26[VAR_15] != 0) && (VAR_27[VAR_17 - VAR_15] != VAR_0)) {
 VAR_25 ^= VAR_6[FUNC_4(VAR_7[VAR_26[VAR_15]] + VAR_27[VAR_17 - VAR_15])];
      }
    }
    VAR_25 = VAR_7[VAR_25];
    if (VAR_25 == VAR_0) {

      FUNC_2(&VAR_28[1],VAR_28,VAR_4-VAR_2);
      VAR_28[0] = VAR_0;
    } else {

      VAR_29[0] = VAR_26[0];
      for (VAR_15 = 0 ; VAR_15 < VAR_4-VAR_2; VAR_15++) {
 if(VAR_28[VAR_15] != VAR_0)
   VAR_29[VAR_15+1] = VAR_26[VAR_15+1] ^ VAR_6[FUNC_4(VAR_25 + VAR_28[VAR_15])];
 else
   VAR_29[VAR_15+1] = VAR_26[VAR_15+1];
      }
      if (2 * VAR_13 <= VAR_17 + VAR_11 - 1) {
 VAR_13 = VAR_17 + VAR_11 - VAR_13;




 for (VAR_15 = 0; VAR_15 <= VAR_4-VAR_2; VAR_15++)
   VAR_28[VAR_15] = (VAR_26[VAR_15] == 0) ? VAR_0 : FUNC_4(VAR_7[VAR_26[VAR_15]] - VAR_25 + VAR_4);
      } else {

 FUNC_2(&VAR_28[1],VAR_28,VAR_4-VAR_2);
 VAR_28[0] = VAR_0;
      }
      FUNC_1(VAR_26,VAR_29,VAR_4-VAR_2+1);
    }
  }


  VAR_12 = 0;
  for(VAR_15=0;VAR_15<VAR_4-VAR_2+1;VAR_15++){
    VAR_26[VAR_15] = VAR_7[VAR_26[VAR_15]];
    if(VAR_26[VAR_15] != VAR_0)
      VAR_12 = VAR_15;
  }




  FUNC_1(&VAR_32[1],&VAR_26[1],VAR_4-VAR_2);
  VAR_35 = 0;
  for (VAR_15 = 1,VAR_18=VAR_4-VAR_3; VAR_15 <= VAR_4; VAR_15++,VAR_18 = FUNC_4(VAR_4+VAR_18-VAR_3)) {
    VAR_20 = 1;
    for (VAR_16 = VAR_12; VAR_16 > 0; VAR_16--){
      if (VAR_32[VAR_16] != VAR_0) {
 VAR_32[VAR_16] = FUNC_4(VAR_32[VAR_16] + VAR_16);
 VAR_20 ^= VAR_6[VAR_32[VAR_16]];
      }
    }
    if (VAR_20 != 0)
      continue;

    VAR_31[VAR_35] = VAR_15;
    VAR_33[VAR_35] = VAR_18;



    if(++VAR_35 == VAR_12)
      break;
  }
  if (VAR_12 != VAR_35) {




    VAR_35 = -1;
    goto finish;
  }




  VAR_14 = 0;
  for (VAR_15 = 0; VAR_15 < VAR_4-VAR_2;VAR_15++){
    VAR_21 = 0;
    VAR_16 = (VAR_12 < VAR_15) ? VAR_12 : VAR_15;
    for(;VAR_16 >= 0; VAR_16--){
      if ((VAR_27[VAR_15 + 1 - VAR_16] != VAR_0) && (VAR_26[VAR_16] != VAR_0))
 VAR_21 ^= VAR_6[FUNC_4(VAR_27[VAR_15 + 1 - VAR_16] + VAR_26[VAR_16])];
    }
    if(VAR_21 != 0)
      VAR_14 = VAR_15;
    VAR_30[VAR_15] = VAR_7[VAR_21];
  }
  VAR_30[VAR_4-VAR_2] = VAR_0;





  for (VAR_16 = VAR_35-1; VAR_16 >=0; VAR_16--) {
    VAR_22 = 0;
    for (VAR_15 = VAR_14; VAR_15 >= 0; VAR_15--) {
      if (VAR_30[VAR_15] != VAR_0)
 VAR_22 ^= VAR_6[FUNC_4(VAR_30[VAR_15] + VAR_15 * VAR_31[VAR_16])];
    }
    VAR_23 = VAR_6[FUNC_4(VAR_31[VAR_16] * (VAR_1 - 1) + VAR_4)];
    VAR_24 = 0;


    for (VAR_15 = FUNC_3(VAR_12,VAR_4-VAR_2-1) & ~1; VAR_15 >= 0; VAR_15 -=2) {
      if(VAR_26[VAR_15+1] != VAR_0)
 VAR_24 ^= VAR_6[FUNC_4(VAR_26[VAR_15+1] + VAR_15 * VAR_31[VAR_16])];
    }
    if (VAR_24 == 0) {




      VAR_35 = -1;
      goto finish;
    }

    if (VAR_22 != 0) {
        VAR_9[VAR_16] = VAR_6[FUNC_4(VAR_7[VAR_22] + VAR_7[VAR_23] + VAR_4 - VAR_7[VAR_24])];
    } else {
        VAR_9[VAR_16] = 0;
    }
  }
 finish:
  for(VAR_15=0;VAR_15<VAR_35;VAR_15++)
      VAR_10[VAR_15] = VAR_33[VAR_15];
  return VAR_35;
}
