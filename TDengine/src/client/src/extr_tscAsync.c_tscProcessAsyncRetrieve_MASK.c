
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_21__ {TYPE_2__* pMetricMeta; } ;
struct TYPE_16__ {scalar_t__ limit; } ;
struct TYPE_20__ {int vnodeIdx; scalar_t__ globalLimit; int numOfCols; int order; int command; TYPE_1__ limit; } ;
struct TYPE_18__ {scalar_t__ numOfTotal; int* bytes; int row; scalar_t__* tsrow; } ;
struct TYPE_19__ {TYPE_3__ res; int param; int (* fetchFp ) (int ,TYPE_4__*,scalar_t__*) ;int fp; TYPE_5__ cmd; } ;
struct TYPE_17__ {int numOfVnodes; } ;
typedef int TAOS_RES ;
typedef TYPE_3__ SSqlRes ;
typedef TYPE_4__ SSqlObj ;
typedef TYPE_5__ SSqlCmd ;


 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_5__*,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_4__*,scalar_t__*) ;
 int FUNC_3 (int ,TYPE_4__*,scalar_t__*) ;
 int FUNC_4 (int ,TYPE_4__*,scalar_t__*) ;
 TYPE_9__* FUNC_5 (TYPE_5__*,int ) ;
 int VAR_1 ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_3__*) ;

void FUNC_9(void *VAR_2, TAOS_RES *VAR_3, int VAR_4) {
  SSqlObj *VAR_5 = (SSqlObj *)VAR_3;
  SSqlRes *VAR_6 = &VAR_5->res;
  SSqlCmd *VAR_7 = &VAR_5->cmd;

  if (VAR_4 == 0) {

    if (FUNC_7(VAR_7)) {



      FUNC_1(VAR_7->vnodeIdx >= 1);


      if (VAR_7->globalLimit > 0 && VAR_6->numOfTotal >= VAR_7->globalLimit) {
        (*VAR_5->fetchFp)(VAR_5->param, VAR_5, ((void*)0));
        return;
      }


      VAR_7->limit.limit = VAR_7->globalLimit - VAR_6->numOfTotal;

      if ((++VAR_7->vnodeIdx) <= FUNC_5(VAR_7, 0)->pMetricMeta->numOfVnodes) {
        VAR_5->cmd.command = VAR_0;

        FUNC_8(VAR_6);
        VAR_5->fp = VAR_1;
        FUNC_6(VAR_5);
        return;
      }
    } else {
      (*VAR_5->fetchFp)(VAR_5->param, VAR_5, ((void*)0));
    }
  } else {
    for (int VAR_8 = 0; VAR_8 < VAR_7->numOfCols; ++VAR_8)
      VAR_6->tsrow[VAR_8] = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_7->order) + VAR_6->bytes[VAR_8] * VAR_6->row;
    VAR_6->row++;

    (*VAR_5->fetchFp)(VAR_5->param, VAR_5, VAR_5->res.tsrow);
  }
}
