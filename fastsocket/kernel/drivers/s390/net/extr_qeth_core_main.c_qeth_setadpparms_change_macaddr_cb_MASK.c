
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_9__ {int addr; } ;
struct TYPE_10__ {TYPE_2__ change_addr; } ;
struct TYPE_11__ {TYPE_3__ data; } ;
struct TYPE_12__ {TYPE_4__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_5__ data; } ;
struct TYPE_14__ {int mac_bits; } ;
struct TYPE_13__ {int layer2; } ;
struct qeth_card {TYPE_7__ info; TYPE_1__* dev; TYPE_6__ options; } ;
struct TYPE_8__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct qeth_card*,struct qeth_reply*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_3,
  struct qeth_reply *VAR_4, unsigned long VAR_5)
{
 struct qeth_ipa_cmd *VAR_6;

 FUNC_0(VAR_2, 4, "chgmaccb");

 VAR_6 = (struct qeth_ipa_cmd *) VAR_5;
 if (!VAR_3->options.layer2 ||
     !(VAR_3->info.mac_bits & VAR_1)) {
  FUNC_1(VAR_3->dev->dev_addr,
         &VAR_6->data.setadapterparms.data.change_addr.addr,
         VAR_0);
  VAR_3->info.mac_bits |= VAR_1;
 }
 FUNC_2(VAR_3, VAR_4, (unsigned long) VAR_6);
 return 0;
}
