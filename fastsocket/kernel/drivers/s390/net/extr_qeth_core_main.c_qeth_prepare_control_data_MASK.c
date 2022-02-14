
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_cmd_buffer {int data; int callback; } ;
struct TYPE_2__ {int pdu_hdr_ack; int pdu_hdr; int trans_hdr; } ;
struct qeth_card {TYPE_1__ seqno; int write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,int) ;

void FUNC_6(struct qeth_card *VAR_4, int VAR_5,
  struct qeth_cmd_buffer *VAR_6)
{
 FUNC_5(&VAR_4->write, VAR_6->data, VAR_5);
 VAR_6->callback = VAR_3;

 FUNC_4(FUNC_3(VAR_6->data),
        &VAR_4->seqno.trans_hdr, VAR_2);
 VAR_4->seqno.trans_hdr++;
 FUNC_4(FUNC_2(VAR_6->data),
        &VAR_4->seqno.pdu_hdr, VAR_2);
 VAR_4->seqno.pdu_hdr++;
 FUNC_4(FUNC_1(VAR_6->data),
        &VAR_4->seqno.pdu_hdr_ack, VAR_2);
 FUNC_0(VAR_0, 2, VAR_6->data, VAR_1);
}
