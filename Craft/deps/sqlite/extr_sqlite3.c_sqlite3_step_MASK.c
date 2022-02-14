
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_9__ {int mutex; int mallocFailed; int pErr; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_10__ {int doingRerun; scalar_t__ expired; int rc; int zErrMsg; int isPrepareV2; TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;

int FUNC_12(sqlite3_stmt *VAR_5){
  int VAR_6 = VAR_3;
  int VAR_7 = VAR_3;
  Vdbe *VAR_8 = (Vdbe*)VAR_5;
  int VAR_9 = 0;
  sqlite3 *VAR_10;

  if( FUNC_11(VAR_8) ){
    return VAR_1;
  }
  VAR_10 = VAR_8->db;
  FUNC_7(VAR_10->mutex);
  VAR_8->doingRerun = 0;
  while( (VAR_6 = FUNC_6(VAR_8))==VAR_4
         && VAR_9++ < VAR_0
         && (VAR_7 = VAR_6 = FUNC_5(VAR_8))==VAR_3 ){
    FUNC_9(VAR_5);
    VAR_8->doingRerun = 1;
    FUNC_1( VAR_8->expired==0 );
  }
  if( VAR_7!=VAR_3 && FUNC_0(VAR_8->isPrepareV2) && FUNC_0(VAR_10->pErr) ){
    const char *VAR_11 = (const char *)FUNC_10(VAR_10->pErr);
    FUNC_3(VAR_10, VAR_8->zErrMsg);
    if( !VAR_10->mallocFailed ){
      VAR_8->zErrMsg = FUNC_4(VAR_10, VAR_11);
      VAR_8->rc = VAR_7;
    } else {
      VAR_8->zErrMsg = 0;
      VAR_8->rc = VAR_6 = VAR_2;
    }
  }
  VAR_6 = FUNC_2(VAR_10, VAR_6);
  FUNC_8(VAR_10->mutex);
  return VAR_6;
}
