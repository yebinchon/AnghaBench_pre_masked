
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_msg {int txn_id; int type; unsigned char* tlv; scalar_t__ size; int client_id; int service; } ;
struct qmi_ctxt {int wds_txn_id; int wds_client_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qmi_msg*,int,int,...) ;
 int FUNC_1 (struct qmi_ctxt*,struct qmi_msg*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct qmi_ctxt *VAR_3, char *VAR_4)
{
 unsigned char VAR_5[96 + VAR_2];
 struct qmi_msg VAR_6;
 char *VAR_7;
 char *VAR_8;
 char *VAR_9;

 for (VAR_8 = VAR_4; *VAR_8; VAR_8++) {
  if (*VAR_8 == ' ') {
   *VAR_8++ = 0;
   break;
  }
 }
 for (VAR_9 = VAR_8; *VAR_9; VAR_9++) {
  if (*VAR_9 == ' ') {
   *VAR_9++ = 0;
   break;
  }
 }

 for (VAR_7 = VAR_9; *VAR_7; VAR_7++) {
  if (*VAR_7 == ' ') {
   *VAR_7++ = 0;
   break;
  }
 }

 VAR_6.service = VAR_0;
 VAR_6.client_id = VAR_3->wds_client_id;
 VAR_6.txn_id = VAR_3->wds_txn_id;
 VAR_6.type = 0x0020;
 VAR_6.size = 0;
 VAR_6.tlv = VAR_5 + VAR_1;

 VAR_3->wds_txn_id += 2;

 FUNC_0(&VAR_6, 0x14, FUNC_2(VAR_4), VAR_4);
 if (*VAR_7)
  FUNC_0(&VAR_6, 0x16, FUNC_2(VAR_7), VAR_7);
 if (*VAR_8) {
  if (!*VAR_7) {
   unsigned char VAR_10;
   VAR_10 = 3;
   FUNC_0(&VAR_6, 0x16, 1, &VAR_10);
  }
  FUNC_0(&VAR_6, 0x17, FUNC_2(VAR_8), VAR_8);
  if (*VAR_9)
   FUNC_0(&VAR_6, 0x18, FUNC_2(VAR_9), VAR_9);
 }
 return FUNC_1(VAR_3, &VAR_6);
}
