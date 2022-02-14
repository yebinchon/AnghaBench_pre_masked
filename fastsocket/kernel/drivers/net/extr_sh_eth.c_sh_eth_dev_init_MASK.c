
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u32 ;
struct sh_eth_private {int rx_int_var; int tx_int_var; TYPE_1__* cd; scalar_t__ duplex; } ;
struct net_device {int base_addr; } ;
struct TYPE_2__ {int rpadir_value; int fdr_value; int rmcr_value; int fcftr_value; int eesipr_value; int ecsr_value; int ecsipr_value; scalar_t__ tpauser; scalar_t__ mpr; scalar_t__ apr; int (* set_rate ) (struct net_device*) ;int no_trimd; scalar_t__ bculr; scalar_t__ hw_swap; scalar_t__ rpadir; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 struct sh_eth_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_32)
{
 int VAR_33 = 0;
 struct sh_eth_private *VAR_34 = FUNC_2(VAR_32);
 u32 VAR_35 = VAR_32->base_addr;
 u_int32_t VAR_36, VAR_37;
 u32 VAR_38;


 FUNC_4(VAR_32);


 FUNC_5(VAR_32);
 if (VAR_34->cd->rpadir)
  FUNC_1(VAR_34->cd->rpadir_value, VAR_35 + VAR_26);


 FUNC_1(0, VAR_35 + VAR_17);


 if (VAR_34->cd->hw_swap)
  FUNC_1(VAR_14, VAR_35 + VAR_13);
 else

  FUNC_1(0, VAR_35 + VAR_13);


 FUNC_1(VAR_34->cd->fdr_value, VAR_35 + VAR_20);
 FUNC_1(0, VAR_35 + VAR_27);


 FUNC_1(VAR_34->cd->rmcr_value, VAR_35 + VAR_25);

 VAR_36 = VAR_34->rx_int_var = VAR_4 | VAR_3;
 VAR_37 = VAR_34->tx_int_var = VAR_5;
 FUNC_1(VAR_36 | VAR_37, VAR_35 + VAR_31);

 if (VAR_34->cd->bculr)
  FUNC_1(0x800, VAR_35 + VAR_2);

 FUNC_1(VAR_34->cd->fcftr_value, VAR_35 + VAR_19);

 if (!VAR_34->cd->no_trimd)
  FUNC_1(0, VAR_35 + VAR_30);


 FUNC_1(VAR_24, VAR_35 + VAR_23);

 FUNC_1(FUNC_0(VAR_35 + VAR_18), VAR_35 + VAR_18);
 FUNC_1(VAR_34->cd->eesipr_value, VAR_35 + VAR_17);


 VAR_38 = (FUNC_0(VAR_35 + VAR_6) & VAR_7) |
  VAR_10 | (VAR_34->duplex ? VAR_7 : 0) | VAR_9 | VAR_8;

 FUNC_1(VAR_38, VAR_35 + VAR_6);

 if (VAR_34->cd->set_rate)
  VAR_34->cd->set_rate(VAR_32);


 FUNC_1(VAR_34->cd->ecsr_value, VAR_35 + VAR_12);


 FUNC_1(VAR_34->cd->ecsipr_value, VAR_35 + VAR_11);


 FUNC_7(VAR_32);


 if (VAR_34->cd->apr)
  FUNC_1(VAR_1, VAR_35 + VAR_0);
 if (VAR_34->cd->mpr)
  FUNC_1(VAR_22, VAR_35 + VAR_21);
 if (VAR_34->cd->tpauser)
  FUNC_1(VAR_29, VAR_35 + VAR_28);


 FUNC_1(VAR_16, VAR_35 + VAR_15);

 FUNC_3(VAR_32);

 return VAR_33;
}
