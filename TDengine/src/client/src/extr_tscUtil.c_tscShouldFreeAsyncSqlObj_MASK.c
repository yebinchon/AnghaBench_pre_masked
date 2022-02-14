
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_12__ {scalar_t__ nSize; } ;
struct TYPE_11__ {size_t command; scalar_t__ vnodeIdx; TYPE_5__* pDataBlocks; } ;
struct TYPE_8__ {scalar_t__ code; } ;
struct TYPE_10__ {TYPE_1__ res; TYPE_4__ cmd; int * pStream; TYPE_2__* pTscObj; int * fp; struct TYPE_10__* signature; } ;
struct TYPE_9__ {TYPE_3__* pSql; TYPE_3__* pHb; } ;
typedef TYPE_2__ STscObj ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SSqlCmd ;
typedef TYPE_5__ SDataBlockList ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_0 (char*,TYPE_3__*) ;

bool FUNC_1(SSqlObj* VAR_5) {
  if (VAR_5 == ((void*)0) || VAR_5->signature != VAR_5 || VAR_5->fp == ((void*)0)) {
    return 0;
  }

  STscObj* VAR_6 = VAR_5->pTscObj;
  if (VAR_5->pStream != ((void*)0) || VAR_6->pHb == VAR_5) {
    return 0;
  }

  int32_t VAR_7 = VAR_5->cmd.command;
  if (VAR_6->pSql == VAR_5) {




    if (VAR_7 == VAR_2 && VAR_5->res.code != VAR_1) {
      return 1;
    }

    return 0;
  }

  if (VAR_7 == VAR_3) {
    SSqlCmd* VAR_8 = &VAR_5->cmd;





    SDataBlockList* VAR_9 = VAR_8->pDataBlocks;
    if (VAR_9 == ((void*)0) || VAR_8->vnodeIdx >= VAR_9->nSize) {
      FUNC_0("%p object should be release since all data blocks have been submit", VAR_5);
      return 1;
    } else {
      return 0;
    }
  } else {
    return VAR_4[VAR_7] == 0 ||
           (VAR_5->res.code != VAR_0 && VAR_5->res.code != VAR_1);
  }
}
