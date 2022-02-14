
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ Type; int * BulkRecvTube; int * RecvTube; } ;
typedef int SOCK_EVENT ;
typedef TYPE_1__ SOCK ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

void FUNC_3(SOCK *VAR_1, SOCK_EVENT *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_1->Type == VAR_0)
 {

  FUNC_0(VAR_1->RecvTube, VAR_2);
  return;
 }

 if (VAR_1->BulkRecvTube != ((void*)0))
 {

  FUNC_0(VAR_1->BulkRecvTube, VAR_2);
 }




 FUNC_1(VAR_1, VAR_2);

}
