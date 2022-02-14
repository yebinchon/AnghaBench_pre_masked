
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
struct TYPE_16__ {int rc; char const* zErrMsg; TYPE_2__* db; } ;
struct TYPE_14__ {int * pBt; } ;
typedef TYPE_3__ Parse ;
typedef int Btree ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char const*) ;
 int FUNC_1 (TYPE_2__*,int,char*,...) ;
 int FUNC_2 (TYPE_2__*,char const*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static Btree *FUNC_6(sqlite3 *VAR_2, sqlite3 *VAR_3, const char *VAR_4){
  int VAR_5 = FUNC_2(VAR_3, VAR_4);

  if( VAR_5==1 ){
    Parse *VAR_6;
    int VAR_7 = 0;
    VAR_6 = FUNC_4(VAR_2, sizeof(*VAR_6));
    if( VAR_6==0 ){
      FUNC_1(VAR_2, VAR_1, "out of memory");
      VAR_7 = VAR_1;
    }else{
      VAR_6->db = VAR_3;
      if( FUNC_3(VAR_6) ){
        FUNC_1(VAR_2, VAR_6->rc, "%s", VAR_6->zErrMsg);
        VAR_7 = VAR_0;
      }
      FUNC_0(VAR_2, VAR_6->zErrMsg);
      FUNC_5(VAR_2, VAR_6);
    }
    if( VAR_7 ){
      return 0;
    }
  }

  if( VAR_5<0 ){
    FUNC_1(VAR_2, VAR_0, "unknown database %s", VAR_4);
    return 0;
  }

  return VAR_3->aDb[VAR_5].pBt;
}
