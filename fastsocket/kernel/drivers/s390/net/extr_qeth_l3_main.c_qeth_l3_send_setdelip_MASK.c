
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int mask; int addr; } ;
struct TYPE_7__ {int pfxlen; int addr; } ;
struct TYPE_10__ {TYPE_3__ a4; TYPE_1__ a6; } ;
struct qeth_ipaddr {scalar_t__ proto; TYPE_4__ u; } ;
struct TYPE_11__ {unsigned int flags; int mask; int ip_addr; } ;
struct TYPE_8__ {unsigned int flags; int mask; int ip_addr; } ;
struct TYPE_12__ {TYPE_5__ setdelip4; TYPE_2__ setdelip6; } ;
struct qeth_ipa_cmd {TYPE_6__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int __u8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *,int) ;
 struct qeth_cmd_buffer* FUNC_3 (struct qeth_card*,int,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct qeth_card*,struct qeth_cmd_buffer*,int *,int *) ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_3,
  struct qeth_ipaddr *VAR_4, int VAR_5, unsigned int VAR_6)
{
 int VAR_7;
 struct qeth_cmd_buffer *VAR_8;
 struct qeth_ipa_cmd *VAR_9;
 __u8 VAR_10[16];

 FUNC_0(VAR_2, 4, "setdelip");
 FUNC_1(VAR_2, 4, "flags%02X", VAR_6);

 VAR_8 = FUNC_3(VAR_3, VAR_5, VAR_4->proto);
 VAR_9 = (struct qeth_ipa_cmd *)(VAR_8->data+VAR_0);
 if (VAR_4->proto == VAR_1) {
  FUNC_2(VAR_9->data.setdelip6.ip_addr, &VAR_4->u.a6.addr,
         sizeof(struct in6_addr));
  FUNC_4(VAR_10, VAR_4->u.a6.pfxlen);
  FUNC_2(VAR_9->data.setdelip6.mask, VAR_10,
         sizeof(struct in6_addr));
  VAR_9->data.setdelip6.flags = VAR_6;
 } else {
  FUNC_2(VAR_9->data.setdelip4.ip_addr, &VAR_4->u.a4.addr, 4);
  FUNC_2(VAR_9->data.setdelip4.mask, &VAR_4->u.a4.mask, 4);
  VAR_9->data.setdelip4.flags = VAR_6;
 }

 VAR_7 = FUNC_5(VAR_3, VAR_8, ((void*)0), ((void*)0));

 return VAR_7;
}
