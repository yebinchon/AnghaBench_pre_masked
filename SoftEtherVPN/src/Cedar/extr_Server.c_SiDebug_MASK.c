
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
typedef int proc_list ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int StrValue; } ;
struct TYPE_5__ {int member_0; char* member_1; char* member_2; scalar_t__ Id; scalar_t__ (* Proc ) (int *,char*,int ,int) ;int Description; int Args; int member_3; } ;
typedef TYPE_1__ SI_DEBUG_PROC_LIST ;
typedef int SERVER ;
typedef TYPE_2__ RPC_TEST ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int,char*,scalar_t__,int ,scalar_t__,...) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ,int,char*) ;
 int FUNC_3 (int ,int,char*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (int *,char*,int ,int) ;

UINT FUNC_6(SERVER *VAR_17, RPC_TEST *VAR_18, UINT VAR_19, char *VAR_20)
{
 SI_DEBUG_PROC_LIST VAR_21[] =
 {
  {1, "Hello World", "<test string>", VAR_12},
  {2, "Terminate process now", "", VAR_6},
  {3, "Write memory dumpfile", "", VAR_5},
  {4, "Restore process priority", "", VAR_13},
  {5, "Set the process priority high", "", VAR_14},
  {6, "Get the .exe filename of the process", "", VAR_9},
  {7, "Crash the process", "", VAR_4},
  {8, "Get IPsecMessageDisplayed Flag", "", VAR_10},
  {9, "Set IPsecMessageDisplayed Flag", "", VAR_15},
  {10, "Get VgsMessageDisplayed Flag", "", VAR_11},
  {11, "Set VgsMessageDisplayed Flag", "", VAR_16},
  {12, "Get the current TCP send queue length", "", VAR_8},
  {13, "Get the current GetIP thread count", "", VAR_7},
 };
 UINT VAR_22 = sizeof(VAR_21) / sizeof(VAR_21[0]);
 UINT VAR_23;
 UINT VAR_24 = VAR_2;

 if (VAR_17 == ((void*)0) || VAR_18 == ((void*)0))
 {
  return VAR_0;
 }

 if (VAR_19 == 0)
 {
  char VAR_25[VAR_3];
  FUNC_4(VAR_18, sizeof(RPC_TEST));

  FUNC_2(VAR_18->StrValue, sizeof(VAR_18->StrValue),
   "\n--- Debug Functions List --\n");

  for (VAR_23 = 0;VAR_23 < VAR_22;VAR_23++)
  {
   SI_DEBUG_PROC_LIST *VAR_26 = &VAR_21[VAR_23];

   if (FUNC_1(VAR_26->Args) == 0)
   {
    FUNC_0(VAR_25, sizeof(VAR_25),
     " %u: %s - Usage: %u /ARG:\"%s\"\n",
     VAR_26->Id, VAR_26->Description, VAR_26->Id, VAR_26->Args);
   }
   else
   {
    FUNC_0(VAR_25, sizeof(VAR_25),
     " %u: %s - Usage: %u\n",
     VAR_26->Id, VAR_26->Description, VAR_26->Id);
   }

   FUNC_2(VAR_18->StrValue, sizeof(VAR_18->StrValue), VAR_25);
  }
 }
 else
 {
  VAR_24 = VAR_1;

  for (VAR_23 = 0;VAR_23 < VAR_22;VAR_23++)
  {
   SI_DEBUG_PROC_LIST *VAR_27 = &VAR_21[VAR_23];

   if (VAR_27->Id == VAR_19)
   {
    VAR_24 = VAR_27->Proc(VAR_17, VAR_20, VAR_18->StrValue, sizeof(VAR_18->StrValue));

    if (VAR_24 == VAR_2 && FUNC_1(VAR_18->StrValue))
    {
     FUNC_3(VAR_18->StrValue, sizeof(VAR_18->StrValue), "Ok.");
    }
    break;
   }
  }
 }

 return VAR_24;
}
