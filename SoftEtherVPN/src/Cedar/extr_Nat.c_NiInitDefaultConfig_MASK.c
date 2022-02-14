
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int SaveLog; } ;
struct TYPE_5__ {int Online; TYPE_3__ Option; int AdminPort; } ;
typedef TYPE_1__ NAT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_3__*) ;

void FUNC_1(NAT *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }


 FUNC_0(VAR_1, &VAR_1->Option);


 VAR_1->AdminPort = VAR_0;


 VAR_1->Online = 0;


 VAR_1->Option.SaveLog = 1;
}
