
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int rx_chain; } ;
struct TYPE_5__ {int valid_rx_ant; } ;
struct TYPE_4__ {int active_chains; } ;
struct il_priv {TYPE_3__ staging; TYPE_2__ hw_params; TYPE_1__ chain_noise_data; int status; } ;


 int FUNC_0 (char*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (struct il_priv*,int) ;
 int FUNC_6 (struct il_priv*) ;
 int FUNC_7 (int ,int *) ;

void
FUNC_8(struct il_priv *VAR_6)
{
 bool VAR_7 = FUNC_6(VAR_6);
 bool VAR_8 = !FUNC_7(VAR_5, &VAR_6->status);
 u8 VAR_9, VAR_10, VAR_11;
 u32 VAR_12;
 u16 VAR_13;





 if (VAR_6->chain_noise_data.active_chains)
  VAR_12 = VAR_6->chain_noise_data.active_chains;
 else
  VAR_12 = VAR_6->hw_params.valid_rx_ant;

 VAR_13 = VAR_12 << VAR_4;


 VAR_10 = FUNC_4(VAR_6);
 VAR_9 = FUNC_5(VAR_6, VAR_10);




 VAR_11 = FUNC_3(VAR_12);
 if (VAR_11 < VAR_10)
  VAR_10 = VAR_11;

 if (VAR_11 < VAR_9)
  VAR_9 = VAR_11;

 VAR_13 |= VAR_10 << VAR_2;
 VAR_13 |= VAR_9 << VAR_1;

 VAR_6->staging.rx_chain = FUNC_2(VAR_13);

 if (!VAR_7 && VAR_10 >= VAR_0 && VAR_8)
  VAR_6->staging.rx_chain |= VAR_3;
 else
  VAR_6->staging.rx_chain &= ~VAR_3;

 FUNC_0("rx_chain=0x%X active=%d idle=%d\n", VAR_6->staging.rx_chain,
  VAR_10, VAR_9);

 FUNC_1(VAR_10 == 0 || VAR_9 == 0 ||
  VAR_10 < VAR_9);
}
