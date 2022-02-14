
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int int32_t ;
struct TYPE_10__ {int pointsRead; int pointsReturned; scalar_t__ over; int bufIndex; TYPE_1__* pMeterQuerySupporter; int signature; } ;
struct TYPE_9__ {TYPE_3__* ahandle; void* thandle; int * msg; int fp; } ;
struct TYPE_8__ {int * pSidSet; } ;
typedef TYPE_2__ SSchedMsg ;
typedef TYPE_3__ SQInfo ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,TYPE_3__*,...) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,char*,int,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_4(void *VAR_4, char *VAR_5, int32_t *VAR_6) {
  SQInfo *VAR_7 = (SQInfo *)VAR_4;


  int VAR_8 = VAR_7->pointsRead - VAR_7->pointsReturned;

  int32_t VAR_9 = FUNC_3(VAR_7, VAR_5, VAR_8, VAR_6);
  VAR_7->pointsReturned += VAR_9;

  FUNC_1("QInfo:%p %d are returned, totalReturned:%d totalRead:%d", VAR_7, VAR_9, VAR_7->pointsReturned,
         VAR_7->pointsRead);

  if (VAR_7->over == 0) {

    FUNC_1("QInfo:%p set query flag, oldSig:%p", VAR_7, VAR_7->signature);
    uint64_t VAR_10 = FUNC_0(VAR_7);
    if (VAR_10 == 0 || VAR_10 != (uint64_t)VAR_7) {
      FUNC_1("%p freed or killed, old sig:%p abort query", VAR_7, VAR_10);
    } else {
      FUNC_1("%p add query into task queue for schedule", VAR_7);

      SSchedMsg VAR_11;

      if (VAR_7->pMeterQuerySupporter != ((void*)0)) {
        if (VAR_7->pMeterQuerySupporter->pSidSet == ((void*)0)) {
          VAR_11.fp = VAR_3;
        } else {
          VAR_11.fp = VAR_1;
        }
      } else {
        VAR_7->bufIndex = VAR_7->bufIndex ^ 1;
        VAR_11.fp = VAR_2;
      }

      VAR_11.msg = ((void*)0);
      VAR_11.thandle = (void *)1;
      VAR_11.ahandle = VAR_7;
      FUNC_2(VAR_0, &VAR_11);
    }
  }

  return VAR_9;
}
