
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int db ;
typedef int SDbObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,int ) ;

SDbObj *FUNC_4(char *VAR_3) {
  char VAR_4[VAR_0], *VAR_5;

  VAR_5 = FUNC_3(VAR_3, VAR_1);
  VAR_5 = FUNC_3(VAR_5 + 1, VAR_1);
  FUNC_0(VAR_4, 0, sizeof(VAR_4));
  FUNC_2(VAR_4, VAR_3, VAR_5 - VAR_3);

  return (SDbObj *)FUNC_1(VAR_2, VAR_4);
}
