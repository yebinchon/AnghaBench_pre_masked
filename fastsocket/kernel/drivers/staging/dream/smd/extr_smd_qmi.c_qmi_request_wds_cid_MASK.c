
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_msg {int txn_id; int type; unsigned char* tlv; scalar_t__ size; int client_id; int service; } ;
struct qmi_ctxt {int ctl_txn_id; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qmi_msg*,int,int,unsigned char*) ;
 int VAR_4 ;
 int FUNC_1 (struct qmi_ctxt*,struct qmi_msg*) ;

__attribute__((used)) static int FUNC_2(struct qmi_ctxt *VAR_5)
{
 unsigned char VAR_6[64 + VAR_3];
 struct qmi_msg VAR_7;
 unsigned char VAR_8;

 VAR_7.service = VAR_0;
 VAR_7.client_id = VAR_4;
 VAR_7.txn_id = VAR_5->ctl_txn_id;
 VAR_7.type = 0x0022;
 VAR_7.size = 0;
 VAR_7.tlv = VAR_6 + VAR_2;

 VAR_5->ctl_txn_id += 2;

 VAR_8 = VAR_1;
 FUNC_0(&VAR_7, 0x01, 0x01, &VAR_8);

 return FUNC_1(VAR_5, &VAR_7);
}
