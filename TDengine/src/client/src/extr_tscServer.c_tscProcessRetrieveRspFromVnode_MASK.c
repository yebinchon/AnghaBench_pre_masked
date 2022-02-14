
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {void* compress; int useconds; int offset; void* precision; int numOfRows; } ;
struct TYPE_16__ {int type; } ;
struct TYPE_14__ {scalar_t__ numOfRows; scalar_t__ offset; scalar_t__ row; void* useconds; void* precision; scalar_t__ pRsp; } ;
struct TYPE_15__ {int * thandle; int vnode; int ip; TYPE_1__* pTscObj; TYPE_4__ cmd; TYPE_2__ res; } ;
struct TYPE_13__ {int user; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SSqlCmd ;
typedef TYPE_5__ SRetrieveMeterRsp ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_2__*,void*) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (int ,int *,int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_7 (char*,TYPE_3__*,scalar_t__,scalar_t__) ;

int FUNC_8(SSqlObj *VAR_2) {
  SSqlRes *VAR_3 = &VAR_2->res;
  SSqlCmd *VAR_4 = &VAR_2->cmd;
  STscObj *VAR_5 = VAR_2->pTscObj;

  SRetrieveMeterRsp *VAR_6 = (SRetrieveMeterRsp *)VAR_3->pRsp;

  VAR_3->numOfRows = FUNC_2(VAR_6->numOfRows);
  VAR_3->precision = FUNC_3(VAR_6->precision);
  VAR_3->offset = FUNC_1(VAR_6->offset);

  VAR_3->useconds = FUNC_1(VAR_6->useconds);
  VAR_6->compress = FUNC_3(VAR_6->compress);

  FUNC_0(VAR_4, VAR_3, VAR_6->compress);

  FUNC_6(VAR_4, VAR_3);
  VAR_3->row = 0;





  if ((VAR_3->numOfRows == 0 && !(FUNC_5(VAR_4) && VAR_3->offset > 0)) ||
      ((VAR_4->type & VAR_0) == VAR_0)) {
    FUNC_4(VAR_1, VAR_2->thandle, VAR_2->ip, VAR_2->vnode, VAR_5->user);
    VAR_2->thandle = ((void*)0);
  } else {
    FUNC_7("%p numOfRows:%d, offset:%d, not recycle connection", VAR_2, VAR_3->numOfRows, VAR_3->offset);
  }

  return 0;
}
