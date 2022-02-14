
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int seq_print; } ;
struct TYPE_3__ {int layer2; } ;
struct qeth_card {struct qeth_card* ip_tbd_list; int read; TYPE_2__ qeth_service_level; TYPE_1__ options; int write; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,struct qeth_card**,int) ;
 int FUNC_1 (int ,int,char*) ;
 int VAR_2 ;
 int FUNC_2 (struct qeth_card*) ;
 void* FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static struct qeth_card *FUNC_7(void)
{
 struct qeth_card *VAR_4;

 FUNC_1(VAR_2, 2, "alloccrd");
 VAR_4 = FUNC_3(sizeof(struct qeth_card), VAR_0|VAR_1);
 if (!VAR_4)
  goto out;
 FUNC_0(VAR_2, 2, &VAR_4, sizeof(void *));
 VAR_4->ip_tbd_list = FUNC_3(sizeof(struct list_head), VAR_1);
 if (!VAR_4->ip_tbd_list) {
  FUNC_1(VAR_2, 0, "iptbdnom");
  goto out_card;
 }
 if (FUNC_5(&VAR_4->read))
  goto out_ip;
 if (FUNC_5(&VAR_4->write))
  goto out_channel;
 VAR_4->options.layer2 = -1;
 VAR_4->qeth_service_level.seq_print = VAR_3;
 FUNC_6(&VAR_4->qeth_service_level);
 return VAR_4;

out_channel:
 FUNC_4(&VAR_4->read);
out_ip:
 FUNC_2(VAR_4->ip_tbd_list);
out_card:
 FUNC_2(VAR_4);
out:
 return ((void*)0);
}
