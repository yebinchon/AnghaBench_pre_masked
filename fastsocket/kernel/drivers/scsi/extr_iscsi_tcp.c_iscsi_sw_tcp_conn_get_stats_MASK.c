
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_tcp_conn {struct iscsi_sw_tcp_conn* dd_data; } ;
struct iscsi_sw_tcp_conn {int discontiguous_hdr_cnt; int sendpage_failures_cnt; } ;
struct iscsi_stats {int custom_length; TYPE_1__* custom; } ;
struct iscsi_conn {int eh_abort_cnt; struct iscsi_tcp_conn* dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct TYPE_2__ {int value; int desc; } ;


 int FUNC_0 (struct iscsi_cls_conn*,struct iscsi_stats*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void
FUNC_2(struct iscsi_cls_conn *VAR_0,
       struct iscsi_stats *VAR_1)
{
 struct iscsi_conn *VAR_2 = VAR_0->dd_data;
 struct iscsi_tcp_conn *VAR_3 = VAR_2->dd_data;
 struct iscsi_sw_tcp_conn *VAR_4 = VAR_3->dd_data;

 VAR_1->custom_length = 3;
 FUNC_1(VAR_1->custom[0].desc, "tx_sendpage_failures");
 VAR_1->custom[0].value = VAR_4->sendpage_failures_cnt;
 FUNC_1(VAR_1->custom[1].desc, "rx_discontiguous_hdr");
 VAR_1->custom[1].value = VAR_4->discontiguous_hdr_cnt;
 FUNC_1(VAR_1->custom[2].desc, "eh_abort_cnt");
 VAR_1->custom[2].value = VAR_2->eh_abort_cnt;

 FUNC_0(VAR_0, VAR_1);
}
