
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int param_list ;
typedef int opcode ;
typedef int client_id ;
typedef scalar_t__ UCHAR ;
struct TYPE_6__ {scalar_t__ Opcode; scalar_t__ ServerAddress; scalar_t__ RequestedIp; scalar_t__* Hostname; scalar_t__* UserClass; } ;
struct TYPE_5__ {int MacAddress; } ;
typedef int LIST ;
typedef TYPE_1__ IPC ;
typedef TYPE_2__ DHCP_OPTION_LIST ;
typedef int BUF ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int *) ;
 scalar_t__* VAR_12 ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__*,int) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__*) ;

BUF *FUNC_8(IPC *VAR_13, DHCP_OPTION_LIST *VAR_14)
{
 LIST *VAR_15;
 UCHAR VAR_16;
 BUF *VAR_17;

 if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_15 = FUNC_6(((void*)0));


 VAR_16 = VAR_14->Opcode;
 FUNC_0(VAR_15, FUNC_5(VAR_4, &VAR_16, sizeof(VAR_16)));


 if (VAR_14->ServerAddress != 0)
 {
  FUNC_0(VAR_15, FUNC_5(VAR_7, &VAR_14->ServerAddress, 4));
 }


 if (VAR_14->RequestedIp != 0)
 {
  FUNC_0(VAR_15, FUNC_5(VAR_5, &VAR_14->RequestedIp, 4));
 }


 if (FUNC_4(VAR_14->Hostname) == 0)
 {
  FUNC_0(VAR_15, FUNC_5(VAR_3, VAR_14->Hostname, FUNC_7(VAR_14->Hostname)));
  FUNC_0(VAR_15, FUNC_5(VAR_2, VAR_14->Hostname, FUNC_7(VAR_14->Hostname)));
 }
 else
 {
  UCHAR VAR_18[7];
  VAR_18[0] = VAR_0;
  FUNC_2(VAR_18 + 1, VAR_13->MacAddress, 6);
  FUNC_0(VAR_15, FUNC_5(VAR_2, VAR_18, sizeof(VAR_18)));
 }


 if (FUNC_4(VAR_14->UserClass) == 0)
 {
  FUNC_0(VAR_15, FUNC_5(VAR_8, VAR_14->UserClass, FUNC_7(VAR_14->UserClass)));
 }


 FUNC_0(VAR_15, FUNC_5(VAR_9, VAR_12, FUNC_7(VAR_12)));


 if (VAR_16 == VAR_1 || VAR_16 == VAR_11 || VAR_16 == VAR_10)
 {
  UCHAR VAR_19[12];

  VAR_19[0] = 1;
  VAR_19[1] = 15;
  VAR_19[2] = 3;
  VAR_19[3] = 6;
  VAR_19[4] = 44;
  VAR_19[5] = 46;
  VAR_19[6] = 47;
  VAR_19[7] = 31;
  VAR_19[8] = 33;
  VAR_19[9] = 121;
  VAR_19[10] = 249;
  VAR_19[11] = 43;

  FUNC_0(VAR_15, FUNC_5(VAR_6, VAR_19, sizeof(VAR_19)));
 }

 VAR_17 = FUNC_1(VAR_15);

 FUNC_3(VAR_15);

 return VAR_17;
}
