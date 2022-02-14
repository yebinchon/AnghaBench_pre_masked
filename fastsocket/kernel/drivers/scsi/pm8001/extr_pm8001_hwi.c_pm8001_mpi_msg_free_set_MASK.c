
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pm8001_hba_info {int iomb_size; } ;
struct outbound_queue_table {int consumer_idx; struct mpi_msg_hdr* producer_index; int pi_virt; int ci_offset; int ci_pci_bar; scalar_t__ base_virt; } ;
struct mpi_msg_hdr {int dummy; } ;


 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int FUNC_1 (struct pm8001_hba_info*,int ) ;
 int VAR_0 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct pm8001_hba_info*,int ,int ,int) ;
 int FUNC_4 (char*,int,struct mpi_msg_hdr*,...) ;
 int FUNC_5 (int ) ;

u32 FUNC_6(struct pm8001_hba_info *VAR_1, void *VAR_2,
       struct outbound_queue_table *VAR_3, u8 VAR_4)
{
 u32 VAR_5;
 struct mpi_msg_hdr *VAR_6;
 struct mpi_msg_hdr *VAR_7;

 VAR_6 = (struct mpi_msg_hdr *)(VAR_2 - sizeof(struct mpi_msg_hdr));
 VAR_7 = (struct mpi_msg_hdr *)(VAR_3->base_virt +
    VAR_3->consumer_idx * VAR_1->iomb_size);
 if (VAR_7 != VAR_6) {
  FUNC_0(VAR_1,
   FUNC_4("consumer_idx = %d msgHeader = %p\n",
   VAR_3->consumer_idx, VAR_6));


  VAR_5 = FUNC_5(VAR_3->pi_virt);
  VAR_3->producer_index = FUNC_2(VAR_5);
  FUNC_0(VAR_1,
   FUNC_4("consumer_idx = %d producer_index = %d"
   "msgHeader = %p\n", VAR_3->consumer_idx,
   VAR_3->producer_index, VAR_6));
  return 0;
 }

 VAR_3->consumer_idx = (VAR_3->consumer_idx + VAR_4)
    % VAR_0;

 FUNC_3(VAR_1, VAR_3->ci_pci_bar, VAR_3->ci_offset,
  VAR_3->consumer_idx);

 VAR_5 = FUNC_5(VAR_3->pi_virt);
 VAR_3->producer_index = FUNC_2(VAR_5);
 FUNC_1(VAR_1,
  FUNC_4(" CI=%d PI=%d\n", VAR_3->consumer_idx,
  VAR_3->producer_index));
 return 0;
}
