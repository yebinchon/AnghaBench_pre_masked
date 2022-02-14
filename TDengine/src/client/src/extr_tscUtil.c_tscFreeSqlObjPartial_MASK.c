
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_14__ {scalar_t__ command; } ;
struct TYPE_12__ {int pColumnIndex; int pGroupRec; scalar_t__ numOfGroups; scalar_t__ numOfTotal; scalar_t__ numOfRows; scalar_t__ row; int pRsp; } ;
struct TYPE_13__ {TYPE_2__ res; scalar_t__ numOfSubs; int pSubs; int sqlstr; TYPE_1__* pTscObj; TYPE_4__ cmd; struct TYPE_13__* signature; } ;
struct TYPE_11__ {int mutex; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SSqlCmd ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_3__*) ;

void FUNC_8(SSqlObj* VAR_4) {
  if (VAR_4 == ((void*)0) || VAR_4->signature != VAR_4) {
    return;
  }

  SSqlCmd* VAR_5 = &VAR_4->cmd;
  SSqlRes* VAR_6 = &VAR_4->res;

  STscObj* VAR_7 = VAR_4->pTscObj;

  int32_t VAR_8 = VAR_5->command;
  if (VAR_8 < VAR_0 || VAR_8 == VAR_3 || VAR_8 == VAR_2 ||
      VAR_8 == VAR_1) {
    FUNC_7(VAR_4);
  }

  VAR_5->command = -1;


  FUNC_0(&VAR_7->mutex);
  FUNC_2(VAR_4->sqlstr);
  FUNC_1(&VAR_7->mutex);

  FUNC_2(VAR_4->res.pRsp);
  VAR_4->res.row = 0;
  VAR_4->res.numOfRows = 0;
  VAR_4->res.numOfTotal = 0;

  VAR_4->res.numOfGroups = 0;
  FUNC_2(VAR_4->res.pGroupRec);

  FUNC_3(VAR_4);

  FUNC_2(VAR_4->pSubs);
  VAR_4->numOfSubs = 0;
  FUNC_4(VAR_6);
  FUNC_2(VAR_4->res.pColumnIndex);

  FUNC_5(VAR_5);
  FUNC_6(VAR_5, 0);
}
