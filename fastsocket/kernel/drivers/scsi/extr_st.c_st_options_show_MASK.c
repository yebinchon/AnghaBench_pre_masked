
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_modedef {scalar_t__ sysv; scalar_t__ defaults_for_writes; scalar_t__ do_read_ahead; scalar_t__ do_async_writes; scalar_t__ do_buffer_writes; } ;
struct scsi_tape {scalar_t__ sili; scalar_t__ immediate; scalar_t__ scsi2_logical; scalar_t__ can_partitions; scalar_t__ omit_blklims; scalar_t__ can_bsr; scalar_t__ fast_mteom; scalar_t__ two_fm; struct st_modedef* modes; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 struct st_modedef* FUNC_1 (struct device*) ;
 struct scsi_tape** VAR_17 ;
 int FUNC_2 (char*,int ,char*,int) ;
 int VAR_18 ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_19, struct device_attribute *VAR_20, char *VAR_21)
{
 struct st_modedef *VAR_22 = FUNC_1(VAR_19);
 struct scsi_tape *VAR_23;
 int VAR_24, VAR_25, VAR_26;
 ssize_t VAR_27 = 0;

 for (VAR_24=0; VAR_24 < VAR_18; VAR_24++) {
  for (VAR_25=0; VAR_25 < VAR_15; VAR_25++)
   if (&VAR_17[VAR_24]->modes[VAR_25] == VAR_22)
    break;
  if (VAR_25 < VAR_15)
   break;
 }
 if (VAR_24 == VAR_18)
  return 0;

 VAR_23 = VAR_17[VAR_24];

 VAR_26 = VAR_22->do_buffer_writes ? VAR_1 : 0;
 VAR_26 |= VAR_22->do_async_writes ? VAR_0 : 0;
 VAR_26 |= VAR_22->do_read_ahead ? VAR_9 : 0;
 FUNC_0( VAR_26 |= VAR_16 ? VAR_4 : 0 );
 VAR_26 |= VAR_23->two_fm ? VAR_13 : 0;
 VAR_26 |= VAR_23->fast_mteom ? VAR_6 : 0;
 VAR_26 |= VAR_22->defaults_for_writes ? VAR_5 : 0;
 VAR_26 |= VAR_23->can_bsr ? VAR_2 : 0;
 VAR_26 |= VAR_23->omit_blklims ? VAR_8 : 0;
 VAR_26 |= VAR_23->can_partitions ? VAR_3 : 0;
 VAR_26 |= VAR_23->scsi2_logical ? VAR_10 : 0;
 VAR_26 |= VAR_22->sysv ? VAR_12 : 0;
 VAR_26 |= VAR_23->immediate ? VAR_7 : 0;
 VAR_26 |= VAR_23->sili ? VAR_11 : 0;

 VAR_27 = FUNC_2(VAR_21, VAR_14, "0x%08x\n", VAR_26);
 return VAR_27;
}
