
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qeth_reply {scalar_t__ param; } ;
struct TYPE_8__ {scalar_t__ return_code; scalar_t__ seq_no; scalar_t__ number_of_replies; } ;
struct qeth_arp_query_data {scalar_t__ no_entries; char data; int reply_bits; } ;
struct TYPE_6__ {struct qeth_arp_query_data query_arp; } ;
struct TYPE_9__ {TYPE_3__ hdr; TYPE_1__ data; } ;
struct TYPE_10__ {TYPE_4__ setassparms; } ;
struct TYPE_7__ {int return_code; int prot_version; } ;
struct qeth_ipa_cmd {TYPE_5__ data; TYPE_2__ hdr; } ;
struct qeth_card {int dummy; } ;
struct qeth_arp_query_info {int mask_bits; scalar_t__ udata_len; scalar_t__ udata_offset; scalar_t__ udata; scalar_t__ no_entries; } ;
struct qeth_arp_entrytype {scalar_t__ ip; } ;
struct qeth_arp_qi_entry5 {struct qeth_arp_entrytype type; } ;
typedef int __u8 ;
typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct qeth_arp_entrytype*,int ) ;
 scalar_t__ FUNC_3 (struct qeth_card*,struct qeth_arp_query_data*,struct qeth_arp_entrytype*,int) ;
 int FUNC_4 (scalar_t__,int*,int) ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_5,
  struct qeth_reply *VAR_6, unsigned long VAR_7)
{
 struct qeth_ipa_cmd *VAR_8;
 struct qeth_arp_query_data *VAR_9;
 struct qeth_arp_query_info *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 __u8 VAR_15;

 FUNC_0(VAR_4, 4, "arpquecb");

 VAR_10 = (struct qeth_arp_query_info *) VAR_6->param;
 VAR_8 = (struct qeth_ipa_cmd *) VAR_7;
 if (VAR_8->hdr.return_code) {
  FUNC_1(VAR_4, 4, "arpcberr%i", VAR_8->hdr.return_code);
  FUNC_1(VAR_4, 4, "qaer1%i", VAR_8->hdr.return_code);
  return 0;
 }
 if (VAR_8->data.setassparms.hdr.return_code) {
  VAR_8->hdr.return_code = VAR_8->data.setassparms.hdr.return_code;
  FUNC_1(VAR_4, 4, "setaperr%i", VAR_8->hdr.return_code);
  FUNC_1(VAR_4, 4, "%i", VAR_8->hdr.return_code);
  return 0;
 }
 VAR_9 = &VAR_8->data.setassparms.data.query_arp;
 FUNC_1(VAR_4, 4, "anoen%i", VAR_9->no_entries);

 VAR_15 = (VAR_10->mask_bits & VAR_3) > 0;
 VAR_14 = VAR_15 ? VAR_2 : 0;
 VAR_13 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_9->no_entries; ++VAR_12) {
  char *VAR_16;
  __u32 VAR_17;
  struct qeth_arp_entrytype *VAR_18;

  VAR_16 = &VAR_9->data + VAR_13;
  VAR_18 = &((struct qeth_arp_qi_entry5 *) VAR_16)->type;
  if (!FUNC_2(VAR_18, VAR_8->hdr.prot_version)) {
   FUNC_0(VAR_4, 4, "pmis");
   FUNC_1(VAR_4, 4, "%i", VAR_18->ip);
   break;
  }
  VAR_17 = FUNC_3(VAR_5, VAR_9, VAR_18,
   VAR_15);
  FUNC_1(VAR_4, 5, "esz%i", VAR_17);
  if (!VAR_17) {
   break;
  }
  if ((VAR_10->udata_len - VAR_10->udata_offset) < VAR_17) {
   FUNC_1(VAR_4, 4, "qaer3%i", -VAR_0);
   VAR_8->hdr.return_code = -VAR_0;
   goto out_error;
  }

  FUNC_4(VAR_10->udata + VAR_10->udata_offset,
   &VAR_9->data + VAR_13 + VAR_14,
   VAR_17);
  VAR_13 += VAR_17 + VAR_14;
  VAR_10->udata_offset += VAR_17;
  ++VAR_10->no_entries;
 }

 if (VAR_8->data.setassparms.hdr.seq_no <
     VAR_8->data.setassparms.hdr.number_of_replies)
  return 1;
 FUNC_1(VAR_4, 4, "nove%i", VAR_10->no_entries);
 FUNC_4(VAR_10->udata, &VAR_10->no_entries, 4);


 if (VAR_10->mask_bits & VAR_3)
  VAR_9->reply_bits |= VAR_3;
 FUNC_4(VAR_10->udata + VAR_1, &VAR_9->reply_bits, 2);
 return 0;
out_error:
 VAR_11 = 0;
 FUNC_4(VAR_10->udata, &VAR_11, 4);
 return 0;
}
