
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct req_que {scalar_t__ ring_index; scalar_t__ length; scalar_t__ ring_ptr; scalar_t__ ring; } ;
struct TYPE_5__ {int hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;
struct TYPE_6__ {int entry_type; } ;
typedef TYPE_2__ cont_a64_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline cont_a64_entry_t *
FUNC_2(scsi_qla_host_t *VAR_2, struct req_que *VAR_3)
{
 cont_a64_entry_t *VAR_4;


 VAR_3->ring_index++;
 if (VAR_3->ring_index == VAR_3->length) {
  VAR_3->ring_index = 0;
  VAR_3->ring_ptr = VAR_3->ring;
 } else {
  VAR_3->ring_ptr++;
 }

 VAR_4 = (cont_a64_entry_t *)VAR_3->ring_ptr;


 *((uint32_t *)(&VAR_4->entry_type)) = FUNC_0(VAR_2->hw) ?
     FUNC_1(VAR_1) :
     FUNC_1(VAR_0);

 return (VAR_4);
}
