
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* xTrace ) (void*,char const*) ;int mutex; void* pTraceArg; } ;
typedef TYPE_1__ sqlite3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void *FUNC_2(sqlite3 *VAR_0, void (*VAR_1)(void*,const char*), void *VAR_2){
  void *VAR_3;
  FUNC_0(VAR_0->mutex);
  VAR_3 = VAR_0->pTraceArg;
  VAR_0->xTrace = VAR_1;
  VAR_0->pTraceArg = VAR_2;
  FUNC_1(VAR_0->mutex);
  return VAR_3;
}
