
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_stats {TYPE_1__* custom; scalar_t__ custom_length; scalar_t__ timeout_err; scalar_t__ digest_err; int r2t_pdus; int tmfcmd_pdus; int tmfrsp_pdus; int datain_pdus; int scsicmd_pdus; int scsirsp_pdus; int dataout_pdus; int rxdata_octets; int txdata_octets; } ;
struct iscsi_conn {int eh_abort_cnt; int r2t_pdus_cnt; int tmfcmd_pdus_cnt; int tmfrsp_pdus_cnt; int datain_pdus_cnt; int scsicmd_pdus_cnt; int scsirsp_pdus_cnt; int dataout_pdus_cnt; int rxdata_octets; int txdata_octets; scalar_t__ dd_data; } ;
struct iscsi_cls_conn {struct iscsi_conn* dd_data; } ;
struct beiscsi_hba {int dummy; } ;
struct beiscsi_conn {struct beiscsi_hba* phba; } ;
struct TYPE_2__ {int value; int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct iscsi_cls_conn *VAR_2,
       struct iscsi_stats *VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_2->dd_data;
 struct beiscsi_hba *VAR_5 = ((void*)0);

 VAR_5 = ((struct beiscsi_conn *)VAR_4->dd_data)->phba;
 FUNC_0(VAR_5, VAR_1, VAR_0,
      "BS_%d : In beiscsi_conn_get_stats\n");

 VAR_3->txdata_octets = VAR_4->txdata_octets;
 VAR_3->rxdata_octets = VAR_4->rxdata_octets;
 VAR_3->dataout_pdus = VAR_4->dataout_pdus_cnt;
 VAR_3->scsirsp_pdus = VAR_4->scsirsp_pdus_cnt;
 VAR_3->scsicmd_pdus = VAR_4->scsicmd_pdus_cnt;
 VAR_3->datain_pdus = VAR_4->datain_pdus_cnt;
 VAR_3->tmfrsp_pdus = VAR_4->tmfrsp_pdus_cnt;
 VAR_3->tmfcmd_pdus = VAR_4->tmfcmd_pdus_cnt;
 VAR_3->r2t_pdus = VAR_4->r2t_pdus_cnt;
 VAR_3->digest_err = 0;
 VAR_3->timeout_err = 0;
 VAR_3->custom_length = 0;
 FUNC_1(VAR_3->custom[0].desc, "eh_abort_cnt");
 VAR_3->custom[0].value = VAR_4->eh_abort_cnt;
}
