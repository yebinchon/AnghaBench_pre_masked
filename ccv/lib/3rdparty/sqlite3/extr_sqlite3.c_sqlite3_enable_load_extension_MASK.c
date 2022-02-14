
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int mutex; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(sqlite3 *VAR_3, int VAR_4){
  FUNC_0(VAR_3->mutex);
  if( VAR_4 ){
    VAR_3->flags |= VAR_1|VAR_0;
  }else{
    VAR_3->flags &= ~(VAR_1|VAR_0);
  }
  FUNC_1(VAR_3->mutex);
  return VAR_2;
}
