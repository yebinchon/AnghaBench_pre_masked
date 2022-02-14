
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int desc_count; int desc_avail; } ;
struct vnic_wq_copy {int to_clean_index; TYPE_1__ ring; } ;
struct fnic {int* fw_ack_index; scalar_t__* fw_ack_recd; } ;



__attribute__((used)) static int FUNC_0(struct fnic *VAR_0, struct vnic_wq_copy *VAR_1)
{

 if (!VAR_0->fw_ack_recd[0])
  return 1;





 if (VAR_1->to_clean_index <= VAR_0->fw_ack_index[0])
  VAR_1->ring.desc_avail += (VAR_0->fw_ack_index[0]
     - VAR_1->to_clean_index + 1);
 else
  VAR_1->ring.desc_avail += (VAR_1->ring.desc_count
     - VAR_1->to_clean_index
     + VAR_0->fw_ack_index[0] + 1);






 VAR_1->to_clean_index =
  (VAR_0->fw_ack_index[0] + 1) % VAR_1->ring.desc_count;


 VAR_0->fw_ack_recd[0] = 0;
 return 0;
}
