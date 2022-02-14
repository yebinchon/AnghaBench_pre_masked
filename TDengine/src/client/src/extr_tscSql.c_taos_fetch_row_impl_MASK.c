
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ command; } ;
struct TYPE_9__ {scalar_t__ qhandle; scalar_t__ code; scalar_t__ row; scalar_t__ numOfRows; int numOfTotal; } ;
struct TYPE_10__ {TYPE_1__ res; TYPE_3__ cmd; } ;
typedef int * TAOS_ROW ;
typedef int TAOS_RES ;
typedef TYPE_1__ SSqlRes ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;

TAOS_ROW FUNC_5(TAOS_RES *VAR_8) {
  SSqlObj *VAR_9 = (SSqlObj *)VAR_8;
  SSqlCmd *VAR_10 = &VAR_9->cmd;
  SSqlRes *VAR_11 = &VAR_9->res;

  if (VAR_11->qhandle == 0 || VAR_10->command == VAR_6) {
    return ((void*)0);
  }

  if (VAR_10->command == VAR_3) {
    FUNC_1(VAR_9);
    if (VAR_11->code == VAR_0) {
      return FUNC_2(VAR_9);
    } else {
      return ((void*)0);
    }

  } else if (VAR_11->row >= VAR_11->numOfRows) {
    FUNC_4(VAR_11);

    if (VAR_10->command < VAR_2) {
      VAR_10->command = (VAR_10->command > VAR_4) ? VAR_5 : VAR_1;
    }

    FUNC_3(VAR_9);
    if (VAR_11->numOfRows == 0) {
      return ((void*)0);
    }


    if (VAR_10->command != VAR_7) {
      VAR_11->numOfTotal += VAR_11->numOfRows;
    }
  }

  return FUNC_0(VAR_9);
}
