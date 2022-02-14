
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void (* xProfile ) (void*,char const*,VAR_0) ;int mutex; void* pProfileArg; } ;
typedef TYPE_1__ sqlite3 ;


 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void *FUNC_3(
  sqlite3 *VAR_2,
  void (*VAR_3)(void*,const char*,VAR_4),
  void *VAR_5
){
  void *VAR_6;







  FUNC_1(VAR_2->mutex);
  VAR_6 = VAR_2->pProfileArg;
  VAR_2->xProfile = VAR_3;
  VAR_2->pProfileArg = VAR_5;
  FUNC_2(VAR_2->mutex);
  return VAR_6;
}
