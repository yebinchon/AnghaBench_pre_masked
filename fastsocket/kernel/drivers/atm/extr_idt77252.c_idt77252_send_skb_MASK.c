
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vc_map {int flags; } ;
struct sk_buff {int dummy; } ;
struct idt77252_dev {int name; } ;
struct TYPE_5__ {int aal; } ;
struct atm_vcc {TYPE_2__* stats; TYPE_1__ qos; struct vc_map* dev_data; struct atm_dev* dev; } ;
struct atm_dev {struct idt77252_dev* dev_data; } ;
struct TYPE_8__ {struct atm_vcc* vcc; } ;
struct TYPE_7__ {scalar_t__ nr_frags; } ;
struct TYPE_6__ {int tx_err; } ;





 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (struct idt77252_dev*,struct vc_map*,struct sk_buff*,int) ;
 TYPE_3__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static inline int
FUNC_7(struct atm_vcc *VAR_2, struct sk_buff *VAR_3, int VAR_4)
{
 struct atm_dev *VAR_5 = VAR_2->dev;
 struct idt77252_dev *VAR_6 = VAR_5->dev_data;
 struct vc_map *VAR_7 = VAR_2->dev_data;
 int VAR_8;

 if (VAR_7 == ((void*)0)) {
  FUNC_3("%s: NULL connection in send().\n", VAR_6->name);
  FUNC_1(&VAR_2->stats->tx_err);
  FUNC_2(VAR_3);
  return -VAR_0;
 }
 if (!FUNC_6(VAR_1, &VAR_7->flags)) {
  FUNC_3("%s: Trying to transmit on a non-tx VC.\n", VAR_6->name);
  FUNC_1(&VAR_2->stats->tx_err);
  FUNC_2(VAR_3);
  return -VAR_0;
 }

 switch (VAR_2->qos.aal) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_3("%s: Unsupported AAL: %d\n", VAR_6->name, VAR_2->qos.aal);
  FUNC_1(&VAR_2->stats->tx_err);
  FUNC_2(VAR_3);
  return -VAR_0;
 }

 if (FUNC_5(VAR_3)->nr_frags != 0) {
  FUNC_3("%s: No scatter-gather yet.\n", VAR_6->name);
  FUNC_1(&VAR_2->stats->tx_err);
  FUNC_2(VAR_3);
  return -VAR_0;
 }
 FUNC_0(VAR_3)->vcc = VAR_2;

 VAR_8 = FUNC_4(VAR_6, VAR_7, VAR_3, VAR_4);
 if (VAR_8) {
  FUNC_1(&VAR_2->stats->tx_err);
  FUNC_2(VAR_3);
  return VAR_8;
 }

 return 0;
}
