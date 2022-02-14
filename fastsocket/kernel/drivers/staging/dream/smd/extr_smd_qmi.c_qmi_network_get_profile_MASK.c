
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_msg {int txn_id; int type; unsigned char* tlv; scalar_t__ size; int client_id; int service; } ;
struct qmi_ctxt {int wds_txn_id; int wds_client_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qmi_ctxt*,struct qmi_msg*) ;

__attribute__((used)) static int FUNC_1(struct qmi_ctxt *VAR_3)
{
 unsigned char VAR_4[96 + VAR_2];
 struct qmi_msg VAR_5;

 VAR_5.service = VAR_0;
 VAR_5.client_id = VAR_3->wds_client_id;
 VAR_5.txn_id = VAR_3->wds_txn_id;
 VAR_5.type = 0x002D;
 VAR_5.size = 0;
 VAR_5.tlv = VAR_4 + VAR_1;

 VAR_3->wds_txn_id += 2;

 return FUNC_0(VAR_3, &VAR_5);
}
