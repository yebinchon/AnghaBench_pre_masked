
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ id; int nRef; int trace; void* owner; int mutex; } ;
typedef TYPE_1__ sqlite3_mutex ;
typedef void* pthread_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_1__*,int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (void*,void*) ;
 scalar_t__ FUNC_4 (int *) ;
 void* FUNC_5 () ;

__attribute__((used)) static int FUNC_6(sqlite3_mutex *VAR_3){
  int VAR_4;
  FUNC_0( VAR_3->id==VAR_1 || FUNC_2(VAR_3) );
  if( FUNC_4(&VAR_3->mutex)==0 ){




    VAR_4 = VAR_2;
  }else{
    VAR_4 = VAR_0;
  }







  return VAR_4;
}
