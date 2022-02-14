
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* aDb; int autoCommit; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_9__ {TYPE_2__* db; } ;
struct TYPE_7__ {scalar_t__ pBt; } ;
typedef TYPE_3__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(Parse *VAR_2){
  sqlite3 *VAR_3 = VAR_2->db;
  if( VAR_3->aDb[1].pBt!=0 ){
    if( !VAR_3->autoCommit || FUNC_1(VAR_3->aDb[1].pBt) ){
      FUNC_2(VAR_2, "temporary storage cannot be changed "
        "from within a transaction");
      return VAR_0;
    }
    FUNC_0(VAR_3->aDb[1].pBt);
    VAR_3->aDb[1].pBt = 0;
    FUNC_3(VAR_3);
  }
  return VAR_1;
}
