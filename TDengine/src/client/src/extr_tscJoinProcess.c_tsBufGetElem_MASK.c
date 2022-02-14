
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int tag; } ;
struct TYPE_12__ {scalar_t__ rawBuf; } ;
struct TYPE_14__ {size_t vnodeIndex; int tsIndex; } ;
struct TYPE_15__ {TYPE_3__ tsData; TYPE_2__* pData; TYPE_7__ block; TYPE_5__ cur; } ;
struct TYPE_13__ {int vnode; int tag; int ts; } ;
struct TYPE_10__ {int vnode; } ;
struct TYPE_11__ {TYPE_1__ info; } ;
typedef int TSKEY ;
typedef TYPE_4__ STSElem ;
typedef TYPE_5__ STSCursor ;
typedef TYPE_6__ STSBuf ;
typedef TYPE_7__ STSBlock ;


 int VAR_0 ;

STSElem FUNC_0(STSBuf* VAR_1) {
  STSElem VAR_2 = {.vnode = -1};
  STSCursor* VAR_3 = &VAR_1->cur;

  if (VAR_1 == ((void*)0) || VAR_3->vnodeIndex < 0) {
    return VAR_2;
  }

  STSBlock* VAR_4 = &VAR_1->block;

  VAR_2 = VAR_1->pData[VAR_3->vnodeIndex].info.vnode;
  VAR_2 = *(TSKEY*)(VAR_1->tsData.rawBuf + VAR_3->tsIndex * VAR_0);
  VAR_2 = VAR_4->tag;

  return VAR_2;
}
