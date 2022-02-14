
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct MPT3SAS_ADAPTER {scalar_t__ pending_io_count; size_t scsiio_depth; int reset_wq; int scsi_lookup_lock; TYPE_1__* scsi_lookup; } ;
struct TYPE_2__ {int cb_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void
FUNC_4(struct MPT3SAS_ADAPTER *VAR_4, int VAR_5)
{
 u32 VAR_6;
 unsigned long VAR_7;
 u16 VAR_8;

 VAR_4->pending_io_count = 0;
 if (VAR_5 != VAR_0)
  return;

 VAR_6 = FUNC_0(VAR_4, 0);
 if ((VAR_6 & VAR_2) != VAR_3)
  return;


 FUNC_1(&VAR_4->scsi_lookup_lock, VAR_7);
 for (VAR_8 = 0; VAR_8 < VAR_4->scsiio_depth; VAR_8++)
  if (VAR_4->scsi_lookup[VAR_8].cb_idx != 0xFF)
   VAR_4->pending_io_count++;
 FUNC_2(&VAR_4->scsi_lookup_lock, VAR_7);

 if (!VAR_4->pending_io_count)
  return;


 FUNC_3(VAR_4->reset_wq, VAR_4->pending_io_count == 0, 10 * VAR_1);
}
