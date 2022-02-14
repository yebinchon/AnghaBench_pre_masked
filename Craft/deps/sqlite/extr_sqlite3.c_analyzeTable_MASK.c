
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int zName; int pSchema; } ;
typedef TYPE_1__ Table ;
struct TYPE_15__ {int zName; } ;
struct TYPE_14__ {int nTab; scalar_t__ nMem; int db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Index ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*,TYPE_3__*,int,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int,int,int ,char*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(Parse *VAR_0, Table *VAR_1, Index *VAR_2){
  int VAR_3;
  int VAR_4;

  FUNC_1( VAR_1!=0 );
  FUNC_1( FUNC_5(VAR_0->db) );
  VAR_3 = FUNC_6(VAR_0->db, VAR_1->pSchema);
  FUNC_4(VAR_0, 0, VAR_3);
  VAR_4 = VAR_0->nTab;
  VAR_0->nTab += 3;
  if( VAR_2 ){
    FUNC_3(VAR_0, VAR_3, VAR_4, VAR_2->zName, "idx");
  }else{
    FUNC_3(VAR_0, VAR_3, VAR_4, VAR_1->zName, "tbl");
  }
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_0->nMem+1);
  FUNC_2(VAR_0, VAR_3);
}
