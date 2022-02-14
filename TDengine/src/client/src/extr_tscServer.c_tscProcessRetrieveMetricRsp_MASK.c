
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {scalar_t__ code; scalar_t__ numOfRows; scalar_t__ row; } ;
struct TYPE_9__ {TYPE_1__ res; int param; int (* fp ) (int ,TYPE_2__*,scalar_t__) ;int cmd; } ;
typedef TYPE_1__ SSqlRes ;
typedef TYPE_2__ SSqlObj ;
typedef int SSqlCmd ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

int FUNC_4(SSqlObj *VAR_1) {
  SSqlRes *VAR_2 = &VAR_1->res;
  SSqlCmd *VAR_3 = &VAR_1->cmd;

  VAR_2->code = FUNC_1(VAR_1);

  if (VAR_2->code == VAR_0 && VAR_2->numOfRows > 0) {
    FUNC_3(VAR_3, VAR_2);
  }

  VAR_2->row = 0;

  uint8_t VAR_4 = VAR_1->res.code;
  if (VAR_1->fp) {
    if (VAR_1->res.code == VAR_0) {
      (*VAR_1->fp)(VAR_1->param, VAR_1, VAR_1->res.numOfRows);
    } else {
      FUNC_2(VAR_1);
    }
  }

  return VAR_4;
}
