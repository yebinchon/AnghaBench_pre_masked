
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int mallocFailed; scalar_t__ pnBytesFreed; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_7__ {scalar_t__ db; int flags; int zMalloc; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(Mem *VAR_5, int VAR_6){
  if( VAR_5 && VAR_6 ){
    Mem *VAR_7;
    sqlite3 *VAR_8 = VAR_5->db;
    u8 VAR_9 = VAR_8->mallocFailed;
    if( VAR_8->pnBytesFreed ){
      for(VAR_7=&VAR_5[VAR_6]; VAR_5<VAR_7; VAR_5++){
        FUNC_1(VAR_8, VAR_5->zMalloc);
      }
      return;
    }
    for(VAR_7=&VAR_5[VAR_6]; VAR_5<VAR_7; VAR_5++){
      FUNC_0( (&VAR_5[1])==VAR_7 || VAR_5[0].db==VAR_5[1].db );
      if( VAR_5->flags&(VAR_0|VAR_1|VAR_2|VAR_4) ){
        FUNC_2(VAR_5);
      }else if( VAR_5->zMalloc ){
        FUNC_1(VAR_8, VAR_5->zMalloc);
        VAR_5->zMalloc = 0;
      }

      VAR_5->flags = VAR_3;
    }
    VAR_8->mallocFailed = VAR_9;
  }
}
