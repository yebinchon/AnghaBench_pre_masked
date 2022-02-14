
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct iscsi_hdr {int itt; int opcode; } ;
struct iser_rx_desc {scalar_t__ dma_addr; int data; struct iscsi_hdr iscsi_header; } ;
struct iser_conn {char* login_resp_buf; scalar_t__ login_resp_dma; int post_recv_buf_count; TYPE_1__* device; struct iscsi_iser_conn* iser_conn; } ;
struct iscsi_iser_conn {TYPE_2__* ib_conn; int iscsi_conn; } ;
struct TYPE_4__ {int post_recv_buf_count; } ;
struct TYPE_3__ {int ib_device; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__,int,int ) ;
 int FUNC_1 (int ,scalar_t__,int,int ) ;
 int FUNC_2 (int ,struct iscsi_hdr*,int ,unsigned long) ;
 int FUNC_3 (char*,int ,int ,int) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (struct iser_conn*,int) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;

void FUNC_7(struct iser_rx_desc *VAR_6,
    unsigned long VAR_7,
    struct iser_conn *VAR_8)
{
 struct iscsi_iser_conn *VAR_9 = VAR_8->iser_conn;
 struct iscsi_hdr *VAR_10;
 u64 VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;


 if ((char *)VAR_6 == VAR_8->login_resp_buf) {
  VAR_11 = VAR_8->login_resp_dma;
  VAR_12 = VAR_4;
 } else {
  VAR_11 = VAR_6->dma_addr;
  VAR_12 = VAR_5;
 }

 FUNC_0(VAR_8->device->ib_device, VAR_11,
   VAR_12, VAR_0);

 VAR_10 = &VAR_6->iscsi_header;

 FUNC_3("op 0x%x itt 0x%x dlen %d\n", VAR_10->opcode,
   VAR_10->itt, (int)(VAR_7 - VAR_1));

 FUNC_2(VAR_9->iscsi_conn, VAR_10,
  VAR_6->data, VAR_7 - VAR_1);

 FUNC_1(VAR_8->device->ib_device, VAR_11,
   VAR_12, VAR_0);





 VAR_9->ib_conn->post_recv_buf_count--;

 if (VAR_11 == VAR_8->login_resp_dma)
  return;

 VAR_13 = VAR_8->post_recv_buf_count;
 if (VAR_13 + VAR_2 <= VAR_3) {
  VAR_14 = FUNC_6(VAR_3 - VAR_13,
      VAR_2);
  VAR_15 = FUNC_5(VAR_8, VAR_14);
  if (VAR_15)
   FUNC_4("posting %d rx bufs err %d\n", VAR_14, VAR_15);
 }
}
