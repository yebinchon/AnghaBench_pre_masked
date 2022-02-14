
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
typedef int int32_t ;
struct TYPE_9__ {scalar_t__ keyLast; scalar_t__ keyFirst; } ;
struct TYPE_8__ {size_t start; TYPE_1__* pMeterObj; } ;
struct TYPE_7__ {int meterId; int sid; int vnode; } ;
typedef scalar_t__ TSKEY ;
typedef int SQuery ;
typedef int SQInfo ;
typedef TYPE_1__ SMeterObj ;
typedef TYPE_2__ SMeterDataInfo ;
typedef TYPE_3__ SCompBlock ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 size_t FUNC_1 (TYPE_3__*,int,scalar_t__,int ) ;
 int FUNC_2 (char*,int *,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_3(SMeterDataInfo *VAR_1, SQuery *VAR_2, SCompBlock *VAR_3,
                                         int64_t VAR_4, TSKEY VAR_5, TSKEY VAR_6, int32_t *VAR_7) {
  SMeterObj *VAR_8 = VAR_1->pMeterObj;
  SQInfo * VAR_9 = (SQInfo *)FUNC_0(VAR_2);





  VAR_1->start = FUNC_1(VAR_3, (int32_t)VAR_4, VAR_5, VAR_0);
  if (VAR_5 > VAR_3[VAR_1->start].keyLast || VAR_6 < VAR_3[VAR_1->start].keyFirst) {
    FUNC_2("QInfo:%p vid:%d sid:%d id:%s, no result in files", VAR_9, VAR_8->vnode, VAR_8->sid,
           VAR_8->meterId);
    return 0;
  }


  *VAR_7 = VAR_1->start;
  while (*VAR_7 <= (VAR_4 - 1)) {
    if (VAR_3[*VAR_7].keyFirst <= VAR_6 && VAR_3[*VAR_7].keyLast >= VAR_6) {
      break;
    }

    if (VAR_3[*VAR_7].keyFirst > VAR_6) {
      *VAR_7 -= 1;
      break;
    }

    if (*VAR_7 == VAR_4 - 1) {
      break;
    } else {
      ++(*VAR_7);
    }
  }

  return 1;
}
