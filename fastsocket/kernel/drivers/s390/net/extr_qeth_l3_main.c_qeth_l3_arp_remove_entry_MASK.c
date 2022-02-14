
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qeth_cmd_buffer {int dummy; } ;
struct TYPE_2__ {scalar_t__ guestlan; } ;
struct qeth_card {TYPE_1__ info; } ;
struct qeth_arp_cache_entry {scalar_t__ ipaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_card*) ;
 int FUNC_1 (int,char*,char*,int ,int ,int,int) ;
 int FUNC_2 (int ,int,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,struct qeth_arp_cache_entry*,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct qeth_card*,int ) ;
 int FUNC_6 (int*) ;
 int VAR_5 ;
 struct qeth_cmd_buffer* FUNC_7 (struct qeth_card*,int ,int ,int,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct qeth_card*,struct qeth_cmd_buffer*,int,unsigned long,int ,int *) ;

__attribute__((used)) static int FUNC_10(struct qeth_card *VAR_6,
    struct qeth_arp_cache_entry *VAR_7)
{
 struct qeth_cmd_buffer *VAR_8;
 char VAR_9[16] = {0, };
 int VAR_10;
 int VAR_11;

 FUNC_2(VAR_4, 3, "arprment");






 if (VAR_6->info.guestlan)
  return -VAR_0;
 if (!FUNC_5(VAR_6, VAR_1)) {
  return -VAR_0;
 }
 FUNC_3(VAR_9, VAR_7, 12);
 VAR_8 = FUNC_7(VAR_6, VAR_1,
           VAR_2,
           12,
           VAR_3);
 VAR_11 = FUNC_9(VAR_6, VAR_8,
       12, (unsigned long)VAR_9,
       VAR_5, ((void*)0));
 if (VAR_11) {
  VAR_10 = VAR_11;
  FUNC_4(VAR_9, 0, 16);
  FUNC_8((u8 *)VAR_7->ipaddr, VAR_9);
  FUNC_1(2, "Could not delete ARP entry for address %s"
   " on %s: %s (0x%x/%d)\n", VAR_9, FUNC_0(VAR_6),
   FUNC_6(&VAR_11), VAR_10, VAR_10);
 }
 return VAR_11;
}
