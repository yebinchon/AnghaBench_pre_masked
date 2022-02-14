
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int singleCmd; TYPE_1__* encodeMethod; } ;
struct TYPE_7__ {int (* stopJsonFp ) (TYPE_2__*,int *) ;int (* startJsonFp ) (TYPE_2__*,int *,int *) ;} ;
typedef TYPE_1__ HttpEncodeMethod ;
typedef TYPE_2__ HttpContext ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;

void FUNC_3(HttpContext *VAR_0) {
  HttpEncodeMethod *VAR_1 = VAR_0->encodeMethod;
  if (VAR_1->startJsonFp) {
    (VAR_1->startJsonFp)(VAR_0, &VAR_0->singleCmd, ((void*)0));
  }
  if (VAR_1->stopJsonFp) {
    (VAR_1->stopJsonFp)(VAR_0, &VAR_0->singleCmd);
  }
  FUNC_0(VAR_0);
}
