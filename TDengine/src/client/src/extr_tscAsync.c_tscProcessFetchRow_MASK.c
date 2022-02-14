
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ ahandle; } ;
struct TYPE_11__ {int numOfCols; int order; } ;
struct TYPE_9__ {int* bytes; int row; scalar_t__* tsrow; } ;
struct TYPE_10__ {int param; int (* fetchFp ) (int ,TYPE_2__*,scalar_t__*) ;TYPE_3__ cmd; TYPE_1__ res; } ;
typedef TYPE_1__ SSqlRes ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSqlCmd ;
typedef TYPE_4__ SSchedMsg ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_3__*,int,int ) ;
 int FUNC_1 (int ,TYPE_2__*,scalar_t__*) ;

void FUNC_2(SSchedMsg *VAR_0) {
  SSqlObj *VAR_1 = (SSqlObj *)VAR_0->ahandle;
  SSqlRes *VAR_2 = &VAR_1->res;
  SSqlCmd *VAR_3 = &VAR_1->cmd;

  for (int VAR_4 = 0; VAR_4 < VAR_3->numOfCols; ++VAR_4)
    VAR_2->tsrow[VAR_4] = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_3->order) + VAR_2->bytes[VAR_4] * VAR_2->row;
  VAR_2->row++;

  (*VAR_1->fetchFp)(VAR_1->param, VAR_1, VAR_2->tsrow);
}
