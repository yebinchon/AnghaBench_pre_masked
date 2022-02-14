
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int maxSessions; int precision; } ;
struct TYPE_10__ {TYPE_2__** meterList; TYPE_1__ cfg; } ;
struct TYPE_9__ {scalar_t__ numOfPoints; scalar_t__* offset; } ;
struct TYPE_8__ {TYPE_4__** cacheBlocks; } ;
struct TYPE_7__ {int * pCache; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SVnodeCfg ;
typedef TYPE_2__ SMeterObj ;
typedef TYPE_3__ SCacheInfo ;
typedef TYPE_4__ SCacheBlock ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_5__* VAR_0 ;

TSKEY FUNC_1(int VAR_1) {
  SMeterObj * VAR_2;
  SCacheInfo * VAR_3;
  SCacheBlock *VAR_4;

  SVnodeCfg *VAR_5 = &VAR_0[VAR_1].cfg;
  TSKEY VAR_6 = FUNC_0(VAR_5->precision);

  for (int VAR_7 = 0; VAR_7 < VAR_5->maxSessions; ++VAR_7) {
    VAR_2 = VAR_0[VAR_1].meterList[VAR_7];
    if (VAR_2 == ((void*)0) || VAR_2->pCache == ((void*)0)) continue;

    VAR_3 = (SCacheInfo *)VAR_2->pCache;
    VAR_4 = VAR_3->cacheBlocks[0];

    if (VAR_4 == ((void*)0) || VAR_4->numOfPoints <= 0) continue;

    if (*((TSKEY *)(VAR_4->offset[0])) < VAR_6) VAR_6 = *((TSKEY *)(VAR_4->offset[0]));
  }

  return VAR_6;
}
