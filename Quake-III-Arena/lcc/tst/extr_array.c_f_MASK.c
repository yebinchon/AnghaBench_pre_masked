
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int** VAR_0 ;
 int** VAR_1 ;

FUNC_1() {
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
   FUNC_0(" %d", VAR_0[VAR_2][VAR_3]);
 FUNC_0("\n");
 for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
  for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
   FUNC_0(" %d", VAR_1[VAR_2][VAR_3]);
 FUNC_0("\n");
}
