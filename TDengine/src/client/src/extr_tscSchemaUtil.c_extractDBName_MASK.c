
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* z; int type; int n; } ;
typedef TYPE_1__ SSQLToken ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*,char*,int ) ;
 char* FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;

SSQLToken FUNC_3(char* VAR_2, char* VAR_3) {
  char* VAR_4 = FUNC_1(VAR_2, VAR_1[0], 1);
  FUNC_0(VAR_3, VAR_4, VAR_1[0]);

  SSQLToken VAR_5 = {.z = VAR_3, .n = FUNC_2(VAR_3), .type = VAR_0};
  return VAR_5;
}
