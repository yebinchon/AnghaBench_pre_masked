
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int thandle; int writeAuth; } ;
struct TYPE_5__ {int queryId; } ;
typedef TYPE_1__ SKillQuery ;
typedef TYPE_2__ SConnObj ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(char *VAR_2, int VAR_3, SConnObj *VAR_4) {
  int VAR_5 = 0;
  SKillQuery *VAR_6 = (SKillQuery *)VAR_2;

  if (!VAR_4->writeAuth) {
    VAR_5 = VAR_0;
  } else {
    VAR_5 = FUNC_0(VAR_6->queryId, VAR_4);
  }

  FUNC_1(VAR_4->thandle, VAR_1, VAR_5);

  return 0;
}
