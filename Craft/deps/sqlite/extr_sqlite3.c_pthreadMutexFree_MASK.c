
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nRef; scalar_t__ id; int mutex; } ;
typedef TYPE_1__ sqlite3_mutex ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(sqlite3_mutex *VAR_2){
  FUNC_0( VAR_2->nRef==0 );
  FUNC_0( VAR_2->id==VAR_0 || VAR_2->id==VAR_1 );
  FUNC_1(&VAR_2->mutex);
  FUNC_2(VAR_2);
}
