
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cn_username ;
struct TYPE_6__ {TYPE_1__* subject_name; } ;
typedef TYPE_2__ X ;
struct TYPE_5__ {int CommonName; } ;
typedef int PACK ;
typedef int BUF ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (char*,int,int ) ;
 int * FUNC_8 (TYPE_2__*,int) ;

PACK *FUNC_9(char *VAR_1, char *VAR_2, X *VAR_3)
{
 PACK *VAR_4;
 char VAR_5[128];
 BUF *VAR_6 = ((void*)0);

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_3();
 FUNC_6(VAR_4, "method", "login");
 FUNC_6(VAR_4, "hubname", VAR_1);

 if (FUNC_2(VAR_2))
 {
  if (VAR_3->subject_name == ((void*)0))
  {
   FUNC_1(VAR_4);
   return ((void*)0);
  }
  FUNC_7(VAR_5, sizeof(VAR_5), VAR_3->subject_name->CommonName);
  FUNC_6(VAR_4, "username", VAR_5);
 }
 else
 {
  FUNC_6(VAR_4, "username", VAR_2);
 }

 FUNC_5(VAR_4, "authtype", VAR_0);

 VAR_6 = FUNC_8(VAR_3, 0);
 FUNC_4(VAR_4, "cert", VAR_6);
 FUNC_0(VAR_6);

 return VAR_4;
}
