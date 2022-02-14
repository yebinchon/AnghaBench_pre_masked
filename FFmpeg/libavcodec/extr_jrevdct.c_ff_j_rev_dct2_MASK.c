
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* DCTBLOCK ;


 int VAR_0 ;

void FUNC_0(DCTBLOCK VAR_1){
  int VAR_2, VAR_3, VAR_4, VAR_5;

  VAR_1[0] += 4;
  VAR_2 = VAR_1[0+0*VAR_0] + VAR_1[1+0*VAR_0];
  VAR_3 = VAR_1[0+0*VAR_0] - VAR_1[1+0*VAR_0];
  VAR_4 = VAR_1[0+1*VAR_0] + VAR_1[1+1*VAR_0];
  VAR_5 = VAR_1[0+1*VAR_0] - VAR_1[1+1*VAR_0];

  VAR_1[0+0*VAR_0]= (VAR_2 + VAR_4)>>3;
  VAR_1[1+0*VAR_0]= (VAR_3 + VAR_5)>>3;
  VAR_1[0+1*VAR_0]= (VAR_2 - VAR_4)>>3;
  VAR_1[1+1*VAR_0]= (VAR_3 - VAR_5)>>3;
}
