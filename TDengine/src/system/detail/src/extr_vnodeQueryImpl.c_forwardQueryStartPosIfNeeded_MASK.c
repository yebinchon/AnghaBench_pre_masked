
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int * pTSBuf; } ;
struct TYPE_15__ {scalar_t__ rawEKey; TYPE_8__ runtimeEnv; } ;
struct TYPE_12__ {scalar_t__ offset; } ;
struct TYPE_13__ {scalar_t__ numOfFilterCols; scalar_t__ interpoType; scalar_t__ nAggTimeInterval; scalar_t__ skey; scalar_t__ ekey; scalar_t__ lastKey; int over; TYPE_1__ limit; } ;
struct TYPE_14__ {int over; int dataReady; TYPE_2__ query; } ;
typedef TYPE_2__ SQuery ;
typedef TYPE_3__ SQInfo ;
typedef TYPE_4__ SMeterQuerySupportObj ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int,int,TYPE_4__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;

__attribute__((used)) static bool FUNC_7(SQInfo *VAR_3, SMeterQuerySupportObj *VAR_4, bool VAR_5,
                                         bool VAR_6) {
  SQuery *VAR_7 = &VAR_3->query;


  if (VAR_7->numOfFilterCols > 0 || VAR_4->runtimeEnv.pTSBuf != ((void*)0)) {
    return 1;
  }

  if (VAR_7->limit.offset > 0 && (!FUNC_3(VAR_7)) && VAR_7->interpoType == VAR_2) {






    if (VAR_7->nAggTimeInterval > 0) {
      while (1) {






        if (FUNC_0(VAR_7)) {
          VAR_7->skey = VAR_7->ekey + 1;
        } else {
          VAR_7->skey = VAR_7->ekey - 1;
        }


        if ((VAR_7->skey > VAR_4->rawEKey && FUNC_0(VAR_7)) ||
            (VAR_7->skey < VAR_4->rawEKey && !FUNC_0(VAR_7))) {
          FUNC_6(VAR_7, VAR_0);

          FUNC_5(&VAR_3->dataReady);
          VAR_3->over = 1;
          return 0;
        }





        VAR_7->ekey = VAR_4->rawEKey;
        VAR_7->lastKey = VAR_7->skey;


        if (FUNC_4(VAR_5, VAR_6, VAR_4, ((void*)0)) == 0) {
          FUNC_5(&VAR_3->dataReady);
          VAR_3->over = 1;
          return 0;
        }

        if (--VAR_7->limit.offset == 0) {
          break;
        }
      }
    } else {
      FUNC_2(&VAR_4->runtimeEnv);
      if (FUNC_1(VAR_7->over, VAR_1)) {
        FUNC_6(VAR_7, VAR_0);

        FUNC_5(&VAR_3->dataReady);
        VAR_3->over = 1;
        return 0;
      }
    }
  }

  return 1;
}
