
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int name ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int SubnetMask; scalar_t__ Masked; int IpAddress; int Priority; int Deny; } ;
typedef int LIST ;
typedef int FOLDER ;
typedef TYPE_1__ AC ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int *) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (char*,int,char*,scalar_t__) ;
 TYPE_1__* FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int FUNC_8 (int *) ;

void FUNC_9(FOLDER *VAR_1, LIST *VAR_2)
{

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_7(VAR_2);
 {
  UINT VAR_3;
  for (VAR_3 = 0;VAR_3 < FUNC_6(VAR_2);VAR_3++)
  {
   char VAR_4[VAR_0];
   AC *VAR_5 = FUNC_5(VAR_2, VAR_3);
   FOLDER *VAR_6;

   FUNC_4(VAR_4, sizeof(VAR_4), "Acl%u", VAR_3 + 1);

   VAR_6 = FUNC_3(VAR_1, VAR_4);

   FUNC_0(VAR_6, "Deny", VAR_5->Deny);
   FUNC_1(VAR_6, "Priority", VAR_5->Priority);
   FUNC_2(VAR_6, "IpAddress", &VAR_5->IpAddress);

   if (VAR_5->Masked)
   {
    FUNC_2(VAR_6, "NetMask", &VAR_5->SubnetMask);
   }
  }
 }
 FUNC_8(VAR_2);
}
