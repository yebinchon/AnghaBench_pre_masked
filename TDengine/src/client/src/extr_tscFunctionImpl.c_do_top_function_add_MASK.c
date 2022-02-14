
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_15__ {scalar_t__ i64Key; scalar_t__ dKey; int member_0; } ;
typedef TYPE_2__ tVariant ;
struct TYPE_14__ {scalar_t__ i64Key; scalar_t__ dKey; } ;
struct TYPE_16__ {TYPE_1__ v; } ;
typedef TYPE_3__ tValuePair ;
typedef int int64_t ;
typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_19__ {int nSize; } ;
struct TYPE_18__ {int tagsLen; } ;
struct TYPE_17__ {size_t num; TYPE_3__** res; } ;
typedef TYPE_4__ STopBotInfo ;
typedef TYPE_5__ SExtTagsInfo ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*,int ) ;
 TYPE_9__* VAR_4 ;
 int FUNC_1 (TYPE_2__*,void*,int ,size_t) ;
 int FUNC_2 (TYPE_3__*,size_t,scalar_t__*,int ,char*,TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_3(STopBotInfo *VAR_5, int32_t VAR_6, void *VAR_7, int64_t VAR_8, uint16_t VAR_9,
                                SExtTagsInfo *VAR_10, char *VAR_11, int16_t VAR_12) {
  tVariant VAR_13 = {0};
  FUNC_1(&VAR_13, VAR_7, VAR_4[VAR_9].nSize, VAR_9);

  tValuePair **VAR_14 = VAR_5->res;

  if (VAR_5->num < VAR_6) {
    if (VAR_5->num == 0 ||
        ((VAR_9 >= VAR_3 && VAR_9 <= VAR_0) &&
         VAR_13.i64Key >= VAR_14[VAR_5->num - 1]->v.i64Key) ||
        ((VAR_9 >= VAR_2 && VAR_9 <= VAR_1) &&
         VAR_13.dKey >= VAR_14[VAR_5->num - 1]->v.dKey)) {
      FUNC_2(VAR_14[VAR_5->num], VAR_9, &VAR_13.i64Key, VAR_8, VAR_11, VAR_10, VAR_12);
    } else {
      int32_t VAR_15 = VAR_5->num - 1;

      if (VAR_9 >= VAR_3 && VAR_9 <= VAR_0) {
        while (VAR_15 >= 0 && VAR_14[VAR_15]->v.i64Key > VAR_13.i64Key) {
          FUNC_0(VAR_14[VAR_15 + 1], VAR_14[VAR_15], VAR_10->tagsLen);
          VAR_15 -= 1;
        }
      } else {
        while (VAR_15 >= 0 && VAR_14[VAR_15]->v.dKey > VAR_13.dKey) {
          FUNC_0(VAR_14[VAR_15 + 1], VAR_14[VAR_15], VAR_10->tagsLen);
          VAR_15 -= 1;
        }
      }

      FUNC_2(VAR_14[VAR_15 + 1], VAR_9, &VAR_13.i64Key, VAR_8, VAR_11, VAR_10, VAR_12);
    }

    VAR_5->num++;
  } else {
    int32_t VAR_16 = 0;

    if (((VAR_9 >= VAR_3 && VAR_9 <= VAR_0) && VAR_13.i64Key > VAR_14[0]->v.i64Key) ||
        ((VAR_9 >= VAR_2 && VAR_9 <= VAR_1) && VAR_13.dKey > VAR_14[0]->v.dKey)) {

      if (VAR_9 >= VAR_3 && VAR_9 <= VAR_0) {
        while (VAR_16 + 1 < VAR_6 && VAR_14[VAR_16 + 1]->v.i64Key < VAR_13.i64Key) {
          FUNC_0(VAR_14[VAR_16], VAR_14[VAR_16 + 1], VAR_10->tagsLen);
          VAR_16 += 1;
        }
      } else {
        while (VAR_16 + 1 < VAR_6 && VAR_14[VAR_16 + 1]->v.dKey < VAR_13.dKey) {
          FUNC_0(VAR_14[VAR_16], VAR_14[VAR_16 + 1], VAR_10->tagsLen);
          VAR_16 += 1;
        }
      }

      FUNC_2(VAR_14[VAR_16], VAR_9, &VAR_13.i64Key, VAR_8, VAR_11, VAR_10, VAR_12);
    }
  }
}
