
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int mTrace; int (* xTrace ) (unsigned int,void*,void*,void*) ;int mutex; void* pTraceArg; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(
  sqlite3 *VAR_2,
  unsigned VAR_3,
  int(*VAR_4)(unsigned,void*,void*,void*),
  void *VAR_5
){





  FUNC_1(VAR_2->mutex);
  if( VAR_3==0 ) VAR_4 = 0;
  if( VAR_4==0 ) VAR_3 = 0;
  VAR_2->mTrace = VAR_3;
  VAR_2->xTrace = VAR_4;
  VAR_2->pTraceArg = VAR_5;
  FUNC_2(VAR_2->mutex);
  return VAR_1;
}
