
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int function; int intr_count; int tx_ring_count; int rx_ring_count; } ;
struct TYPE_4__ {int headerSize; int imageSize; int idString; int cookie; } ;
struct ql_reg_dump {int * ets; int ets_seg_hdr; int * nic_routing_words; int nic_routing_words_seg_hdr; int * cam_entries; int cam_entries_seg_hdr; int * intr_states; int intr_states_seg_hdr; int * nic_regs; int nic_regs_seg_hdr; TYPE_1__ misc_nic_info; int misc_nic_seg_hdr; TYPE_2__ mpi_global_header; } ;
struct ql_adapter {int func; int intr_count; int tx_ring_count; int rx_ring_count; } ;
struct mpi_coredump_segment_header {int dummy; } ;
struct mpi_coredump_global_header {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int *,int ,int,char*) ;
 int FUNC_3 (struct ql_adapter*,int *) ;
 int FUNC_4 (struct ql_adapter*,int *) ;
 int FUNC_5 (struct ql_adapter*,int *) ;
 int FUNC_6 (struct ql_adapter*,int *) ;
 int FUNC_7 (struct ql_adapter*,int) ;

void FUNC_8(struct ql_adapter *VAR_7,
   struct ql_reg_dump *VAR_8)
{
 int VAR_9, VAR_10;


 FUNC_1(&(VAR_8->mpi_global_header), 0,
  sizeof(struct mpi_coredump_global_header));
 VAR_8->mpi_global_header.cookie = VAR_4;
 VAR_8->mpi_global_header.headerSize =
  sizeof(struct mpi_coredump_global_header);
 VAR_8->mpi_global_header.imageSize =
  sizeof(struct ql_reg_dump);
 FUNC_0(VAR_8->mpi_global_header.idString, "MPI Coredump",
  sizeof(VAR_8->mpi_global_header.idString));



 FUNC_2(&VAR_8->misc_nic_seg_hdr,
    VAR_3,
    sizeof(struct mpi_coredump_segment_header)
    + sizeof(VAR_8->misc_nic_info),
    "MISC NIC INFO");
 VAR_8->misc_nic_info.rx_ring_count = VAR_7->rx_ring_count;
 VAR_8->misc_nic_info.tx_ring_count = VAR_7->tx_ring_count;
 VAR_8->misc_nic_info.intr_count = VAR_7->intr_count;
 VAR_8->misc_nic_info.function = VAR_7->func;


 FUNC_2(&VAR_8->nic_regs_seg_hdr,
    VAR_5,
    sizeof(struct mpi_coredump_segment_header)
    + sizeof(VAR_8->nic_regs),
    "NIC Registers");

 for (VAR_9 = 0; VAR_9 < 64; VAR_9++)
  VAR_8->nic_regs[VAR_9] = FUNC_7(VAR_7, VAR_9 * sizeof(u32));



 FUNC_2(&VAR_8->intr_states_seg_hdr,
    VAR_2,
    sizeof(struct mpi_coredump_segment_header)
    + sizeof(VAR_8->intr_states),
    "INTR States");
 FUNC_5(VAR_7, &VAR_8->intr_states[0]);

 FUNC_2(&VAR_8->cam_entries_seg_hdr,
    VAR_0,
    sizeof(struct mpi_coredump_segment_header)
    + sizeof(VAR_8->cam_entries),
    "CAM Entries");
 VAR_10 = FUNC_3(VAR_7, &VAR_8->cam_entries[0]);
 if (VAR_10)
  return;

 FUNC_2(&VAR_8->nic_routing_words_seg_hdr,
    VAR_6,
    sizeof(struct mpi_coredump_segment_header)
    + sizeof(VAR_8->nic_routing_words),
    "Routing Words");
 VAR_10 = FUNC_6(VAR_7,
    &VAR_8->nic_routing_words[0]);
 if (VAR_10)
  return;


 FUNC_2(&VAR_8->ets_seg_hdr,
    VAR_1,
    sizeof(struct mpi_coredump_segment_header)
    + sizeof(VAR_8->ets),
    "ETS Registers");
 VAR_10 = FUNC_4(VAR_7, &VAR_8->ets[0]);
 if (VAR_10)
  return;
}
