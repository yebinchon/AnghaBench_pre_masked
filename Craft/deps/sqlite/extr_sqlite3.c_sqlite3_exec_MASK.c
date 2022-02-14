
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef scalar_t__ (* sqlite3_callback ) (void*,int,char**,char**) ;
struct TYPE_11__ {int flags; int mallocFailed; int errMask; int mutex; } ;
typedef TYPE_1__ sqlite3 ;
typedef int Vdbe ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,char**) ;
 char** FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_7 (char const) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *,int) ;
 scalar_t__ FUNC_14 (int *,int) ;
 scalar_t__ FUNC_15 (int *,int) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (TYPE_1__*,char const*,int,int **,char const**) ;
 int FUNC_21 (int *) ;

int FUNC_22(
  sqlite3 *VAR_8,
  const char *VAR_9,
  sqlite3_callback VAR_10,
  void *VAR_11,
  char **VAR_12
){
  int VAR_13 = VAR_6;
  const char *VAR_14;
  sqlite3_stmt *VAR_15 = 0;
  char **VAR_16 = 0;
  int VAR_17;

  if( !FUNC_9(VAR_8) ) return VAR_2;
  if( VAR_9==0 ) VAR_9 = "";

  FUNC_18(VAR_8->mutex);
  FUNC_6(VAR_8, VAR_6, 0);
  while( VAR_13==VAR_6 && VAR_9[0] ){
    int VAR_18;
    char **VAR_19 = 0;

    VAR_15 = 0;
    VAR_13 = FUNC_20(VAR_8, VAR_9, -1, &VAR_15, &VAR_14);
    FUNC_1( VAR_13==VAR_6 || VAR_15==0 );
    if( VAR_13!=VAR_6 ){
      continue;
    }
    if( !VAR_15 ){

      VAR_9 = VAR_14;
      continue;
    }

    VAR_17 = 0;
    VAR_18 = FUNC_12(VAR_15);

    while( 1 ){
      int VAR_20;
      VAR_13 = FUNC_21(VAR_15);


      if( VAR_10 && (VAR_7==VAR_13 ||
          (VAR_1==VAR_13 && !VAR_17
                           && VAR_8->flags&VAR_5)) ){
        if( !VAR_17 ){
          VAR_16 = FUNC_5(VAR_8, 2*VAR_18*sizeof(const char*) + 1);
          if( VAR_16==0 ){
            goto exec_out;
          }
          for(VAR_20=0; VAR_20<VAR_18; VAR_20++){
            VAR_16[VAR_20] = (char *)FUNC_13(VAR_15, VAR_20);


            FUNC_1( VAR_16[VAR_20]!=0 );
          }
          VAR_17 = 1;
        }
        if( VAR_13==VAR_7 ){
          VAR_19 = &VAR_16[VAR_18];
          for(VAR_20=0; VAR_20<VAR_18; VAR_20++){
            VAR_19[VAR_20] = (char *)FUNC_14(VAR_15, VAR_20);
            if( !VAR_19[VAR_20] && FUNC_15(VAR_15, VAR_20)!=VAR_4 ){
              VAR_8->mallocFailed = 1;
              goto exec_out;
            }
          }
        }
        if( VAR_10(VAR_11, VAR_18, VAR_19, VAR_16) ){
          VAR_13 = VAR_0;
          FUNC_11((Vdbe *)VAR_15);
          VAR_15 = 0;
          FUNC_6(VAR_8, VAR_0, 0);
          goto exec_out;
        }
      }

      if( VAR_13!=VAR_7 ){
        VAR_13 = FUNC_11((Vdbe *)VAR_15);
        VAR_15 = 0;
        VAR_9 = VAR_14;
        while( FUNC_7(VAR_9[0]) ) VAR_9++;
        break;
      }
    }

    FUNC_4(VAR_8, VAR_16);
    VAR_16 = 0;
  }

exec_out:
  if( VAR_15 ) FUNC_11((Vdbe *)VAR_15);
  FUNC_4(VAR_8, VAR_16);

  VAR_13 = FUNC_3(VAR_8, VAR_13);
  if( VAR_13!=VAR_6 && FUNC_0(VAR_13==FUNC_16(VAR_8)) && VAR_12 ){
    int VAR_21 = 1 + FUNC_10(FUNC_17(VAR_8));
    *VAR_12 = FUNC_8(VAR_21);
    if( *VAR_12 ){
      FUNC_2(*VAR_12, FUNC_17(VAR_8), VAR_21);
    }else{
      VAR_13 = VAR_3;
      FUNC_6(VAR_8, VAR_3, 0);
    }
  }else if( VAR_12 ){
    *VAR_12 = 0;
  }

  FUNC_1( (VAR_13&VAR_8->errMask)==VAR_13 );
  FUNC_19(VAR_8->mutex);
  return VAR_13;
}
