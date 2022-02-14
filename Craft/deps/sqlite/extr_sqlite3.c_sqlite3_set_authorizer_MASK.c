
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* xAuth ) (void*,int,char const*,char const*,char const*,char const*) ;int mutex; void* pAuthArg; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(
  sqlite3 *VAR_1,
  int (*VAR_2)(void*,int,const char*,const char*,const char*,const char*),
  void *VAR_3
){
  FUNC_1(VAR_1->mutex);
  VAR_1->xAuth = VAR_2;
  VAR_1->pAuthArg = VAR_3;
  FUNC_0(VAR_1);
  FUNC_2(VAR_1->mutex);
  return VAR_0;
}
