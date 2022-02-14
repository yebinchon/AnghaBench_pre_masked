
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct atmtcp_hdr {scalar_t__ length; int vci; int vpi; } ;
struct atmtcp_control {int dummy; } ;
struct atm_vcc {int (* pop ) (struct atm_vcc*,struct sk_buff*) ;TYPE_1__* stats; int (* push ) (struct atm_vcc*,struct sk_buff*) ;struct atm_dev* dev_data; } ;
struct atm_dev {int dummy; } ;
struct TYPE_2__ {int rx; int tx; int tx_err; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct atm_vcc*,int ,int ) ;
 int FUNC_2 (struct atmtcp_control*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*) ;
 struct atm_vcc* FUNC_5 (struct atm_dev*,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sk_buff*,int ,int ) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int ) ;
 int FUNC_12 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_13 (struct atm_vcc*,struct sk_buff*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_14(struct atm_vcc *VAR_4,struct sk_buff *VAR_5)
{
 struct atm_dev *VAR_6;
 struct atmtcp_hdr *VAR_7;
 struct atm_vcc *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10 = 0;

 if (!VAR_5->len) return 0;
 VAR_6 = VAR_4->dev_data;
 VAR_7 = (struct atmtcp_hdr *) VAR_5->data;
 if (VAR_7->length == VAR_0) {
  VAR_10 = FUNC_2(
      (struct atmtcp_control *) VAR_5->data);
  goto done;
 }
 FUNC_7(&VAR_3);
 VAR_8 = FUNC_5(VAR_6, FUNC_6(VAR_7->vpi), FUNC_6(VAR_7->vci));
 FUNC_8(&VAR_3);
 if (!VAR_8) {
  FUNC_3(&VAR_4->stats->tx_err);
  goto done;
 }
 FUNC_10(VAR_5,sizeof(struct atmtcp_hdr));
 VAR_9 = FUNC_1(VAR_8,VAR_5->len,VAR_2);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto done;
 }
 FUNC_0(VAR_9);
 FUNC_9(VAR_5, FUNC_11(VAR_9, VAR_5->len), VAR_5->len);
 VAR_8->push(VAR_8,VAR_9);
 FUNC_3(&VAR_4->stats->tx);
 FUNC_3(&VAR_8->stats->rx);
done:
 if (VAR_4->pop) VAR_4->pop(VAR_4,VAR_5);
 else FUNC_4(VAR_5);
 return VAR_10;
}
