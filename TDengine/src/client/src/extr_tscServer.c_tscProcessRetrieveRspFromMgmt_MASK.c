
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int data; int numOfRows; } ;
struct TYPE_8__ {scalar_t__ numOfRows; scalar_t__ row; int data; int precision; scalar_t__ pRsp; } ;
struct TYPE_9__ {int * thandle; int vnode; int ip; TYPE_1__* pTscObj; int cmd; TYPE_2__ res; } ;
struct TYPE_7__ {int user; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;
typedef int SSqlCmd ;
typedef TYPE_4__ SRetrieveMeterRsp ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,TYPE_2__*) ;

int FUNC_4(SSqlObj *VAR_1) {
  SSqlRes *VAR_2 = &VAR_1->res;
  SSqlCmd *VAR_3 = &VAR_1->cmd;
  STscObj *VAR_4 = VAR_1->pTscObj;

  SRetrieveMeterRsp *VAR_5 = (SRetrieveMeterRsp *)(VAR_2->pRsp);
  VAR_2->numOfRows = FUNC_0(VAR_5->numOfRows);
  VAR_2->precision = FUNC_1(VAR_2->precision);

  VAR_2->data = VAR_5->data;

  FUNC_3(VAR_3, VAR_2);

  if (VAR_2->numOfRows == 0) {
    FUNC_2(VAR_0, VAR_1->thandle, VAR_1->ip, VAR_1->vnode, VAR_4->user);
    VAR_1->thandle = ((void*)0);
  }

  VAR_2->row = 0;
  return 0;
}
