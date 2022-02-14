
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int url ;
typedef int query_string ;
typedef scalar_t__ UINT ;
struct TYPE_20__ {scalar_t__ MaxJsonRpcRecvSize; } ;
typedef TYPE_1__ UCHAR ;
struct TYPE_22__ {int JsonRpcAuthed; int Listener; int Cedar; } ;
struct TYPE_21__ {int SecureMode; } ;
typedef TYPE_2__ SOCK ;
typedef int HTTP_HEADER ;
typedef TYPE_3__ CONNECTION ;
typedef TYPE_1__ ADMIN ;


 int FUNC_0 (TYPE_1__*,TYPE_3__*,TYPE_2__*,int *,char*,char*,char*,char*) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_4 (int ,TYPE_2__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_1__*,scalar_t__,int ) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (char*,int,char*) ;
 int FUNC_10 (char*,int) ;
 TYPE_1__* FUNC_11 (scalar_t__) ;

void FUNC_12(CONNECTION *VAR_3, SOCK *VAR_4, HTTP_HEADER *VAR_5, UINT VAR_6, char *VAR_7)
{
 ADMIN *VAR_8;
 UCHAR *VAR_9;
 char VAR_10[VAR_1];
 char VAR_11[VAR_2];
 UINT VAR_12;
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_7 == ((void*)0))
 {
  return;
 }

 VAR_8 = FUNC_4(VAR_3->Cedar, VAR_4, VAR_5);
 if (VAR_8 == ((void*)0))
 {
  FUNC_6(VAR_4, VAR_6, VAR_4->SecureMode);
  FUNC_1(VAR_4, VAR_5);
  return;
 }

 if (VAR_6 > VAR_8->MaxJsonRpcRecvSize)
 {
  FUNC_2(VAR_4);
  return;
 }

 VAR_9 = FUNC_11(VAR_6 + 1);

 if (FUNC_5(VAR_4, VAR_9, VAR_6, VAR_4->SecureMode))
 {
  VAR_3->JsonRpcAuthed = 1;

  FUNC_7(VAR_3->Listener, VAR_4);



  FUNC_9(VAR_10, sizeof(VAR_10), VAR_7);
  FUNC_10(VAR_11, sizeof(VAR_11));
  VAR_12 = FUNC_8(VAR_10, "?", 0);
  if (VAR_12 != VAR_0)
  {
   FUNC_9(VAR_11, sizeof(VAR_11), VAR_10 + VAR_12 + 1);
   VAR_10[VAR_12] = 0;
  }

  FUNC_0(VAR_8, VAR_3, VAR_4, VAR_5, VAR_10, VAR_11, "/admin", "|wwwroot/admin");
 }

 FUNC_3(VAR_9);
 FUNC_3(VAR_8);
}
