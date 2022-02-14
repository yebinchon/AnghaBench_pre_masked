
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fc; } ;
struct efx_nic {TYPE_2__* net_dev; int promiscuous; TYPE_1__ link_state; } ;
typedef int efx_oword_t ;
struct TYPE_4__ {int * dev_addr; int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int ,int ,int,int ,int) ;
 int FUNC_3 (int ,int ,int,int ,int,int ,int) ;
 int FUNC_4 (int ,int ,int,int ,int ,int ,int,int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,int,int ,int,int ,int,int ,int,int ,int,int ,int) ;
 int VAR_2 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_6 (struct efx_nic*,int *,int ) ;
 int FUNC_7 (int *,int *,int) ;

__attribute__((used)) static void FUNC_8(struct efx_nic *VAR_29)
{
 unsigned int VAR_30;
 efx_oword_t VAR_31;
 bool VAR_32 = !!(VAR_29->link_state.fc & VAR_0);
 bool VAR_33 = !!(VAR_29->link_state.fc & VAR_1);


 FUNC_3(VAR_31,
        VAR_14, 1,
        VAR_20, 1,
        VAR_15, 1);
 FUNC_6(VAR_29, &VAR_31, VAR_24);


 FUNC_5(VAR_31,
        VAR_17, 1,
        VAR_19, 1,
        VAR_5, 1,
        VAR_16, 1,
        VAR_7, VAR_33,
        VAR_8, 0x3);
 FUNC_6(VAR_29, &VAR_31, VAR_27);


 FUNC_4(VAR_31,
        VAR_13, 1,
        VAR_4, 0,
        VAR_2, 1,
        VAR_3, VAR_29->promiscuous,
        VAR_11, 1);
 FUNC_6(VAR_29, &VAR_31, VAR_25);


 VAR_30 = FUNC_0(VAR_29->net_dev->mtu);
 FUNC_1(VAR_31, VAR_9, VAR_30);
 FUNC_6(VAR_29, &VAR_31, VAR_26);
 FUNC_2(VAR_31,
        VAR_10, VAR_30,
        VAR_18, 1);
 FUNC_6(VAR_29, &VAR_31, VAR_28);

 FUNC_2(VAR_31,
        VAR_12, 0xfffe,
        VAR_6, !VAR_32);
 FUNC_6(VAR_29, &VAR_31, VAR_23);


 FUNC_7(&VAR_31, &VAR_29->net_dev->dev_addr[0], 4);
 FUNC_6(VAR_29, &VAR_31, VAR_22);
 FUNC_7(&VAR_31, &VAR_29->net_dev->dev_addr[4], 2);
 FUNC_6(VAR_29, &VAR_31, VAR_21);
}
