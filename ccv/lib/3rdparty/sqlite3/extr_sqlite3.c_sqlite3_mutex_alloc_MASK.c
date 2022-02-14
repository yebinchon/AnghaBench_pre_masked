
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_mutex ;
struct TYPE_3__ {int * (* xMutexAlloc ) (int) ;} ;
struct TYPE_4__ {TYPE_1__ mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int * (*) (int)) ;
 TYPE_2__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int * FUNC_3 (int) ;

sqlite3_mutex *FUNC_4(int VAR_2){

  if( VAR_2<=VAR_0 && FUNC_2() ) return 0;
  if( VAR_2>VAR_0 && FUNC_1() ) return 0;

  FUNC_0( VAR_1.mutex.xMutexAlloc );
  return VAR_1.mutex.xMutexAlloc(VAR_2);
}
