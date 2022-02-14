
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int numOfPoints; scalar_t__ algorithm; int numOfCols; } ;
struct TYPE_15__ {int len; int data; } ;
struct TYPE_14__ {int vnode; int bytesPerPoint; int maxBytes; int pointsPerFileBlock; TYPE_1__* schema; } ;
struct TYPE_13__ {int fileId; int lfd; } ;
struct TYPE_12__ {int bytes; } ;
typedef TYPE_2__ SVnodeObj ;
typedef TYPE_3__ SMeterObj ;
typedef char SField ;
typedef TYPE_4__ SData ;
typedef TYPE_5__ SCompBlock ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (int ,TYPE_5__*,char**,int,int ,int,char*,char*,int) ;
 int FUNC_4 (TYPE_2__*,int ) ;

int FUNC_5(SMeterObj *VAR_3, SCompBlock *VAR_4, SData *VAR_5[]) {
  char * VAR_6 = ((void*)0);
  int VAR_7 = 0, VAR_8 = 0;
  SField *VAR_9 = ((void*)0);
  char * VAR_10 = ((void*)0);
  int VAR_11 = 0;

  SVnodeObj *VAR_12 = VAR_2 + VAR_3->vnode;
  VAR_6 = FUNC_1(VAR_3->bytesPerPoint * (VAR_4->numOfPoints + 1));
  if (VAR_4->algorithm == VAR_1) {
    VAR_11 = VAR_3->maxBytes*VAR_4->numOfPoints+VAR_0;
    VAR_10 = (char *)FUNC_0(1, VAR_3->maxBytes * VAR_4->numOfPoints + VAR_0);
  }

  for (VAR_7 = 0; VAR_7 < VAR_4->numOfCols; ++VAR_7) {
    VAR_8 = FUNC_3(VAR_12->lfd, VAR_4, &VAR_9, VAR_7, VAR_5[VAR_7]->data,
                                VAR_3->pointsPerFileBlock*VAR_3->schema[VAR_7].bytes+VAR_0, VAR_6, VAR_10, VAR_11);
    if (VAR_8 < 0) break;
    VAR_5[VAR_7]->len = VAR_3->schema[VAR_7].bytes * VAR_4->numOfPoints;
  }

  FUNC_2(VAR_10);
  FUNC_2(VAR_6);
  FUNC_2(VAR_9);
  if (VAR_8 < 0) VAR_8 = FUNC_4(VAR_12, VAR_12->fileId);
  return VAR_8;
}
