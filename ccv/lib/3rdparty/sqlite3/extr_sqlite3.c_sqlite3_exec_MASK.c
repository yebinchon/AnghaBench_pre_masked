
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef scalar_t__ (* sqlite3_callback ) (void*,int,char**,char**) ;
struct TYPE_11__ {int flags; int errMask; int mutex; } ;
typedef TYPE_1__ sqlite3 ;
typedef int Vdbe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,char**) ;
 char** FUNC_3 (TYPE_1__*,int) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;
 scalar_t__ FUNC_6 (char const) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int *,int) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (TYPE_1__*,char const*,int,int **,char const**) ;
 int FUNC_18 (int *) ;

int FUNC_19(
  sqlite3 *VAR_9,
  const char *VAR_10,
  sqlite3_callback VAR_11,
  void *VAR_12,
  char **VAR_13
){
  int VAR_14 = VAR_7;
  const char *VAR_15;
  sqlite3_stmt *VAR_16 = 0;
  char **VAR_17 = 0;
  int VAR_18;

  if( !FUNC_8(VAR_9) ) return VAR_2;
  if( VAR_10==0 ) VAR_10 = "";

  FUNC_15(VAR_9->mutex);
  FUNC_5(VAR_9, VAR_7);
  while( VAR_14==VAR_7 && VAR_10[0] ){
    int VAR_19;
    char **VAR_20 = 0;

    VAR_16 = 0;
    VAR_14 = FUNC_17(VAR_9, VAR_10, -1, &VAR_16, &VAR_15);
    FUNC_0( VAR_14==VAR_7 || VAR_16==0 );
    if( VAR_14!=VAR_7 ){
      continue;
    }
    if( !VAR_16 ){

      VAR_10 = VAR_15;
      continue;
    }

    VAR_18 = 0;
    VAR_19 = FUNC_10(VAR_16);

    while( 1 ){
      int VAR_21;
      VAR_14 = FUNC_18(VAR_16);


      if( VAR_11 && (VAR_8==VAR_14 ||
          (VAR_1==VAR_14 && !VAR_18
                           && VAR_9->flags&VAR_6)) ){
        if( !VAR_18 ){
          VAR_17 = FUNC_3(VAR_9, (2*VAR_19+1)*sizeof(const char*));
          if( VAR_17==0 ){
            goto exec_out;
          }
          for(VAR_21=0; VAR_21<VAR_19; VAR_21++){
            VAR_17[VAR_21] = (char *)FUNC_11(VAR_16, VAR_21);


            FUNC_0( VAR_17[VAR_21]!=0 );
          }
          VAR_18 = 1;
        }
        if( VAR_14==VAR_8 ){
          VAR_20 = &VAR_17[VAR_19];
          for(VAR_21=0; VAR_21<VAR_19; VAR_21++){
            VAR_20[VAR_21] = (char *)FUNC_12(VAR_16, VAR_21);
            if( !VAR_20[VAR_21] && FUNC_13(VAR_16, VAR_21)!=VAR_5 ){
              FUNC_7(VAR_9);
              goto exec_out;
            }
          }
          VAR_20[VAR_21] = 0;
        }
        if( VAR_11(VAR_12, VAR_19, VAR_20, VAR_17) ){



          VAR_14 = VAR_0;
          FUNC_9((Vdbe *)VAR_16);
          VAR_16 = 0;
          FUNC_5(VAR_9, VAR_0);
          goto exec_out;
        }
      }

      if( VAR_14!=VAR_8 ){
        VAR_14 = FUNC_9((Vdbe *)VAR_16);
        VAR_16 = 0;
        VAR_10 = VAR_15;
        while( FUNC_6(VAR_10[0]) ) VAR_10++;
        break;
      }
    }

    FUNC_2(VAR_9, VAR_17);
    VAR_17 = 0;
  }

exec_out:
  if( VAR_16 ) FUNC_9((Vdbe *)VAR_16);
  FUNC_2(VAR_9, VAR_17);

  VAR_14 = FUNC_1(VAR_9, VAR_14);
  if( VAR_14!=VAR_7 && VAR_13 ){
    *VAR_13 = FUNC_4(0, FUNC_14(VAR_9));
    if( *VAR_13==0 ){
      VAR_14 = VAR_4;
      FUNC_5(VAR_9, VAR_3);
    }
  }else if( VAR_13 ){
    *VAR_13 = 0;
  }

  FUNC_0( (VAR_14&VAR_9->errMask)==VAR_14 );
  FUNC_16(VAR_9->mutex);
  return VAR_14;
}
