
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int mark_str2 ;
typedef int ip_str2 ;
typedef int ip_str1 ;
typedef scalar_t__ UINT ;
struct TYPE_7__ {int ConditionAndArgs; int Chain; } ;
struct TYPE_6__ {int EntryList; } ;
typedef TYPE_1__ IPTABLES_STATE ;
typedef TYPE_2__ IPTABLES_ENTRY ;
typedef int IP ;


 int FUNC_0 (char*,int,char*,scalar_t__) ;
 int FUNC_1 (char*,int,int *) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 TYPE_2__* FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,scalar_t__) ;

IPTABLES_ENTRY *FUNC_7(IPTABLES_STATE *VAR_0, char *VAR_1, IP *VAR_2, IP *VAR_3, UINT VAR_4)
{
 char VAR_5[64];
 char VAR_6[64];
 char VAR_7[64];
 char VAR_8[64];
 UINT VAR_9;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == 0)
 {
  return ((void*)0);
 }

 FUNC_1(VAR_5, sizeof(VAR_5), VAR_2);
 FUNC_1(VAR_6, sizeof(VAR_6), VAR_3);
 FUNC_6(VAR_7, VAR_4);
 FUNC_0(VAR_8, sizeof(VAR_8), "%x", VAR_4);

 for (VAR_9 = 0;VAR_9 < FUNC_4(VAR_0->EntryList);VAR_9++)
 {
  IPTABLES_ENTRY *VAR_10 = FUNC_3(VAR_0->EntryList, VAR_9);

  if (FUNC_5(VAR_10->Chain, VAR_1) == 0)
  {
   if (FUNC_2(VAR_10->ConditionAndArgs, VAR_5) &&
    FUNC_2(VAR_10->ConditionAndArgs, VAR_6) &&
    (FUNC_2(VAR_10->ConditionAndArgs, VAR_7) || FUNC_2(VAR_10->ConditionAndArgs, VAR_8)))
   {
    return VAR_10;
   }
  }
 }

 return ((void*)0);
}
