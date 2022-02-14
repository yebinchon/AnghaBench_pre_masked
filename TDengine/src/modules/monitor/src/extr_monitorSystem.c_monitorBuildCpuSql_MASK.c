
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conn; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,char*,float,float,int) ;
 int FUNC_2 (float*,float*) ;
 int VAR_1 ;

int FUNC_3(char *VAR_2) {
  float VAR_3 = 0, VAR_4 = 0;
  bool VAR_5 = FUNC_2(&VAR_3, &VAR_4);
  if (!VAR_5) {
    FUNC_0("monitor:%p, get cpu usage failed.", VAR_0->conn);
  }

  if (VAR_3 <= VAR_4) {
    VAR_3 = VAR_4 + (float)0.1;
  }

  return FUNC_1(VAR_2, ", %f, %f, %d", VAR_4, VAR_3, VAR_1);
}
