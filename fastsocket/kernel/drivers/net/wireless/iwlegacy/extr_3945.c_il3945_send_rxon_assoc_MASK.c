
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_rxon_cmd {scalar_t__ flags; scalar_t__ filter_flags; scalar_t__ cck_basic_rates; scalar_t__ ofdm_basic_rates; } ;
struct TYPE_2__ {int flags; } ;
struct il_rx_pkt {TYPE_1__ hdr; } ;
struct il_priv {struct il_rxon_cmd staging; struct il_rxon_cmd active; } ;
struct il_host_cmd {int len; scalar_t__ reply_page; struct il3945_rxon_assoc_cmd* data; int flags; int id; } ;
struct il3945_rxon_assoc_cmd {scalar_t__ flags; scalar_t__ filter_flags; scalar_t__ ofdm_basic_rates; scalar_t__ cck_basic_rates; scalar_t__ reserved; } ;
typedef int rxon_assoc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct il_priv*,scalar_t__) ;
 int FUNC_3 (struct il_priv*,struct il_host_cmd*) ;

__attribute__((used)) static int
FUNC_4(struct il_priv *VAR_4)
{
 int VAR_5 = 0;
 struct il_rx_pkt *VAR_6;
 struct il3945_rxon_assoc_cmd VAR_7;
 struct il_host_cmd VAR_8 = {
  .id = VAR_1,
  .len = sizeof(VAR_7),
  .flags = VAR_0,
  .data = &VAR_7,
 };
 const struct il_rxon_cmd *VAR_9 = &VAR_4->staging;
 const struct il_rxon_cmd *VAR_10 = &VAR_4->active;

 if (VAR_9->flags == VAR_10->flags &&
     VAR_9->filter_flags == VAR_10->filter_flags &&
     VAR_9->cck_basic_rates == VAR_10->cck_basic_rates &&
     VAR_9->ofdm_basic_rates == VAR_10->ofdm_basic_rates) {
  FUNC_0("Using current RXON_ASSOC.  Not resending.\n");
  return 0;
 }

 VAR_7.flags = VAR_4->staging.flags;
 VAR_7.filter_flags = VAR_4->staging.filter_flags;
 VAR_7.ofdm_basic_rates = VAR_4->staging.ofdm_basic_rates;
 VAR_7.cck_basic_rates = VAR_4->staging.cck_basic_rates;
 VAR_7.reserved = 0;

 VAR_5 = FUNC_3(VAR_4, &VAR_8);
 if (VAR_5)
  return VAR_5;

 VAR_6 = (struct il_rx_pkt *)VAR_8.reply_page;
 if (VAR_6->hdr.flags & VAR_3) {
  FUNC_1("Bad return from C_RXON_ASSOC command\n");
  VAR_5 = -VAR_2;
 }

 FUNC_2(VAR_4, VAR_8.reply_page);

 return VAR_5;
}
