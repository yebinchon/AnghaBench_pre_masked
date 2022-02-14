
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {scalar_t__ iomb_size; } ;
struct mpi_msg_hdr {int dummy; } ;
struct inbound_queue_table {int consumer_index; int producer_idx; int pi_offset; int pi_pci_bar; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,void*,scalar_t__) ;
 int FUNC_4 (struct pm8001_hba_info*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct inbound_queue_table*,scalar_t__,void**) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (void*,int ,int ) ;

int FUNC_8(struct pm8001_hba_info *VAR_0,
    struct inbound_queue_table *VAR_1,
    u32 VAR_2, void *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = 0, VAR_6 = 0, VAR_7 = 1, VAR_8 = 0x02;
 void *VAR_9;

 if (FUNC_5(VAR_1, VAR_0->iomb_size,
  &VAR_9) < 0) {
  FUNC_1(VAR_0,
   FUNC_6("No free mpi buffer\n"));
  return -1;
 }
 FUNC_0(!VAR_3);

 FUNC_3(VAR_9, VAR_3, (VAR_0->iomb_size -
    sizeof(struct mpi_msg_hdr)));


 VAR_5 = ((1 << 31) | (VAR_6 << 30) | ((VAR_7 & 0x1f) << 24)
  | ((VAR_4 & 0x3F) << 16)
  | ((VAR_8 & 0xF) << 12) | (VAR_2 & 0xFFF));

 FUNC_7((VAR_9 - 4), 0, FUNC_2(VAR_5));

 FUNC_4(VAR_0, VAR_1->pi_pci_bar,
  VAR_1->pi_offset, VAR_1->producer_idx);
 FUNC_1(VAR_0,
  FUNC_6("INB Q %x OPCODE:%x , UPDATED PI=%d CI=%d\n",
   VAR_4, VAR_2, VAR_1->producer_idx,
   VAR_1->consumer_index));
 return 0;
}
