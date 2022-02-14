
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* xProfile ) (void*,char const*,VAR_0) ;int mutex; void* pProfileArg; } ;
typedef TYPE_1__ sqlite3 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void *FUNC_2(
  sqlite3 *VAR_1,
  void (*VAR_2)(void*,const char*,VAR_3),
  void *VAR_4
){
  void *VAR_5;
  FUNC_0(VAR_1->mutex);
  VAR_5 = VAR_1->pProfileArg;
  VAR_1->xProfile = VAR_2;
  VAR_1->pProfileArg = VAR_4;
  FUNC_1(VAR_1->mutex);
  return VAR_5;
}
