
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {int dummy; } ;
struct qeth_arp_query_data {int reply_bits; } ;
struct qeth_arp_qi_entry7_short_ipv6 {int dummy; } ;
struct qeth_arp_qi_entry7_short {int dummy; } ;
struct qeth_arp_qi_entry7_ipv6 {int dummy; } ;
struct qeth_arp_qi_entry7 {int dummy; } ;
struct qeth_arp_qi_entry5_short_ipv6 {int dummy; } ;
struct qeth_arp_qi_entry5_short {int dummy; } ;
struct qeth_arp_qi_entry5_ipv6 {int dummy; } ;
struct qeth_arp_qi_entry5 {int dummy; } ;
struct qeth_arp_entrytype {scalar_t__ ip; } ;
typedef int __u8 ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;

__attribute__((used)) static __u32 FUNC_1(struct qeth_card *VAR_3,
   struct qeth_arp_query_data *VAR_4,
   struct qeth_arp_entrytype *VAR_5, __u8 VAR_6)
{
 __u32 VAR_7;
 __u8 VAR_8;

 VAR_8 = VAR_4->reply_bits == 5;
 if (VAR_5->ip == VAR_0) {
  FUNC_0(VAR_2, 4, "arpev4");
  if (VAR_6) {
   VAR_7 = VAR_8 ? sizeof(struct qeth_arp_qi_entry5_short) :
    sizeof(struct qeth_arp_qi_entry7_short);
  } else {
   VAR_7 = VAR_8 ? sizeof(struct qeth_arp_qi_entry5) :
    sizeof(struct qeth_arp_qi_entry7);
  }
 } else if (VAR_5->ip == VAR_1) {
  FUNC_0(VAR_2, 4, "arpev6");
  if (VAR_6) {
   VAR_7 = VAR_8 ?
    sizeof(struct qeth_arp_qi_entry5_short_ipv6) :
    sizeof(struct qeth_arp_qi_entry7_short_ipv6);
  } else {
   VAR_7 = VAR_8 ?
    sizeof(struct qeth_arp_qi_entry5_ipv6) :
    sizeof(struct qeth_arp_qi_entry7_ipv6);
  }
 } else {
  FUNC_0(VAR_2, 4, "arpinv");
  VAR_7 = 0;
 }

 return VAR_7;
}
