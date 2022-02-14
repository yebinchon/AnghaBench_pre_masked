
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arguments {scalar_t__ abort; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,char**,int ,int ,struct arguments*) ;
 int FUNC_1 (int,int ,char*) ;

void FUNC_2(int VAR_1, char *VAR_2[], struct arguments *VAR_3) {
  FUNC_0(&VAR_0, VAR_1, VAR_2, 0, 0, VAR_3);
  if (VAR_3->abort) {
    FUNC_1(10, 0, "ABORTED");
  }
}
