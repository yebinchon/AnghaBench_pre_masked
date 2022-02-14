
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,int,int*,int*) ;
 int FUNC_3 (TYPE_1__*,int,char*,...) ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

int FUNC_7(
  sqlite3 *VAR_7,
  const char *VAR_8,
  int VAR_9,
  int *VAR_10,
  int *VAR_11
){



  int VAR_12;
  int VAR_13 = VAR_4;


  if( VAR_10 ) *VAR_10 = -1;
  if( VAR_11 ) *VAR_11 = -1;

  FUNC_0( VAR_0>VAR_1 );
  FUNC_0( VAR_0<VAR_2 );
  FUNC_0( VAR_1+2==VAR_2 );
  if( VAR_9<VAR_1 || VAR_9>VAR_2 ){
    return VAR_5;
  }

  FUNC_5(VAR_7->mutex);
  if( VAR_8 && VAR_8[0] ){
    VAR_13 = FUNC_4(VAR_7, VAR_8);
  }
  if( VAR_13<0 ){
    VAR_12 = VAR_3;
    FUNC_3(VAR_7, VAR_3, "unknown database: %s", VAR_8);
  }else{
    VAR_12 = FUNC_2(VAR_7, VAR_13, VAR_9, VAR_10, VAR_11);
    FUNC_3(VAR_7, VAR_12, 0);
  }
  VAR_12 = FUNC_1(VAR_7, VAR_12);
  FUNC_6(VAR_7->mutex);
  return VAR_12;

}
