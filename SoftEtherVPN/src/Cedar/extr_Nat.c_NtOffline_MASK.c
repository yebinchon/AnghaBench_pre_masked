
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int Online; int lock; int * Virtual; } ;
typedef int RPC_DUMMY ;
typedef TYPE_1__ NAT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

UINT FUNC_5(NAT *VAR_2, RPC_DUMMY *VAR_3)
{
 UINT VAR_4 = VAR_0;

 FUNC_0(VAR_2->lock);
 {
  if (VAR_2->Online == 0)
  {

   VAR_4 = VAR_1;
  }
  else
  {

   FUNC_3(VAR_2->Virtual);
   FUNC_2(VAR_2->Virtual);
   VAR_2->Virtual = ((void*)0);

   VAR_2->Online = 0;
  }
 }
 FUNC_4(VAR_2->lock);

 FUNC_1(VAR_2);

 return VAR_4;
}
