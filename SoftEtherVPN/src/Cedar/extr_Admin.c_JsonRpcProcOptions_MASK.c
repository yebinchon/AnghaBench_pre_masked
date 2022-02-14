
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int JsonRpcAuthed; int Listener; } ;
typedef int SOCK ;
typedef int HTTP_HEADER ;
typedef TYPE_1__ CONNECTION ;


 int FUNC_0 (int *,int,char*,int *,int ,int *,int *,int *,int *) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(CONNECTION *VAR_0, SOCK *VAR_1, HTTP_HEADER *VAR_2, char *VAR_3)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_0->JsonRpcAuthed = 1;


 FUNC_1(VAR_0->Listener, VAR_1);


 FUNC_0(VAR_1, 200, "OK", ((void*)0), 0, ((void*)0), ((void*)0), ((void*)0), VAR_2);
}
