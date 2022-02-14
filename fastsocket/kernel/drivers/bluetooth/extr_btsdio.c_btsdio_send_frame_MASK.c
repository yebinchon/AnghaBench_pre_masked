
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ dev; } ;
struct TYPE_3__ {int sco_tx; int acl_tx; int cmd_tx; } ;
struct hci_dev {TYPE_1__ stat; int flags; int name; struct btsdio_data* driver_data; } ;
struct btsdio_data {int work; int txq; } ;
struct TYPE_4__ {int pkt_type; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;

 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3)
{
 struct hci_dev *VAR_4 = (struct hci_dev *) VAR_3->dev;
 struct btsdio_data *VAR_5 = VAR_4->driver_data;

 FUNC_0("%s", VAR_4->name);

 if (!FUNC_4(VAR_2, &VAR_4->flags))
  return -VAR_0;

 switch (FUNC_1(VAR_3)->pkt_type) {
 case 129:
  VAR_4->stat.cmd_tx++;
  break;

 case 130:
  VAR_4->stat.acl_tx++;
  break;

 case 128:
  VAR_4->stat.sco_tx++;
  break;

 default:
  return -VAR_1;
 }

 FUNC_3(&VAR_5->txq, VAR_3);

 FUNC_2(&VAR_5->work);

 return 0;
}
