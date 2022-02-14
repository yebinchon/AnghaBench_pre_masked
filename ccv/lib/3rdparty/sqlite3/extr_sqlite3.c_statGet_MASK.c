
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ tRowcnt ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int i64 ;
struct TYPE_6__ {int* anDLt; int* anEq; } ;
struct TYPE_9__ {int nKeyCol; int nRow; scalar_t__ iGet; scalar_t__ nSample; int nCol; TYPE_3__* a; TYPE_1__ current; } ;
struct TYPE_7__ {int aRowid; int iRowid; } ;
struct TYPE_8__ {scalar_t__ nRowid; scalar_t__* anDLt; scalar_t__* anLt; scalar_t__* anEq; TYPE_2__ u; } ;
typedef TYPE_3__ Stat4Sample ;
typedef TYPE_4__ Stat4Accum ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 int FUNC_5 (int *,int ,scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char*,int,int ) ;
 int FUNC_9 (int,char*,char*,int) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(
  sqlite3_context *VAR_6,
  int VAR_7,
  sqlite3_value **VAR_8
){
  Stat4Accum *VAR_9 = (Stat4Accum*)FUNC_10(VAR_8[0]);
  FUNC_1( VAR_7==1 );

  {
    char *VAR_10;
    int VAR_11;

    char *VAR_12 = FUNC_3( (VAR_9->nKeyCol+1)*25 );
    if( VAR_12==0 ){
      FUNC_6(VAR_6);
      return;
    }

    FUNC_9(24, VAR_12, "%llu", (u64)VAR_9->nRow);
    VAR_10 = VAR_12 + FUNC_4(VAR_12);
    for(VAR_11=0; VAR_11<VAR_9->nKeyCol; VAR_11++){
      u64 VAR_13 = VAR_9->current.anDLt[VAR_11] + 1;
      u64 VAR_14 = (VAR_9->nRow + VAR_13 - 1) / VAR_13;
      FUNC_9(24, VAR_10, " %llu", VAR_14);
      VAR_10 += FUNC_4(VAR_10);
      FUNC_1( VAR_9->current.anEq[VAR_11] );
    }
    FUNC_1( VAR_10[0]=='\0' && VAR_10>VAR_12 );

    FUNC_8(VAR_6, VAR_12, -1, VAR_5);
  }
  FUNC_0( VAR_7 );

}
