
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qeth_ipacmd_setadpparms {int dummy; } ;
struct TYPE_6__ {int addr; int addr_size; int cmd; } ;
struct TYPE_7__ {TYPE_1__ change_addr; } ;
struct TYPE_8__ {TYPE_2__ data; } ;
struct TYPE_9__ {TYPE_3__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_4__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {TYPE_5__* dev; } ;
struct TYPE_10__ {int dev_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int ) ;
 struct qeth_cmd_buffer* FUNC_2 (struct qeth_card*,int ,int) ;
 int FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_5 ;

int FUNC_4(struct qeth_card *VAR_6)
{
 int VAR_7;
 struct qeth_cmd_buffer *VAR_8;
 struct qeth_ipa_cmd *VAR_9;

 FUNC_0(VAR_4, 4, "chgmac");

 VAR_8 = FUNC_2(VAR_6, VAR_2,
       sizeof(struct qeth_ipacmd_setadpparms));
 VAR_9 = (struct qeth_ipa_cmd *)(VAR_8->data+VAR_1);
 VAR_9->data.setadapterparms.data.change_addr.cmd = VAR_0;
 VAR_9->data.setadapterparms.data.change_addr.addr_size = VAR_3;
 FUNC_1(&VAR_9->data.setadapterparms.data.change_addr.addr,
        VAR_6->dev->dev_addr, VAR_3);
 VAR_7 = FUNC_3(VAR_6, VAR_8, VAR_5,
          ((void*)0));
 return VAR_7;
}
