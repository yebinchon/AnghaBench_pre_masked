
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_0, const void *VAR_1, int VAR_2){
  int VAR_3;
  char *VAR_4 = (char *)VAR_1;
  FUNC_0(VAR_0,"X'");
  for(VAR_3=0; VAR_3<VAR_2; VAR_3++){ FUNC_0(VAR_0,"%02x",VAR_4[VAR_3]&0xff); }
  FUNC_0(VAR_0,"'");
}
