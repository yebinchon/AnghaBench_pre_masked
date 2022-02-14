
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ id; int nRef; scalar_t__ owner; int trace; int mutex; } ;
typedef TYPE_1__ sqlite3_mutex ;
typedef scalar_t__ pthread_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,TYPE_1__*,int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 () ;

__attribute__((used)) static void FUNC_6(sqlite3_mutex *VAR_1){
  FUNC_0( VAR_1->id==VAR_0 || FUNC_2(VAR_1) );
  FUNC_4(&VAR_1->mutex);
}
