
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int Online; int lock; int Option; int * ClientAuth; int * ClientOption; int Cedar; int Virtual; } ;
typedef int RPC_DUMMY ;
typedef TYPE_1__ NAT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;

UINT FUNC_4(NAT *VAR_3, RPC_DUMMY *VAR_4)
{
 UINT VAR_5 = VAR_2;

 FUNC_0(VAR_3->lock);
 {
  if (VAR_3->Online)
  {

   VAR_5 = VAR_1;
  }
  else
  {
   if (VAR_3->ClientOption == ((void*)0) || VAR_3->ClientAuth == ((void*)0))
   {

    VAR_5 = VAR_0;
   }
   else
   {

    VAR_3->Online = 1;


    VAR_3->Virtual = FUNC_1(VAR_3->Cedar, VAR_3->ClientOption, VAR_3->ClientAuth,
     &VAR_3->Option, VAR_3);
   }
  }
 }
 FUNC_3(VAR_3->lock);

 FUNC_2(VAR_3);

 return VAR_5;
}
