
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct MPT3SAS_ADAPTER {int hi_priority_smid; int internal_smid; int hba_queue_depth; TYPE_2__* internal_lookup; TYPE_1__* hpr_lookup; TYPE_3__* scsi_lookup; } ;
struct TYPE_6__ {int cb_idx; } ;
struct TYPE_5__ {int cb_idx; } ;
struct TYPE_4__ {int cb_idx; } ;



__attribute__((used)) static u8
FUNC_0(struct MPT3SAS_ADAPTER *VAR_0, u16 VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 if (VAR_1 < VAR_0->hi_priority_smid) {
  VAR_2 = VAR_1 - 1;
  VAR_3 = VAR_0->scsi_lookup[VAR_2].cb_idx;
 } else if (VAR_1 < VAR_0->internal_smid) {
  VAR_2 = VAR_1 - VAR_0->hi_priority_smid;
  VAR_3 = VAR_0->hpr_lookup[VAR_2].cb_idx;
 } else if (VAR_1 <= VAR_0->hba_queue_depth) {
  VAR_2 = VAR_1 - VAR_0->internal_smid;
  VAR_3 = VAR_0->internal_lookup[VAR_2].cb_idx;
 } else
  VAR_3 = 0xFF;
 return VAR_3;
}
