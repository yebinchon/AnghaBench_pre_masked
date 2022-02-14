
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp ;
typedef int int16_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (char*,int,int,int *) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,char*,char*) ;
 char* VAR_2 ;
 int VAR_3 ;

void FUNC_4(FILE* VAR_4) {
  char VAR_5[VAR_1 / 4];
  int VAR_6;

  VAR_6 = sizeof(VAR_5);


  FUNC_2(VAR_5, 0, VAR_6);
  *(int16_t*)VAR_5 = VAR_3;
  FUNC_3(VAR_5 + sizeof(int16_t), "tsdb version: %s\n", VAR_2);

  FUNC_0(VAR_4, 0, VAR_0);
  FUNC_1(VAR_5, VAR_6, 1, VAR_4);


  FUNC_2(VAR_5, 0, VAR_6);
  FUNC_1(VAR_5, VAR_6, 1, VAR_4);


  FUNC_2(VAR_5, 0, VAR_6);
  FUNC_1(VAR_5, VAR_6, 1, VAR_4);
  FUNC_1(VAR_5, VAR_6, 1, VAR_4);
}
