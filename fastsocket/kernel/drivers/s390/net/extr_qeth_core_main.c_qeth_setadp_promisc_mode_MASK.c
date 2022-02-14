
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qeth_ipacmd_setadpparms {int dummy; } ;
struct TYPE_6__ {int mode; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_8__ {TYPE_3__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_4__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct TYPE_5__ {scalar_t__ promisc_mode; } ;
struct qeth_card {TYPE_1__ info; struct net_device* dev; } ;
struct net_device {int flags; } ;
typedef enum qeth_ipa_promisc_modes { ____Placeholder_qeth_ipa_promisc_modes } qeth_ipa_promisc_modes ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct qeth_cmd_buffer* FUNC_2 (struct qeth_card*,int ,int) ;
 int FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;
 int VAR_6 ;

void FUNC_4(struct qeth_card *VAR_7)
{
 enum qeth_ipa_promisc_modes VAR_8;
 struct net_device *VAR_9 = VAR_7->dev;
 struct qeth_cmd_buffer *VAR_10;
 struct qeth_ipa_cmd *VAR_11;

 FUNC_0(VAR_5, 4, "setprom");

 if (((VAR_9->flags & VAR_0) &&
      (VAR_7->info.promisc_mode == VAR_4)) ||
     (!(VAR_9->flags & VAR_0) &&
      (VAR_7->info.promisc_mode == VAR_3)))
  return;
 VAR_8 = VAR_3;
 if (VAR_9->flags & VAR_0)
  VAR_8 = VAR_4;
 FUNC_1(VAR_5, 4, "mode:%x", VAR_8);

 VAR_10 = FUNC_2(VAR_7, VAR_2,
   sizeof(struct qeth_ipacmd_setadpparms));
 VAR_11 = (struct qeth_ipa_cmd *)(VAR_10->data + VAR_1);
 VAR_11->data.setadapterparms.data.mode = VAR_8;
 FUNC_3(VAR_7, VAR_10, VAR_6, ((void*)0));
}
