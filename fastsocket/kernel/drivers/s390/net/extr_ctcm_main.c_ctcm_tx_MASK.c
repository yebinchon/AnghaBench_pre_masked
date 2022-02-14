
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int trans_start; int name; struct ctcm_priv* ml_priv; } ;
struct TYPE_2__ {int tx_carrier_errors; int tx_errors; int tx_dropped; } ;
struct ctcm_priv {int * channel; TYPE_1__ stats; int fsm; } ;


 int FUNC_0 (int ,int ,char*,int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,struct net_device*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_10, struct net_device *VAR_11)
{
 struct ctcm_priv *VAR_12 = VAR_11->ml_priv;

 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_4, VAR_1,
    "%s(%s): NULL sk_buff passed",
     VAR_0, VAR_11->name);
  VAR_12->stats.tx_dropped++;
  return VAR_7;
 }
 if (FUNC_6(VAR_10) < (VAR_5 + 2)) {
  FUNC_0(VAR_4, VAR_1,
   "%s(%s): Got sk_buff with head room < %ld bytes",
   VAR_0, VAR_11->name, VAR_5 + 2);
  FUNC_3(VAR_10);
  VAR_12->stats.tx_dropped++;
  return VAR_7;
 }





 if (FUNC_5(VAR_12->fsm) != VAR_3) {
  FUNC_4(VAR_12->fsm, VAR_2, VAR_11);
  FUNC_3(VAR_10);
  VAR_12->stats.tx_dropped++;
  VAR_12->stats.tx_errors++;
  VAR_12->stats.tx_carrier_errors++;
  return VAR_7;
 }

 if (FUNC_1(VAR_11))
  return VAR_6;

 VAR_11->trans_start = VAR_9;
 if (FUNC_2(VAR_12->channel[VAR_8], VAR_10) != 0)
  return VAR_6;
 return VAR_7;
}
