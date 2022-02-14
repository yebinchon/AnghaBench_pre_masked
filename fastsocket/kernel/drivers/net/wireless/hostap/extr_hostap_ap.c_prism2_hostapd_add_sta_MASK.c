
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sta_info {int flags; int tx_supp_rates; int* supported_rates; int users; int capability; int aid; int last_rx; TYPE_1__* local; int ap; } ;
struct TYPE_5__ {int tx_supp_rates; int capability; int aid; } ;
struct TYPE_6__ {TYPE_2__ add_sta; } ;
struct prism2_hostapd_param {TYPE_3__ u; int sta_addr; } ;
struct ap_data {int sta_table_lock; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sta_info* FUNC_0 (struct ap_data*,int ) ;
 struct sta_info* FUNC_1 (struct ap_data*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct sta_info*) ;
 int VAR_6 ;
 int FUNC_5 (struct sta_info*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ap_data *VAR_7,
      struct prism2_hostapd_param *VAR_8)
{
 struct sta_info *VAR_9;

 FUNC_6(&VAR_7->sta_table_lock);
 VAR_9 = FUNC_1(VAR_7, VAR_8->sta_addr);
 if (VAR_9)
  FUNC_3(&VAR_9->users);
 FUNC_7(&VAR_7->sta_table_lock);

 if (VAR_9 == ((void*)0)) {
  VAR_9 = FUNC_0(VAR_7, VAR_8->sta_addr);
  if (VAR_9 == ((void*)0))
   return -1;
 }

 if (!(VAR_9->flags & VAR_4) && !VAR_9->ap && VAR_9->local)
  FUNC_4(VAR_9->local->dev, VAR_9);

 VAR_9->flags |= VAR_5 | VAR_4;
 VAR_9->last_rx = VAR_6;
 VAR_9->aid = VAR_8->u.add_sta.aid;
 VAR_9->capability = VAR_8->u.add_sta.capability;
 VAR_9->tx_supp_rates = VAR_8->u.add_sta.tx_supp_rates;
 if (VAR_9->tx_supp_rates & VAR_1)
  VAR_9->supported_rates[0] = 2;
 if (VAR_9->tx_supp_rates & VAR_2)
  VAR_9->supported_rates[1] = 4;
  if (VAR_9->tx_supp_rates & VAR_3)
  VAR_9->supported_rates[2] = 11;
 if (VAR_9->tx_supp_rates & VAR_0)
  VAR_9->supported_rates[3] = 22;
 FUNC_5(VAR_9);
 FUNC_2(&VAR_9->users);
 return 0;
}
