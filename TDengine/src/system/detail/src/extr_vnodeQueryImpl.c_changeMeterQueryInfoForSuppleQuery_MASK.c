
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int order; int vnodeIndex; } ;
struct TYPE_5__ {scalar_t__ numOfPages; int reverseFillRes; int numOfRes; int reverseIndex; TYPE_1__ cur; scalar_t__ queryRangeSet; void* skey; void* lastKey; void* ekey; } ;
typedef void* TSKEY ;
typedef TYPE_2__ SMeterQueryInfo ;



void FUNC_0(SMeterQueryInfo *VAR_0, TSKEY VAR_1, TSKEY VAR_2) {
  if (VAR_0 == ((void*)0)) {
    return;
  }

  VAR_0->skey = VAR_1;
  VAR_0->ekey = VAR_2;
  VAR_0->lastKey = VAR_0->skey;

  VAR_0->queryRangeSet = 0;
  VAR_0->cur.order = VAR_0->cur.order ^ 1;
  VAR_0->cur.vnodeIndex = -1;


  if (VAR_0->numOfPages == 0) {
    VAR_0->reverseFillRes = 0;
  } else {
    VAR_0->reverseIndex = VAR_0->numOfRes;
    VAR_0->reverseFillRes = 1;
  }
}
