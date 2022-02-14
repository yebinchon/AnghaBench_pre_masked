
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct lbtf_private {int nr_of_multicastmacaddr; int multicastlist; } ;
struct TYPE_2__ {void* size; } ;
struct cmd_ds_mac_multicast_addr {TYPE_1__ hdr; int maclist; void* nr_of_adrs; void* action; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbtf_private*,int ,TYPE_1__*,int) ;
 int FUNC_2 (char*,void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;

int FUNC_6(struct lbtf_private *VAR_4)
{
 struct cmd_ds_mac_multicast_addr VAR_5;

 FUNC_3(VAR_3);

 VAR_5.hdr.size = FUNC_0(sizeof(VAR_5));
 VAR_5.action = FUNC_0(VAR_0);

 VAR_5.nr_of_adrs = FUNC_0((u16) VAR_4->nr_of_multicastmacaddr);

 FUNC_2("MULTICAST_ADR: setting %d addresses\n", VAR_5.nr_of_adrs);

 FUNC_5(VAR_5.maclist, VAR_4->multicastlist,
        VAR_4->nr_of_multicastmacaddr * VAR_2);

 FUNC_1(VAR_4, VAR_1, &VAR_5.hdr, sizeof(VAR_5));

 FUNC_4(VAR_3);
 return 0;
}
