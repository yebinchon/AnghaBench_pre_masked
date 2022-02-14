
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int X ;
struct TYPE_12__ {void* Err; TYPE_1__* FirstSock; int ServerName; scalar_t__ Halt; } ;
struct TYPE_11__ {int * RemoteX; } ;
typedef TYPE_1__ SOCK ;
typedef int K ;
typedef TYPE_2__ CONNECTION ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int *,int ,int ) ;

SOCK *FUNC_5(CONNECTION *VAR_3)
{
 SOCK *VAR_4 = ((void*)0);
 X *VAR_5 = ((void*)0);
 K *VAR_6 = ((void*)0);

 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_3->Halt)
 {
  VAR_3->Err = VAR_2;
  return ((void*)0);
 }


 VAR_4 = FUNC_0(VAR_3, 0);
 if (VAR_4 == ((void*)0))
 {

  return ((void*)0);
 }

 VAR_3->FirstSock = VAR_4;

 if (VAR_3->Halt)
 {
  VAR_3->Err = VAR_2;
  FUNC_2(VAR_4);
  VAR_3->FirstSock = ((void*)0);
  return ((void*)0);
 }


 FUNC_3(VAR_4, VAR_0);


 if (FUNC_4(VAR_4, VAR_5, VAR_6, 0, VAR_3->ServerName) == 0)
 {

  FUNC_1(VAR_4);
  FUNC_2(VAR_4);
  VAR_3->FirstSock = ((void*)0);
  VAR_3->Err = VAR_1;
  return ((void*)0);
 }

 if (VAR_4->RemoteX == ((void*)0))
 {

  FUNC_1(VAR_4);
  FUNC_2(VAR_4);
  VAR_3->FirstSock = ((void*)0);
  VAR_3->Err = VAR_1;
  return ((void*)0);
 }

 return VAR_4;
}
