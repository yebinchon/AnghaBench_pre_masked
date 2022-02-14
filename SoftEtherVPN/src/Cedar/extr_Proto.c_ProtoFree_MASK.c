
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int * impl; } ;
typedef int PROTO_IMPL ;
typedef TYPE_1__ PROTO ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * VAR_0 ;

void FUNC_4()
{
 UINT VAR_1;
 PROTO_IMPL *VAR_2;

 for (VAR_1 = 0; VAR_1 < FUNC_2(); ++VAR_1)
 {
  PROTO *VAR_3 = FUNC_1(VAR_1);
  VAR_2 = VAR_3->impl;
  FUNC_0(VAR_3);
 }

 FUNC_3(VAR_0);
 VAR_0 = ((void*)0);
}
