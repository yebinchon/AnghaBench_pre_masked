
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arguments {int dummy; } ;
typedef int int32_t ;
typedef int STableDef ;
typedef int SColDes ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,char*,int,struct arguments*,int *) ;
 int FUNC_3 (int *,int,struct arguments*,int *) ;
 int FUNC_4 (int *,char*,struct arguments*) ;
 int FUNC_5 (char*,int *) ;

int32_t FUNC_6(char *VAR_1, char *VAR_2, struct arguments *VAR_3, FILE *VAR_4) {
  int VAR_5 = 0;

  STableDef *VAR_6 = (STableDef *)FUNC_0(1, sizeof(STableDef) + sizeof(SColDes) * VAR_0);

  if (VAR_2 != ((void*)0) && VAR_2[0] != '\0') {
    VAR_5 = FUNC_5(VAR_2, VAR_6);

    if (VAR_5 < 0) return -1;

    FUNC_3(VAR_6, VAR_5, VAR_3, VAR_4);

    FUNC_1(VAR_6, 0, sizeof(STableDef) + sizeof(SColDes) * VAR_0);

    VAR_5 = FUNC_5(VAR_1, VAR_6);

    if (VAR_5 < 0) return -1;

    FUNC_2(VAR_6, VAR_2, VAR_5, VAR_3, VAR_4);

  } else {
    VAR_5 = FUNC_5(VAR_1, VAR_6);

    if (VAR_5 < 0) return -1;

    FUNC_3(VAR_6, VAR_5, VAR_3, VAR_4);
  }

  return FUNC_4(VAR_4, VAR_1, VAR_3);
}
