
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conn; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*,float,float) ;
 int FUNC_2 (float*,float*) ;

int FUNC_3(char *VAR_1) {
  float VAR_2 = 0, VAR_3 = 0;
  bool VAR_4 = FUNC_2(&VAR_2, &VAR_3);
  if (!VAR_4) {
    FUNC_0("monitor:%p, get io info failed.", VAR_0->conn);
  }

  return FUNC_1(VAR_1, ", %f, %f", VAR_2, VAR_3);
}
