
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef int sqlite3_file ;
struct TYPE_5__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;
typedef int Pager ;
typedef int Btree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (int *,int,void*) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

int FUNC_12(sqlite3 *VAR_6, const char *VAR_7, int VAR_8, void *VAR_9){
  int VAR_10 = VAR_0;
  Btree *VAR_11;




  FUNC_10(VAR_6->mutex);
  VAR_11 = FUNC_4(VAR_6, VAR_7);
  if( VAR_11 ){
    Pager *VAR_12;
    sqlite3_file *VAR_13;
    FUNC_1(VAR_11);
    VAR_12 = FUNC_3(VAR_11);
    FUNC_0( VAR_12!=0 );
    VAR_13 = FUNC_6(VAR_12);
    FUNC_0( VAR_13!=0 );
    if( VAR_8==VAR_1 ){
      *(sqlite3_file**)VAR_9 = VAR_13;
      VAR_10 = VAR_5;
    }else if( VAR_8==VAR_3 ){
      *(sqlite3_vfs**)VAR_9 = FUNC_8(VAR_12);
      VAR_10 = VAR_5;
    }else if( VAR_8==VAR_2 ){
      *(sqlite3_file**)VAR_9 = FUNC_7(VAR_12);
      VAR_10 = VAR_5;
    }else{
      VAR_10 = FUNC_5(VAR_13, VAR_8, VAR_9);
    }
    FUNC_2(VAR_11);
  }
  FUNC_11(VAR_6->mutex);
  return VAR_10;
}
