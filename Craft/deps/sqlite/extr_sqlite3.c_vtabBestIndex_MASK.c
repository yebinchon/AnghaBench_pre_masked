
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;


struct TYPE_24__ {scalar_t__ zErrMsg; TYPE_1__* pModule; } ;
typedef TYPE_4__ sqlite3_vtab ;
struct TYPE_25__ {int nConstraint; TYPE_3__* aConstraintUsage; TYPE_2__* aConstraint; } ;
typedef TYPE_5__ sqlite3_index_info ;
struct TYPE_26__ {scalar_t__ zName; } ;
typedef TYPE_6__ Table ;
struct TYPE_27__ {int nErr; TYPE_14__* db; } ;
struct TYPE_23__ {scalar_t__ argvIndex; } ;
struct TYPE_22__ {int usable; } ;
struct TYPE_21__ {int (* xBestIndex ) (TYPE_4__*,TYPE_5__*) ;} ;
struct TYPE_20__ {int mallocFailed; } ;
struct TYPE_19__ {TYPE_4__* pVtab; } ;
typedef TYPE_7__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_7__*,char*,scalar_t__) ;
 TYPE_13__* FUNC_5 (TYPE_14__*,TYPE_6__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_8(Parse *VAR_2, Table *VAR_3, sqlite3_index_info *VAR_4){
  sqlite3_vtab *VAR_5 = FUNC_5(VAR_2->db, VAR_3)->pVtab;
  int VAR_6;
  int VAR_7;

  FUNC_2(("xBestIndex for %s\n", VAR_3->zName));
  FUNC_0(VAR_4);
  VAR_7 = VAR_5->pModule->xBestIndex(VAR_5, VAR_4);
  FUNC_1(VAR_4);

  if( VAR_7!=VAR_1 ){
    if( VAR_7==VAR_0 ){
      VAR_2->db->mallocFailed = 1;
    }else if( !VAR_5->zErrMsg ){
      FUNC_4(VAR_2, "%s", FUNC_3(VAR_7));
    }else{
      FUNC_4(VAR_2, "%s", VAR_5->zErrMsg);
    }
  }
  FUNC_6(VAR_5->zErrMsg);
  VAR_5->zErrMsg = 0;

  for(VAR_6=0; VAR_6<VAR_4->nConstraint; VAR_6++){
    if( !VAR_4->aConstraint[VAR_6].usable && VAR_4->aConstraintUsage[VAR_6].argvIndex>0 ){
      FUNC_4(VAR_2,
          "table %s: xBestIndex returned an invalid plan", VAR_3->zName);
    }
  }

  return VAR_2->nErr;
}
