
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lst; } ;
typedef TYPE_1__ JsonBuf ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,char*,double) ;

void FUNC_3(JsonBuf* VAR_1, double VAR_2) {
  FUNC_0(VAR_1);
  FUNC_1(VAR_1, VAR_0);
  if (VAR_2 > 1E10 || VAR_2 < -1E10) {
    VAR_1->lst += FUNC_2(VAR_1->lst, VAR_0, "%.9e", VAR_2);
  } else {
    VAR_1->lst += FUNC_2(VAR_1->lst, VAR_0, "%.9f", VAR_2);
  }
}
