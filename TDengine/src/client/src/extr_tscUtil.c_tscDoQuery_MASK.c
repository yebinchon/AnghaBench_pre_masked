
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ command; int isInsertFromFile; } ;
struct TYPE_9__ {void* fp; TYPE_2__ cmd; } ;
typedef TYPE_1__ SSqlObj ;
typedef TYPE_2__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(SSqlObj* VAR_2) {
  SSqlCmd* VAR_3 = &VAR_2->cmd;
  void* VAR_4 = VAR_2->fp;

  if (VAR_3->command > VAR_0) {
    FUNC_1(VAR_2);
  } else {
    if (VAR_3->command == VAR_1) {
      FUNC_0(VAR_2);
    }

    if (VAR_3->isInsertFromFile == 1) {
      FUNC_3(VAR_2);
    } else {

      FUNC_4(VAR_2);
      if (((void*)0) == VAR_4) FUNC_2(VAR_2);
    }
  }
}
