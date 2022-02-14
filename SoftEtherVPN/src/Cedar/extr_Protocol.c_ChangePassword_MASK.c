
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_6__ {int Random; int * FirstSock; } ;
struct TYPE_5__ {TYPE_3__* Connection; } ;
typedef int SOCK ;
typedef TYPE_1__ SESSION ;
typedef int PACK ;
typedef int CLIENT_OPTION ;
typedef int CEDAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,char*) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int VAR_3 ;
 int * FUNC_6 () ;
 TYPE_1__* FUNC_7 (int *,int *,int *,int *) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (int *,char*,int *,int) ;
 int FUNC_10 (int *,char*,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_12 (int *,int *,int ) ;

UINT FUNC_13(CEDAR *VAR_5, CLIENT_OPTION *VAR_6, char *VAR_7, char *VAR_8, char *VAR_9, char *VAR_10)
{
 UINT VAR_11 = VAR_2;
 UCHAR VAR_12[VAR_4];
 UCHAR VAR_13[VAR_4];
 UCHAR VAR_14[VAR_4];
 UCHAR VAR_15[VAR_3];
 SOCK *VAR_16;
 SESSION *VAR_17;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
 {
  return VAR_1;
 }



 VAR_17 = FUNC_7(VAR_5, VAR_6, &VAR_11, ((void*)0));

 if (VAR_17 != ((void*)0))
 {
  PACK *VAR_18 = FUNC_6();

  VAR_16 = VAR_17->Connection->FirstSock;

  FUNC_3(VAR_12, VAR_8, VAR_9);
  FUNC_12(VAR_13, VAR_12, VAR_17->Connection->Random);
  FUNC_3(VAR_14, VAR_8, VAR_10);
  FUNC_1(VAR_15, VAR_10);

  FUNC_8(VAR_18, VAR_17->Connection);

  FUNC_10(VAR_18, "method", "password");
  FUNC_10(VAR_18, "hubname", VAR_7);
  FUNC_10(VAR_18, "username", VAR_8);
  FUNC_9(VAR_18, "secure_old_password", VAR_13, VAR_4);
  FUNC_9(VAR_18, "new_password", VAR_14, VAR_4);
  FUNC_9(VAR_18, "new_password_ntlm", VAR_15, VAR_3);

  if (FUNC_5(VAR_16, VAR_18))
  {
   PACK *VAR_19 = FUNC_4(VAR_16);
   if (VAR_19 == ((void*)0))
   {
    VAR_11 = VAR_0;
   }
   else
   {
    VAR_11 = FUNC_2(VAR_19);
   }
   FUNC_0(VAR_19);
  }
  else
  {
   VAR_11 = VAR_0;
  }
  FUNC_0(VAR_18);

  FUNC_11(VAR_17);
 }

 return VAR_11;
}
