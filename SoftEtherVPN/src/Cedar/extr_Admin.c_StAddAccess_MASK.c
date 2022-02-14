
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


typedef int UINT ;
struct TYPE_21__ {int ServerAdmin; TYPE_1__* Server; } ;
struct TYPE_20__ {int CurrentVersion; int AccessList; } ;
struct TYPE_17__ {int DestUsername; int SrcUsername; scalar_t__ Loss; scalar_t__ Delay; scalar_t__ Jitter; } ;
struct TYPE_19__ {TYPE_14__ Access; int HubName; } ;
struct TYPE_18__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_ADD_ACCESS ;
typedef TYPE_3__ HUB ;
typedef int CEDAR ;
typedef TYPE_4__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,TYPE_14__*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int VAR_8 ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int *) ;

UINT FUNC_13(ADMIN *VAR_10, RPC_ADD_ACCESS *VAR_11)
{
 SERVER *VAR_12 = VAR_10->Server;
 CEDAR *VAR_13 = VAR_12->Cedar;
 HUB *VAR_14;
 bool VAR_15 = 0;
 bool VAR_16 = 0;


 VAR_8;
 if (VAR_12->ServerType == VAR_9)
 {
  return VAR_5;
 }

 VAR_2;

 FUNC_8(VAR_13);
 {
  VAR_14 = FUNC_3(VAR_13, VAR_11->HubName);
 }
 FUNC_12(VAR_13);

 if (VAR_14 == ((void*)0))
 {
  return VAR_3;
 }

 VAR_15 = FUNC_4(VAR_14, "no_delay_jitter_packet_loss");
 VAR_16 = FUNC_4(VAR_14, "no_access_list_include_file");

 if (VAR_10->ServerAdmin == 0 && FUNC_4(VAR_14, "no_change_access_list") != 0)
 {
  FUNC_9(VAR_14);
  return VAR_4;
 }

 if ((FUNC_7(VAR_14->AccessList) >= FUNC_5(VAR_10->Server, "i_max_access_lists") ||
  (FUNC_4(VAR_14, "max_accesslists") != 0) && (FUNC_7(VAR_14->AccessList) >= FUNC_4(VAR_14, "max_accesslists"))))
 {
  FUNC_9(VAR_14);
  return VAR_7;
 }

 FUNC_0(VAR_10, VAR_14, "LA_ADD_ACCESS");

 if (VAR_15)
 {
  VAR_11->Access.Jitter = VAR_11->Access.Delay = VAR_11->Access.Loss = 0;
 }

 if (VAR_16)
 {
  if (FUNC_11(VAR_11->Access.SrcUsername, VAR_1) ||
   FUNC_11(VAR_11->Access.SrcUsername, VAR_0))
  {
   FUNC_2(VAR_11->Access.SrcUsername, sizeof(VAR_11->Access.SrcUsername));
  }

  if (FUNC_11(VAR_11->Access.DestUsername, VAR_1) ||
   FUNC_11(VAR_11->Access.DestUsername, VAR_0))
  {
   FUNC_2(VAR_11->Access.DestUsername, sizeof(VAR_11->Access.DestUsername));
  }
 }

 FUNC_1(VAR_14, &VAR_11->Access);

 VAR_14->CurrentVersion++;
 FUNC_10(VAR_14);

 FUNC_9(VAR_14);

 FUNC_6(VAR_12);

 return VAR_6;
}
