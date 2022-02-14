
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int nDb; TYPE_2__* aDb; int mutex; } ;
typedef TYPE_3__ sqlite3 ;
struct TYPE_12__ {int rc; int checkSchema; TYPE_3__* db; } ;
struct TYPE_10__ {TYPE_1__* pSchema; int * pBt; } ;
struct TYPE_9__ {int schema_cookie; } ;
typedef TYPE_4__ Parse ;
typedef int Btree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(Parse *VAR_5){
  sqlite3 *VAR_6 = VAR_5->db;
  int VAR_7;
  int VAR_8;
  int VAR_9;

  FUNC_0( VAR_5->checkSchema );
  FUNC_0( FUNC_8(VAR_6->mutex) );
  for(VAR_7=0; VAR_7<VAR_6->nDb; VAR_7++){
    int VAR_10 = 0;
    Btree *VAR_11 = VAR_6->aDb[VAR_7].pBt;
    if( VAR_11==0 ) continue;




    if( !FUNC_4(VAR_11) ){
      VAR_8 = FUNC_1(VAR_11, 0);
      if( VAR_8==VAR_2 || VAR_8==VAR_1 ){
        FUNC_5(VAR_6);
      }
      if( VAR_8!=VAR_3 ) return;
      VAR_10 = 1;
    }




    FUNC_3(VAR_11, VAR_0, (u32 *)&VAR_9);
    FUNC_0( FUNC_7(VAR_6, VAR_7, 0) );
    if( VAR_9!=VAR_6->aDb[VAR_7].pSchema->schema_cookie ){
      FUNC_6(VAR_6, VAR_7);
      VAR_5->rc = VAR_4;
    }


    if( VAR_10 ){
      FUNC_2(VAR_11);
    }
  }
}
