
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_18__ {int nCol; int iPKey; int tabFlags; TYPE_3__* aCol; scalar_t__ pSelect; } ;
typedef TYPE_2__ Table ;
struct TYPE_19__ {char* zColl; scalar_t__ notNull; int colFlags; int zName; } ;
typedef TYPE_3__ Column ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,int,char*,char*) ;
 TYPE_2__* FUNC_7 (TYPE_1__*,char const*,char const*) ;
 int FUNC_8 (TYPE_1__*,char**) ;
 scalar_t__ FUNC_9 (char const*) ;
 char* FUNC_10 (TYPE_1__*,char*,char const*,char const*) ;
 int FUNC_11 (TYPE_1__*) ;
 char* VAR_5 ;
 scalar_t__ FUNC_12 (int ,char const*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

int FUNC_15(
  sqlite3 *VAR_6,
  const char *VAR_7,
  const char *VAR_8,
  const char *VAR_9,
  char const **VAR_10,
  char const **VAR_11,
  int *VAR_12,
  int *VAR_13,
  int *VAR_14
){
  int VAR_15;
  char *VAR_16 = 0;
  Table *VAR_17 = 0;
  Column *VAR_18 = 0;
  int VAR_19 = 0;
  char const *VAR_20 = 0;
  char const *VAR_21 = 0;
  int VAR_22 = 0;
  int VAR_23 = 0;
  int VAR_24 = 0;
  FUNC_13(VAR_6->mutex);
  FUNC_2(VAR_6);
  VAR_15 = FUNC_8(VAR_6, &VAR_16);
  if( VAR_3!=VAR_15 ){
    goto error_out;
  }


  VAR_17 = FUNC_7(VAR_6, VAR_8, VAR_7);
  if( !VAR_17 || VAR_17->pSelect ){
    VAR_17 = 0;
    goto error_out;
  }


  if( VAR_9==0 ){

  }else{
    for(VAR_19=0; VAR_19<VAR_17->nCol; VAR_19++){
      VAR_18 = &VAR_17->aCol[VAR_19];
      if( 0==FUNC_12(VAR_18->zName, VAR_9) ){
        break;
      }
    }
    if( VAR_19==VAR_17->nCol ){
      if( FUNC_0(VAR_17) && FUNC_9(VAR_9) ){
        VAR_19 = VAR_17->iPKey;
        VAR_18 = VAR_19>=0 ? &VAR_17->aCol[VAR_19] : 0;
      }else{
        VAR_17 = 0;
        goto error_out;
      }
    }
  }
  if( VAR_18 ){
    VAR_20 = FUNC_4(VAR_18,0);
    VAR_21 = VAR_18->zColl;
    VAR_22 = VAR_18->notNull!=0;
    VAR_23 = (VAR_18->colFlags & VAR_0)!=0;
    VAR_24 = VAR_17->iPKey==VAR_19 && (VAR_17->tabFlags & VAR_4)!=0;
  }else{
    VAR_20 = "INTEGER";
    VAR_23 = 1;
  }
  if( !VAR_21 ){
    VAR_21 = VAR_5;
  }

error_out:
  FUNC_3(VAR_6);





  if( VAR_10 ) *VAR_10 = VAR_20;
  if( VAR_11 ) *VAR_11 = VAR_21;
  if( VAR_12 ) *VAR_12 = VAR_22;
  if( VAR_13 ) *VAR_13 = VAR_23;
  if( VAR_14 ) *VAR_14 = VAR_24;

  if( VAR_3==VAR_15 && !VAR_17 ){
    FUNC_5(VAR_6, VAR_16);
    VAR_16 = FUNC_10(VAR_6, "no such table column: %s.%s", VAR_8,
        VAR_9);
    VAR_15 = VAR_1;
  }
  FUNC_6(VAR_6, VAR_15, (VAR_16?"%s":0), VAR_16);
  FUNC_5(VAR_6, VAR_16);
  VAR_15 = FUNC_1(VAR_6, VAR_15);
  FUNC_14(VAR_6->mutex);
  return VAR_15;
}
