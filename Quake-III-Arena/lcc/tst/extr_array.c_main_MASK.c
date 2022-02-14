
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int**,int**) ;
 int** VAR_0 ;
 int** VAR_1 ;

FUNC_2() {
 int VAR_2[3][4];
 int VAR_3, VAR_4, *VAR_5;

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
   VAR_0[VAR_3][VAR_4] = 1000*VAR_3 + VAR_4;
  VAR_1[VAR_3] = VAR_0[VAR_3];
 }
 FUNC_0();
 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  VAR_1[VAR_3] = VAR_5 = &VAR_2[VAR_3][0];
  for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
   VAR_5[VAR_4] = VAR_0[VAR_3][VAR_4];
 }
 FUNC_1(VAR_2, VAR_1);
 return 0;
}
