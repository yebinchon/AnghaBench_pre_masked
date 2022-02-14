
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int data; int numOfRows; } ;
struct TYPE_6__ {scalar_t__ row; int data; int numOfRows; scalar_t__ pRsp; } ;
struct TYPE_7__ {int cmd; TYPE_1__ res; } ;
typedef TYPE_1__ SSqlRes ;
typedef TYPE_2__ SSqlObj ;
typedef int SSqlCmd ;
typedef TYPE_3__ SRetrieveMeterRsp ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;

int FUNC_2(SSqlObj *VAR_0) {
  SSqlRes * VAR_1 = &VAR_0->res;
  SSqlCmd * VAR_2 = &VAR_0->cmd;
  SRetrieveMeterRsp *VAR_3 = (SRetrieveMeterRsp *)VAR_1->pRsp;

  VAR_1->numOfRows = FUNC_0(VAR_3->numOfRows);
  VAR_1->data = VAR_3->data;

  FUNC_1(VAR_2, VAR_1);
  VAR_1->row = 0;
  return 0;
}
