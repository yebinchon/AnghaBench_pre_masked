
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_msg {unsigned int size; int txn_id; int type; int tlv; int service; int client_id; } ;
struct qmi_ctxt {int ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qmi_msg*,char*) ;
 int FUNC_1 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct qmi_ctxt *VAR_2, struct qmi_msg *VAR_3)
{
 unsigned char *VAR_4;
 unsigned VAR_5;
 unsigned VAR_6;
 int VAR_7;

 FUNC_0(VAR_3, "send");

 if (VAR_3->service == VAR_0) {
  VAR_5 = VAR_1 - 1;
 } else {
  VAR_5 = VAR_1;
 }


 VAR_6 = VAR_5 + VAR_3->size - 1;
 if (VAR_6 > 0xffff)
  return -1;

 VAR_4 = VAR_3->tlv - VAR_5;


 *VAR_4++ = 0x01;


 *VAR_4++ = VAR_6;
 *VAR_4++ = VAR_6 >> 8;
 *VAR_4++ = 0x00;
 *VAR_4++ = VAR_3->service;
 *VAR_4++ = VAR_3->client_id;


 *VAR_4++ = 0x00;
 *VAR_4++ = VAR_3->txn_id;
 if (VAR_3->service != VAR_0)
  *VAR_4++ = VAR_3->txn_id >> 8;

 *VAR_4++ = VAR_3->type;
 *VAR_4++ = VAR_3->type >> 8;
 *VAR_4++ = VAR_3->size;
 *VAR_4++ = VAR_3->size >> 8;


 VAR_7 = FUNC_1(VAR_2->ch, VAR_3->tlv - VAR_5, VAR_6 + 1);

 if (VAR_7 != VAR_6) {
  return -1;
 } else {
  return 0;
 }
}
