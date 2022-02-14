
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_7__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;
typedef int Vdbe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char const*,int,int,int *,int **,char const**) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(
  sqlite3 *VAR_3,
  const char *VAR_4,
  int VAR_5,
  int VAR_6,
  Vdbe *VAR_7,
  sqlite3_stmt **VAR_8,
  const char **VAR_9
){
  int VAR_10;
  FUNC_0( VAR_8!=0 );
  *VAR_8 = 0;
  if( !FUNC_4(VAR_3) ){
    return VAR_0;
  }
  FUNC_6(VAR_3->mutex);
  FUNC_1(VAR_3);
  VAR_10 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  if( VAR_10==VAR_2 ){
    FUNC_5(*VAR_8);
    VAR_10 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  }
  FUNC_2(VAR_3);
  FUNC_7(VAR_3->mutex);
  FUNC_0( VAR_10==VAR_1 || *VAR_8==0 );
  return VAR_10;
}
