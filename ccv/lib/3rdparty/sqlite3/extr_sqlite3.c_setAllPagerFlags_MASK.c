
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nDb; int flags; TYPE_2__* aDb; scalar_t__ autoCommit; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_5__ {int safety_level; scalar_t__ pBt; } ;
typedef TYPE_2__ Db ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(sqlite3 *VAR_8){
  if( VAR_8->autoCommit ){
    Db *VAR_9 = VAR_8->aDb;
    int VAR_10 = VAR_8->nDb;
    FUNC_0( VAR_7==VAR_3 );
    FUNC_0( VAR_6==VAR_1 );
    FUNC_0( VAR_5==VAR_0 );
    FUNC_0( (VAR_3 | VAR_1 | VAR_0)
             == VAR_2 );
    FUNC_0( (VAR_9->safety_level & VAR_4)==VAR_9->safety_level );
    while( (VAR_10--) > 0 ){
      if( VAR_9->pBt ){
        FUNC_1(VAR_9->pBt,
                 VAR_9->safety_level | (VAR_8->flags & VAR_2) );
      }
      VAR_9++;
    }
  }
}
