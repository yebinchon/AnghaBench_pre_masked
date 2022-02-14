
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_13__ {int numOfRows; scalar_t__ code; scalar_t__ qhandle; scalar_t__ numOfTotal; } ;
struct TYPE_14__ {int * thandle; int sqlstr; TYPE_2__ res; } ;
struct TYPE_12__ {int db; int acctId; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int ,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,TYPE_3__*,int,TYPE_1__*,...) ;

int FUNC_5(STscObj* VAR_1, SSqlObj* VAR_2) {
  SSqlRes *VAR_3 = &VAR_2->res;

  VAR_3->numOfRows = 1;
  VAR_3->numOfTotal = 0;
  FUNC_4("%p SQL: %s pObj:%p", VAR_2, VAR_2->sqlstr, VAR_1);

  VAR_3->code = (uint8_t)FUNC_1(VAR_2, VAR_1->acctId, VAR_1->db, 0);






  VAR_3->qhandle = 0;
  VAR_2->thandle = ((void*)0);

  if (VAR_3->code != VAR_0) return VAR_3->code;

  FUNC_2(VAR_2);

  FUNC_4("%p SQL result:%d, %s pObj:%p", VAR_2, VAR_3->code, FUNC_0(VAR_1), VAR_1);
  if (VAR_3->code != VAR_0) {
    FUNC_3(VAR_2);
  }

  return VAR_3->code;
}
