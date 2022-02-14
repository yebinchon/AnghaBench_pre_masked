
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_9__ {int mutex; int mallocFailed; int pErr; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_10__ {int doingRerun; int pc; int rc; scalar_t__ expired; int zErrMsg; TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;

int FUNC_11(sqlite3_stmt *VAR_5){
  int VAR_6 = VAR_3;
  Vdbe *VAR_7 = (Vdbe*)VAR_5;
  int VAR_8 = 0;
  sqlite3 *VAR_9;

  if( FUNC_10(VAR_7) ){
    return VAR_1;
  }
  VAR_9 = VAR_7->db;
  FUNC_6(VAR_9->mutex);
  VAR_7->doingRerun = 0;
  while( (VAR_6 = FUNC_5(VAR_7))==VAR_4
         && VAR_8++ < VAR_0 ){
    int VAR_10 = VAR_7->pc;
    VAR_6 = FUNC_4(VAR_7);
    if( VAR_6!=VAR_3 ){
      const char *VAR_11 = (const char *)FUNC_9(VAR_9->pErr);
      FUNC_2(VAR_9, VAR_7->zErrMsg);
      if( !VAR_9->mallocFailed ){
        VAR_7->zErrMsg = FUNC_3(VAR_9, VAR_11);
        VAR_7->rc = VAR_6 = FUNC_1(VAR_9, VAR_6);
      } else {
        VAR_7->zErrMsg = 0;
        VAR_7->rc = VAR_6 = VAR_2;
      }
      break;
    }
    FUNC_8(VAR_5);
    if( VAR_10>=0 ) VAR_7->doingRerun = 1;
    FUNC_0( VAR_7->expired==0 );
  }
  FUNC_7(VAR_9->mutex);
  return VAR_6;
}
