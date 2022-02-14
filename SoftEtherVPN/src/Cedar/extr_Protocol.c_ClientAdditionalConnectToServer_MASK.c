
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__* Session; int ServerX; int ConnectingSocks; int ServerName; } ;
struct TYPE_15__ {int RemoteX; int ref; } ;
struct TYPE_14__ {int SessionTimeOuted; scalar_t__ Halt; } ;
typedef TYPE_2__ SOCK ;
typedef TYPE_3__ CONNECTION ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,int *,int *,int ,int ) ;
 int FUNC_10 (int ) ;

SOCK *FUNC_11(CONNECTION *VAR_1)
{
 SOCK *VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_2 = FUNC_2(VAR_1, 1);
 if (VAR_2 == ((void*)0))
 {

  return ((void*)0);
 }


 FUNC_6(VAR_1->ConnectingSocks);
 {
  FUNC_0(VAR_1->ConnectingSocks, VAR_2);
  FUNC_1(VAR_2->ref);
 }
 FUNC_10(VAR_1->ConnectingSocks);

 if (VAR_1->Session->Halt)
 {

  FUNC_5(VAR_2);
  FUNC_6(VAR_1->ConnectingSocks);
  {
   if (FUNC_4(VAR_1->ConnectingSocks, VAR_2))
   {
    FUNC_7(VAR_2);
   }
  }
  FUNC_10(VAR_1->ConnectingSocks);
  FUNC_7(VAR_2);
  return ((void*)0);
 }


 FUNC_8(VAR_2, VAR_0);


 if (FUNC_9(VAR_2, ((void*)0), ((void*)0), 0, VAR_1->ServerName) == 0)
 {

  FUNC_5(VAR_2);
  FUNC_6(VAR_1->ConnectingSocks);
  {
   if (FUNC_4(VAR_1->ConnectingSocks, VAR_2))
   {
    FUNC_7(VAR_2);
   }
  }
  FUNC_10(VAR_1->ConnectingSocks);
  FUNC_7(VAR_2);
  return ((void*)0);
 }


 if (FUNC_3(VAR_2->RemoteX, VAR_1->ServerX) == 0)
 {

  FUNC_5(VAR_2);
  VAR_1->Session->SessionTimeOuted = 1;
 }

 return VAR_2;
}
