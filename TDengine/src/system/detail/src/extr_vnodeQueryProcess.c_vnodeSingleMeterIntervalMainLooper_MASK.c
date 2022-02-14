
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_14__ {scalar_t__ offset; } ;
struct TYPE_16__ {scalar_t__ skey; scalar_t__ ekey; scalar_t__ numOfFilterCols; scalar_t__ interpoType; int pointsRead; int pointsToRead; int over; TYPE_1__ limit; } ;
struct TYPE_15__ {int * pTSBuf; TYPE_3__* pQuery; } ;
typedef TYPE_2__ SQueryRuntimeEnv ;
typedef TYPE_3__ SQuery ;
typedef int SMeterQuerySupportObj ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_11(SMeterQuerySupportObj *VAR_5, SQueryRuntimeEnv *VAR_6) {
  SQuery *VAR_7 = VAR_6->pQuery;

  while (1) {
    FUNC_2((VAR_7->skey <= VAR_7->ekey && FUNC_0(VAR_7)) ||
           (VAR_7->skey >= VAR_7->ekey && !FUNC_0(VAR_7)));

    FUNC_7(VAR_6);

    FUNC_10(VAR_6);
    if (FUNC_8(VAR_7)) {
      return;
    }

    FUNC_2(!FUNC_1(VAR_7->over, VAR_1));


    VAR_7->over &= (~VAR_0);
    FUNC_3(VAR_6);

    int64_t VAR_8 = FUNC_6(VAR_6);


    if ((VAR_7->numOfFilterCols > 0 || VAR_6->pTSBuf != ((void*)0)) && VAR_7->limit.offset > 0 &&
        VAR_7->interpoType == VAR_4) {

      if (VAR_8 > 0) {
        VAR_7->limit.offset--;
      }
    } else {
      VAR_7->pointsRead += VAR_8;
      FUNC_4(VAR_6, VAR_8);
    }

    if (FUNC_1(VAR_7->over, VAR_2)) {
      break;
    }

    FUNC_5(VAR_5, VAR_6);
    if (FUNC_1(VAR_7->over, VAR_0)) {
      break;
    }






    if ((VAR_7->pointsRead % VAR_7->pointsToRead == 0 && VAR_7->pointsRead != 0) ||
        ((VAR_7->pointsRead + VAR_8) > VAR_7->pointsToRead)) {
      FUNC_9(VAR_7, VAR_3);
      break;
    }
  }
}
