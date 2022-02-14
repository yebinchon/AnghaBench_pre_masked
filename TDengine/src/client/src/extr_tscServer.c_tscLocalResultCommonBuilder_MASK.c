
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int int32_t ;
struct TYPE_8__ {scalar_t__ code; int rspType; int numOfRows; scalar_t__ row; } ;
struct TYPE_9__ {TYPE_1__ res; int param; int (* fp ) (int ,TYPE_2__*,int ) ;int cmd; } ;
typedef TYPE_1__ SSqlRes ;
typedef TYPE_2__ SSqlObj ;
typedef int SSqlCmd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(SSqlObj *VAR_1, int32_t VAR_2) {
  SSqlRes *VAR_3 = &VAR_1->res;
  SSqlCmd *VAR_4 = &VAR_1->cmd;

  VAR_3->code = VAR_0;

  if (VAR_3->rspType == 0) {
    VAR_3->numOfRows = VAR_2;
    VAR_3->row = 0;
    VAR_3->rspType = 1;

    FUNC_3(VAR_4, VAR_3);
    VAR_3->row = 0;

  } else {
    FUNC_2(VAR_3);
  }

  uint8_t VAR_5 = VAR_1->res.code;
  if (VAR_1->fp) {
    if (VAR_5 == VAR_0) {
      (*VAR_1->fp)(VAR_1->param, VAR_1, VAR_1->res.numOfRows);
    } else {
      FUNC_1(VAR_1);
    }
  }

  return VAR_5;
}
