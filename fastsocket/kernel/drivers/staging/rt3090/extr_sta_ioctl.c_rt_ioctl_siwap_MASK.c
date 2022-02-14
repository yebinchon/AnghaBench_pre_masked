
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
typedef int VOID ;
struct TYPE_11__ {int AutoReconnectSsidLen; int CurrReqIsFromNdis; } ;
struct TYPE_9__ {scalar_t__ CurrState; } ;
struct TYPE_10__ {TYPE_1__ CntlMachine; } ;
struct TYPE_12__ {TYPE_3__ MlmeAux; TYPE_2__ Mlme; } ;
typedef TYPE_4__* PRTMP_ADAPTER ;
typedef int * NDIS_802_11_MAC_ADDRESS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,int ,int ,int,int *) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;

int FUNC_7(struct net_device *VAR_8,
        struct iw_request_info *VAR_9,
        struct sockaddr *VAR_10, char *VAR_11)
{
 PRTMP_ADAPTER VAR_12 = FUNC_3(VAR_8);
    NDIS_802_11_MAC_ADDRESS VAR_13;


 if(!FUNC_4(VAR_12, VAR_7))
 {
 FUNC_0(VAR_6, ("INFO::Network is down!\n"));
 return -VAR_1;
    }

 if (VAR_12->Mlme.CntlMachine.CurrState != VAR_0)
    {
        FUNC_2(VAR_12);
        FUNC_0(VAR_6, ("!!! MLME busy, reset MLME state machine !!!\n"));
    }



    VAR_12->MlmeAux.CurrReqIsFromNdis = VAR_2;

 VAR_12->MlmeAux.AutoReconnectSsidLen= 32;

    FUNC_6(VAR_13, 0, VAR_3);
    FUNC_5(VAR_13, VAR_10->sa_data, VAR_3);
    FUNC_1(VAR_12,
                VAR_4,
                VAR_5,
                sizeof(NDIS_802_11_MAC_ADDRESS),
                (VOID *)&VAR_13);

    FUNC_0(VAR_6, ("IOCTL::SIOCSIWAP %02x:%02x:%02x:%02x:%02x:%02x\n",
        VAR_13[0], VAR_13[1], VAR_13[2], VAR_13[3], VAR_13[4], VAR_13[5]));

 return 0;
}
