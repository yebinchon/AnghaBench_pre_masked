
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int sqlite3_stmt ;
struct TYPE_7__ {int* pnBytesFreed; int mutex; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_8__ {scalar_t__* aCounter; TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(sqlite3_stmt *VAR_2, int VAR_3, int VAR_4){
  Vdbe *VAR_5 = (Vdbe*)VAR_2;
  u32 VAR_6;
  if( VAR_3==VAR_1 ){
    sqlite3 *VAR_7 = VAR_5->db;
    FUNC_3(VAR_7->mutex);
    VAR_6 = 0;
    VAR_7->pnBytesFreed = (int*)&VAR_6;
    FUNC_2(VAR_7, VAR_5);
    FUNC_1(VAR_7, VAR_5);
    VAR_7->pnBytesFreed = 0;
    FUNC_4(VAR_7->mutex);
  }else{
    VAR_6 = VAR_5->aCounter[VAR_3];
    if( VAR_4 ) VAR_5->aCounter[VAR_3] = 0;
  }
  return (int)VAR_6;
}
