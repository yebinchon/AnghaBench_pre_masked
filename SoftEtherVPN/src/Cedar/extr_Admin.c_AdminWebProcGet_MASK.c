
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int url ;
typedef int query_string ;
typedef int UINT ;
struct TYPE_4__ {int JsonRpcAuthed; int Listener; int Cedar; } ;
typedef int SOCK ;
typedef int HTTP_HEADER ;
typedef TYPE_1__ CONNECTION ;
typedef int ADMIN ;


 int FUNC_0 (int *,TYPE_1__*,int *,int *,char*,char*,char*,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int * FUNC_3 (int ,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (char*,int) ;

void FUNC_8(CONNECTION *VAR_3, SOCK *VAR_4, HTTP_HEADER *VAR_5, char *VAR_6)
{
 ADMIN *VAR_7;
 char VAR_8[VAR_1];
 char VAR_9[VAR_2];
 UINT VAR_10;
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
 {
  return;
 }

 VAR_7 = FUNC_3(VAR_3->Cedar, VAR_4, VAR_5);
 if (VAR_7 == ((void*)0))
 {
  FUNC_1(VAR_4, VAR_5);
  return;
 }

 VAR_3->JsonRpcAuthed = 1;

 FUNC_4(VAR_3->Listener, VAR_4);



 FUNC_6(VAR_8, sizeof(VAR_8), VAR_6);
 FUNC_7(VAR_9, sizeof(VAR_9));
 VAR_10 = FUNC_5(VAR_8, "?", 0);
 if (VAR_10 != VAR_0)
 {
  FUNC_6(VAR_9, sizeof(VAR_9), VAR_8 + VAR_10 + 1);
  VAR_8[VAR_10] = 0;
 }

 FUNC_0(VAR_7, VAR_3, VAR_4, VAR_5, VAR_8, VAR_9, "/admin", "|wwwroot/admin");

 FUNC_2(VAR_7);
}
