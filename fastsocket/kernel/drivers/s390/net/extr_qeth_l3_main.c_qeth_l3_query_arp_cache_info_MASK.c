
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int request_bits; scalar_t__ no_entries; scalar_t__ reply_bits; } ;
struct TYPE_6__ {TYPE_1__ query_arp; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_8__ {TYPE_3__ setassparms; } ;
struct qeth_ipa_cmd {TYPE_4__ data; } ;
struct qeth_cmd_buffer {scalar_t__ data; } ;
struct qeth_card {int dummy; } ;
struct qeth_arp_query_info {int dummy; } ;
struct qeth_arp_query_data {int dummy; } ;
typedef enum qeth_prot_versions { ____Placeholder_qeth_prot_versions } qeth_prot_versions ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (int,char*,int ,int ,int,int) ;
 int FUNC_2 (int ,int,char*,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int*) ;
 int VAR_6 ;
 struct qeth_cmd_buffer* FUNC_4 (struct qeth_card*,int ,int ,int,int) ;
 int FUNC_5 (struct qeth_card*,struct qeth_cmd_buffer*,scalar_t__,int ,void*) ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_7,
 enum qeth_prot_versions VAR_8,
 struct qeth_arp_query_info *VAR_9)
{
 struct qeth_cmd_buffer *VAR_10;
 struct qeth_ipa_cmd *VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_2(VAR_5, 3, "qarpipv%i", VAR_8);

 VAR_10 = FUNC_4(VAR_7, VAR_0,
   VAR_1,
   sizeof(struct qeth_arp_query_data) - sizeof(char),
   VAR_8);
 VAR_11 = (struct qeth_ipa_cmd *)(VAR_10->data+VAR_2);
 VAR_11->data.setassparms.data.query_arp.request_bits = 0x000F;
 VAR_11->data.setassparms.data.query_arp.reply_bits = 0;
 VAR_11->data.setassparms.data.query_arp.no_entries = 0;
 VAR_13 = FUNC_5(VAR_7, VAR_10,
      VAR_4+VAR_3,
      VAR_6, (void *)VAR_9);
 if (VAR_13) {
  VAR_12 = VAR_13;
  FUNC_1(2,
   "Error while querying ARP cache on %s: %s "
   "(0x%x/%d)\n", FUNC_0(VAR_7),
   FUNC_3(&VAR_13), VAR_12, VAR_12);
 }

 return VAR_13;
}
