
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tmp ;
typedef int UINT ;
struct TYPE_13__ {int AcceptingSockets; } ;
struct TYPE_12__ {scalar_t__ ThreadProc; TYPE_4__* Cedar; } ;
struct TYPE_11__ {int RemoteIP; } ;
struct TYPE_10__ {TYPE_2__* s; TYPE_3__* r; } ;
typedef int THREAD ;
typedef TYPE_1__ TCP_ACCEPTED_PARAM ;
typedef TYPE_2__ SOCK ;
typedef TYPE_3__ LISTENER ;
typedef TYPE_4__ CEDAR ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int * FUNC_4 (scalar_t__,TYPE_1__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int) ;

void FUNC_8(LISTENER *VAR_2, SOCK *VAR_3)
{
 TCP_ACCEPTED_PARAM *VAR_4;
 THREAD *VAR_5;
 char VAR_6[VAR_0];
 UINT VAR_7 = 0;
 CEDAR *VAR_8;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_8 = VAR_2->Cedar;

 VAR_7 = FUNC_1(&VAR_3->RemoteIP);


 FUNC_2(VAR_6, sizeof(VAR_6), &VAR_3->RemoteIP);

 VAR_4 = FUNC_7(sizeof(TCP_ACCEPTED_PARAM));
 VAR_4->r = VAR_2;
 VAR_4->s = VAR_3;

 if (VAR_2->ThreadProc == VAR_1)
 {
  FUNC_3(VAR_8->AcceptingSockets);
 }

 VAR_5 = FUNC_4(VAR_2->ThreadProc, VAR_4);
 FUNC_6(VAR_5);
 FUNC_0(VAR_4);
 FUNC_5(VAR_5);
}
