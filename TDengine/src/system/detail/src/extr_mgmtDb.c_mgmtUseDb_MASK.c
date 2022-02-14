
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pDb; } ;
typedef int SDbObj ;
typedef TYPE_1__ SConnObj ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;

int FUNC_1(SConnObj *VAR_1, char *VAR_2) {
  SDbObj *VAR_3;
  int VAR_4 = VAR_0;


  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3) {
    VAR_1->pDb = VAR_3;
    VAR_4 = 0;
  }

  return VAR_4;
}
