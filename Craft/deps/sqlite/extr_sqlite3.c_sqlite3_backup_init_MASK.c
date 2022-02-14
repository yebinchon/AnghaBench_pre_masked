
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ pDest; int iNext; TYPE_1__* pSrc; scalar_t__ isAttached; TYPE_3__* pSrcDb; TYPE_3__* pDestDb; } ;
typedef TYPE_2__ sqlite3_backup ;
struct TYPE_14__ {int mutex; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_12__ {int nBackup; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (TYPE_3__*,TYPE_3__*,char const*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

sqlite3_backup *FUNC_7(
  sqlite3* VAR_2,
  const char *VAR_3,
  sqlite3* VAR_4,
  const char *VAR_5
){
  sqlite3_backup *VAR_6;
  FUNC_5(VAR_4->mutex);
  FUNC_5(VAR_2->mutex);

  if( VAR_4==VAR_2 ){
    FUNC_2(
        VAR_2, VAR_0, "source and destination must be distinct"
    );
    VAR_6 = 0;
  }else {




    VAR_6 = (sqlite3_backup *)FUNC_3(sizeof(sqlite3_backup));
    if( !VAR_6 ){
      FUNC_2(VAR_2, VAR_1, 0);
    }
  }


  if( VAR_6 ){
    VAR_6->pSrc = FUNC_0(VAR_2, VAR_4, VAR_5);
    VAR_6->pDest = FUNC_0(VAR_2, VAR_2, VAR_3);
    VAR_6->pDestDb = VAR_2;
    VAR_6->pSrcDb = VAR_4;
    VAR_6->iNext = 1;
    VAR_6->isAttached = 0;

    if( 0==VAR_6->pSrc || 0==VAR_6->pDest || FUNC_1(VAR_6)==VAR_1 ){





      FUNC_4(VAR_6);
      VAR_6 = 0;
    }
  }
  if( VAR_6 ){
    VAR_6->pSrc->nBackup++;
  }

  FUNC_6(VAR_2->mutex);
  FUNC_6(VAR_4->mutex);
  return VAR_6;
}
