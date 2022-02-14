
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int secure_password ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_7__ {int Random; int * FirstSock; } ;
struct TYPE_6__ {TYPE_3__* Connection; } ;
typedef int SOCK ;
typedef TYPE_1__ SESSION ;
typedef int RPC_WINVER ;
typedef int PACK ;
typedef int CLIENT_OPTION ;
typedef int CEDAR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 () ;
 TYPE_1__* FUNC_6 (int *,int *,scalar_t__*,char*,void*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,TYPE_3__*) ;
 int FUNC_10 (int *,char*,int *,int) ;
 int FUNC_11 (int *,char*,char*) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_14 (int *,void*,int ) ;

SESSION *FUNC_15(CEDAR *VAR_2, CLIENT_OPTION *VAR_3, char *VAR_4, void *VAR_5, UINT *VAR_6, char *VAR_7, void *VAR_8, bool *VAR_9)
{
 UCHAR VAR_10[VAR_1];
 SESSION *VAR_11;
 SOCK *VAR_12;
 PACK *VAR_13;
 RPC_WINVER VAR_14;

 VAR_11 = FUNC_6(VAR_2, VAR_3, VAR_6, VAR_7, VAR_8);
 if (VAR_11 == ((void*)0))
 {
  return ((void*)0);
 }


 VAR_12 = VAR_11->Connection->FirstSock;


 VAR_13 = FUNC_5();

 FUNC_9(VAR_13, VAR_11->Connection);

 FUNC_11(VAR_13, "method", "admin");
 FUNC_8(VAR_13, "accept_empty_password", 1);


 FUNC_2(&VAR_14);
 FUNC_7(VAR_13, &VAR_14);


 FUNC_14(VAR_10, VAR_5, VAR_11->Connection->Random);

 FUNC_10(VAR_13, "secure_password", VAR_10, sizeof(VAR_10));


 if (VAR_4 != ((void*)0))
 {
  FUNC_11(VAR_13, "hubname", VAR_4);
 }

 if (FUNC_4(VAR_12, VAR_13) == 0)
 {

  FUNC_0(VAR_13);
  FUNC_13(VAR_11);
  *VAR_6 = VAR_0;
  return ((void*)0);
 }

 FUNC_0(VAR_13);

 VAR_13 = FUNC_3(VAR_12);
 if (VAR_13 == ((void*)0))
 {

  FUNC_13(VAR_11);
  *VAR_6 = VAR_0;
  return ((void*)0);
 }

 if (FUNC_1(VAR_13) != 0)
 {

  FUNC_13(VAR_11);
  *VAR_6 = FUNC_1(VAR_13);
  FUNC_0(VAR_13);
  return ((void*)0);
 }

 if (VAR_9 != ((void*)0))
 {
  *VAR_9 = FUNC_12(VAR_13, "empty_password");
 }

 FUNC_0(VAR_13);

 return VAR_11;
}
