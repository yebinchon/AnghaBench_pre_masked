
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ue_count; } ;
struct edac_device_instance {int nr_blocks; int name; TYPE_2__ counters; struct edac_device_block* blocks; } ;
struct TYPE_6__ {int ue_count; } ;
struct edac_device_ctl_info {int nr_instances; int ctl_name; TYPE_3__ counters; struct edac_device_instance* instances; } ;
struct TYPE_4__ {int ue_count; } ;
struct edac_device_block {char* name; TYPE_1__ counters; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct edac_device_ctl_info*) ;
 scalar_t__ FUNC_1 (struct edac_device_ctl_info*) ;
 int FUNC_2 (struct edac_device_ctl_info*,int ,char*,int,int,...) ;
 int FUNC_3 (char*,int ,int ,char*,char const*) ;

void FUNC_4(struct edac_device_ctl_info *VAR_2,
   int VAR_3, int VAR_4, const char *VAR_5)
{
 struct edac_device_instance *VAR_6;
 struct edac_device_block *VAR_7 = ((void*)0);

 if ((VAR_3 >= VAR_2->nr_instances) || (VAR_3 < 0)) {
  FUNC_2(VAR_2, VAR_1,
    "INTERNAL ERROR: 'instance' out of range "
    "(%d >= %d)\n", VAR_3,
    VAR_2->nr_instances);
  return;
 }

 VAR_6 = VAR_2->instances + VAR_3;

 if ((VAR_4 >= VAR_6->nr_blocks) || (VAR_4 < 0)) {
  FUNC_2(VAR_2, VAR_1,
    "INTERNAL ERROR: instance %d 'block' "
    "out of range (%d >= %d)\n",
    VAR_3, VAR_4,
    VAR_6->nr_blocks);
  return;
 }

 if (VAR_6->nr_blocks > 0) {
  VAR_7 = VAR_6->blocks + VAR_4;
  VAR_7->counters.ue_count++;
 }


 VAR_6->counters.ue_count++;
 VAR_2->counters.ue_count++;

 if (FUNC_0(VAR_2))
  FUNC_2(VAR_2, VAR_0,
    "UE: %s instance: %s block: %s '%s'\n",
    VAR_2->ctl_name, VAR_6->name,
    VAR_7 ? VAR_7->name : "N/A", VAR_5);

 if (FUNC_1(VAR_2))
  FUNC_3("EDAC %s: UE instance: %s block %s '%s'\n",
   VAR_2->ctl_name, VAR_6->name,
   VAR_7 ? VAR_7->name : "N/A", VAR_5);
}
