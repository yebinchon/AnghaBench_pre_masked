
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int busyTimeout; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,void*) ;
 int VAR_1 ;

int FUNC_1(sqlite3 *VAR_2, int VAR_3){
  if( VAR_3>0 ){
    FUNC_0(VAR_2, VAR_1, (void*)VAR_2);
    VAR_2->busyTimeout = VAR_3;
  }else{
    FUNC_0(VAR_2, 0, 0);
  }
  return VAR_0;
}
