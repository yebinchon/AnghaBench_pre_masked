
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int addr; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_10__ {TYPE_4__ a4; TYPE_1__ a6; } ;
struct qeth_ipaddr {scalar_t__ proto; TYPE_5__ u; int * mac; } ;
struct TYPE_7__ {int ip4; int * ip6; int mac; } ;
struct TYPE_8__ {TYPE_2__ setdelipm; } ;
struct qeth_ipa_cmd {TYPE_3__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {int dummy; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int) ;
 struct qeth_cmd_buffer* FUNC_2 (struct qeth_card*,int,scalar_t__) ;
 int FUNC_3 (struct qeth_card*,struct qeth_cmd_buffer*,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct qeth_card *VAR_4,
   struct qeth_ipaddr *VAR_5, int VAR_6)
{
 int VAR_7;
 struct qeth_cmd_buffer *VAR_8;
 struct qeth_ipa_cmd *VAR_9;

 FUNC_0(VAR_3, 4, "setdelmc");

 VAR_8 = FUNC_2(VAR_4, VAR_6, VAR_5->proto);
 VAR_9 = (struct qeth_ipa_cmd *)(VAR_8->data+VAR_0);
 FUNC_1(&VAR_9->data.setdelipm.mac, VAR_5->mac, VAR_1);
 if (VAR_5->proto == VAR_2)
  FUNC_1(VAR_9->data.setdelipm.ip6, &VAR_5->u.a6.addr,
         sizeof(struct in6_addr));
 else
  FUNC_1(&VAR_9->data.setdelipm.ip4, &VAR_5->u.a4.addr, 4);

 VAR_7 = FUNC_3(VAR_4, VAR_8, ((void*)0), ((void*)0));

 return VAR_7;
}
