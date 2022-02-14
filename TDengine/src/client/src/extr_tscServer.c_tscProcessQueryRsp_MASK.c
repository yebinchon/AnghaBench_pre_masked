
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int * data; scalar_t__ pRsp; int qhandle; } ;
struct TYPE_6__ {TYPE_1__ res; } ;
typedef TYPE_1__ SSqlRes ;
typedef TYPE_2__ SSqlObj ;


 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(SSqlObj *VAR_0) {
  SSqlRes *VAR_1 = &VAR_0->res;

  VAR_1->qhandle = *((uint64_t *)VAR_1->pRsp);
  VAR_1->data = ((void*)0);
  FUNC_0(VAR_1);
  return 0;
}
