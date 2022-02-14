
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef size_t int32_t ;
struct TYPE_29__ {int orderType; } ;
struct TYPE_27__ {scalar_t__ n; char* z; } ;
struct TYPE_28__ {TYPE_5__ cond; } ;
struct TYPE_24__ {char* meterId; } ;
struct TYPE_23__ {char* meterId; } ;
struct TYPE_25__ {TYPE_2__ right; TYPE_1__ left; scalar_t__ hasJoin; } ;
struct TYPE_30__ {int relType; TYPE_6__ tbnameCond; TYPE_3__ joinInfo; } ;
struct TYPE_31__ {TYPE_7__ groupbyExpr; TYPE_8__ tagCond; } ;
struct TYPE_26__ {char* z; } ;
struct TYPE_22__ {char* digest; } ;
struct TYPE_21__ {TYPE_4__ cond; } ;
struct TYPE_20__ {size_t numOfTags; int* tagColumnIndex; char* name; } ;
typedef TYPE_8__ STagCond ;
typedef TYPE_9__ SSqlCmd ;
typedef TYPE_10__ SMeterMetaInfo ;
typedef TYPE_11__ SCond ;
typedef TYPE_12__ MD5_CTX ;


 int FUNC_0 (TYPE_12__*) ;
 int FUNC_1 (TYPE_12__*,int *,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char*,size_t) ;
 char* FUNC_4 (int,size_t) ;
 int FUNC_5 (char*) ;
 size_t FUNC_6 (char*,size_t,char*,char*,char*,char*,int,char*,char*,int) ;
 scalar_t__ FUNC_7 (char*,char*,...) ;
 int FUNC_8 (char*,char*) ;
 size_t FUNC_9 (char*) ;
 TYPE_11__* FUNC_10 (TYPE_8__*,int ) ;
 TYPE_10__* FUNC_11 (TYPE_9__*,int ,size_t*) ;

void FUNC_12(SSqlCmd* VAR_2, char* VAR_3, uint64_t VAR_4) {
  int32_t VAR_5 = -1;
  SMeterMetaInfo* VAR_6 = FUNC_11(VAR_2, VAR_4, &VAR_5);

  int32_t VAR_7 = 0;
  char VAR_8[128] = {0};
  for (int32_t VAR_9 = 0; VAR_9 < VAR_6->numOfTags; ++VAR_9) {
    VAR_7 += FUNC_7(&VAR_8[VAR_7], "%d,", VAR_6->tagColumnIndex[VAR_9]);
  }

  STagCond* VAR_10 = &VAR_2->tagCond;
  FUNC_2(VAR_7 < FUNC_9(VAR_8));

  const int32_t VAR_11 = VAR_1;
  char* VAR_12 = FUNC_4(1, VAR_0);

  SCond* VAR_13 = FUNC_10(VAR_10, VAR_4);

  char VAR_14[512] = {0};
  if (VAR_10->joinInfo.hasJoin) {
    FUNC_7(VAR_14, "%s,%s", VAR_10->joinInfo.left.meterId, VAR_10->joinInfo.right.meterId);
  }

  int32_t VAR_15 =
      FUNC_6(VAR_12, VAR_0, "%s,%s,%s,%d,%s,[%s],%d", VAR_6->name,
               (VAR_13 != ((void*)0) ? VAR_13->cond.z : ((void*)0)), VAR_10->tbnameCond.cond.n > 0 ? VAR_10->tbnameCond.cond.z : ((void*)0),
               VAR_10->relType, VAR_14, VAR_8, VAR_2->groupbyExpr.orderType);

  FUNC_2(VAR_15 <= VAR_0);

  if (VAR_15 < VAR_11) {
    FUNC_8(VAR_3, VAR_12);
  } else {
    MD5_CTX VAR_16;
    FUNC_0(&VAR_16);

    FUNC_1(&VAR_16, (uint8_t*) VAR_12, VAR_15);
    char* VAR_17 = FUNC_3(VAR_16.digest, FUNC_9(VAR_16.digest));
    FUNC_8(VAR_3, VAR_17);
  }

  FUNC_5(VAR_12);
}
