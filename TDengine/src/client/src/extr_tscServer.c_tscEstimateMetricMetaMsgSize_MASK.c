
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t int32_t ;
typedef int int16_t ;
struct TYPE_10__ {size_t n; } ;
struct TYPE_11__ {TYPE_3__ cond; } ;
struct TYPE_12__ {size_t numOfTagCond; TYPE_4__ tbnameCond; TYPE_2__* cond; } ;
struct TYPE_13__ {int numOfTables; TYPE_5__ tagCond; } ;
struct TYPE_8__ {scalar_t__ n; } ;
struct TYPE_9__ {TYPE_1__ cond; } ;
typedef TYPE_6__ SSqlCmd ;
typedef int SMgmtHead ;
typedef int SMetricMetaMsg ;
typedef int SMetricMetaElemMsg ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_1 () ;

__attribute__((used)) static int32_t FUNC_2(SSqlCmd *VAR_4) {
  const int32_t VAR_5 =
      FUNC_1() + sizeof(SMetricMetaMsg) + sizeof(SMgmtHead) + sizeof(int16_t) * VAR_1;

  int32_t VAR_6 = 0;
  for (int32_t VAR_7 = 0; VAR_7 < VAR_4->tagCond.numOfTagCond; ++VAR_7) {
    VAR_6 += VAR_4->tagCond.cond[VAR_7].cond.n;
  }

  int32_t VAR_8 = VAR_6 * VAR_3 + VAR_4->tagCond.tbnameCond.cond.n * VAR_3;
  int32_t VAR_9 = (VAR_2 + sizeof(int16_t)) * 2;
  int32_t VAR_10 = sizeof(SMetricMetaElemMsg) * VAR_4->numOfTables;

  int32_t VAR_11 = VAR_8 + VAR_9 + VAR_10 + VAR_5;

  return FUNC_0(VAR_11, VAR_0);
}
