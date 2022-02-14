
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conn; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*,float,float,int) ;
 int FUNC_2 (float*) ;
 int FUNC_3 (float*) ;
 int VAR_1 ;

int FUNC_4(char *VAR_2) {
  float VAR_3 = 0;
  bool VAR_4 = FUNC_3(&VAR_3);
  if (!VAR_4) {
    FUNC_0("monitor:%p, get sys memory info failed.", VAR_0->conn);
  }

  float VAR_5 = 0;
  VAR_4 = FUNC_2(&VAR_5);
  if (!VAR_4) {
    FUNC_0("monitor:%p, get proc memory info failed.", VAR_0->conn);
  }

  return FUNC_1(VAR_2, ", %f, %f, %d", VAR_5, VAR_3, VAR_1);
}
