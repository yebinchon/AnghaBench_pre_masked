
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int title ;
typedef int name ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {scalar_t__ Value; scalar_t__ Name; } ;
struct TYPE_8__ {int CapsList; } ;
struct TYPE_7__ {int Rpc; } ;
typedef TYPE_1__ PS ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;
typedef TYPE_2__ CAPSLIST ;
typedef TYPE_3__ CAPS ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*,int,char*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int ,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_1 ;
 int * FUNC_8 (int *,char*,int *,int *,int ) ;
 TYPE_2__* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__,char*) ;
 scalar_t__ FUNC_11 (scalar_t__,char*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *,int,char*,scalar_t__) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,int,int *) ;
 int FUNC_16 (int *,scalar_t__) ;
 int * FUNC_17 (char*) ;

UINT FUNC_18(CONSOLE *VAR_2, char *VAR_3, wchar_t *VAR_4, void *VAR_5)
{
 LIST *VAR_6;
 PS *VAR_7 = (PS *)VAR_5;
 CAPSLIST *VAR_8;
 UINT VAR_9;
 CT *VAR_10;


 VAR_6 = FUNC_8(VAR_2, VAR_3, VAR_4, ((void*)0), 0);
 if (VAR_6 == ((void*)0))
 {
  return VAR_0;
 }


 VAR_8 = FUNC_9(VAR_7->Rpc);

 VAR_10 = FUNC_2();

 for (VAR_9 = 0;VAR_9 < FUNC_7(VAR_8->CapsList);VAR_9++)
 {
  CAPS *VAR_11 = FUNC_6(VAR_8->CapsList, VAR_9);
  wchar_t VAR_12[VAR_1];
  char VAR_13[256];

  FUNC_3(VAR_13, sizeof(VAR_13), "CT_%s", VAR_11->Name);

  FUNC_15(VAR_12, sizeof(VAR_12), FUNC_17(VAR_13));

  if (FUNC_14(VAR_12))
  {
   FUNC_13(VAR_12, sizeof(VAR_12), L"%S", (FUNC_12(VAR_11->Name) >= 2) ? VAR_11->Name + 2 : VAR_11->Name);
  }

  if (FUNC_10(VAR_11->Name, "b_"))
  {
   bool VAR_14 = VAR_11->Value == 0 ? 0 : 1;
   if (FUNC_11(VAR_11->Name, "b_must_install_pcap") == 0)
   {

    VAR_14 = !VAR_14;
   }
   FUNC_1(VAR_10, VAR_12, VAR_11->Value == 0 ? FUNC_17("CAPS_NO") : FUNC_17("CAPS_YES"));
  }
  else
  {
   wchar_t VAR_15[64];
   FUNC_16(VAR_15, VAR_11->Value);
   FUNC_1(VAR_10, VAR_12, VAR_15);
  }
 }

 FUNC_0(VAR_10, VAR_2);

 FUNC_4(VAR_8);

 FUNC_5(VAR_6);

 return 0;
}
