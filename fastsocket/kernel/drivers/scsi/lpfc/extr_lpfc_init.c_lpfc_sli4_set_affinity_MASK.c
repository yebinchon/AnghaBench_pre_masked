
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct cpumask {int dummy; } ;
struct lpfc_vector_map_info {int phys_id; int irq; int channel_id; struct cpumask maskbits; scalar_t__ core_id; } ;
struct TYPE_4__ {int num_present_cpu; int num_online_cpu; struct lpfc_vector_map_info* cpu_map; TYPE_1__* msix_entries; } ;
struct lpfc_hba {scalar_t__ cfg_fcp_cpu_map; int cfg_fcp_io_channel; int cfg_fcp_io_sched; TYPE_2__ sli4_hba; } ;
struct cpuinfo_x86 {int phys_proc_id; scalar_t__ cpu_core_id; } ;
struct TYPE_3__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct cpuinfo_x86 FUNC_0 (int) ;
 int FUNC_1 (struct cpumask*) ;
 int FUNC_2 (int,struct cpumask*) ;
 int FUNC_3 (int,struct cpumask*) ;
 int FUNC_4 (struct lpfc_hba*,int) ;
 int FUNC_5 (struct lpfc_hba*,int ,int ,char*,int,int,...) ;
 int* VAR_7 ;
 int FUNC_6 (struct lpfc_vector_map_info*,int,int) ;

__attribute__((used)) static int
FUNC_7(struct lpfc_hba *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;
 struct lpfc_vector_map_info *VAR_19;



 struct cpumask *VAR_20;
 uint8_t VAR_21[VAR_4+1];


 if (!VAR_8->cfg_fcp_cpu_map)
  return 1;


 FUNC_6(VAR_8->sli4_hba.cpu_map, 0xff,
        (sizeof(struct lpfc_vector_map_info) *
  VAR_8->sli4_hba.num_present_cpu));

 VAR_16 = 0;
 VAR_15 = 0;
 VAR_17 = 0;
 VAR_18 = VAR_6;


 VAR_19 = VAR_8->sli4_hba.cpu_map;
 for (VAR_14 = 0; VAR_14 < VAR_8->sli4_hba.num_present_cpu; VAR_14++) {






  VAR_19->phys_id = 0;
  VAR_19->core_id = 0;


  FUNC_5(VAR_8, VAR_1, VAR_2,
    "3328 CPU physid %d coreid %d\n",
    VAR_19->phys_id, VAR_19->core_id);

  if (VAR_19->phys_id > VAR_16)
   VAR_16 = VAR_19->phys_id;
  VAR_19++;
 }


 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_19 = VAR_8->sli4_hba.cpu_map;
  VAR_14 = FUNC_4(VAR_8, VAR_15);
  if (VAR_14 == VAR_6) {


   for (VAR_10 = 1; VAR_10 < VAR_16; VAR_10++) {
    VAR_15++;
    if (VAR_15 > VAR_16)
     VAR_15 = 0;
    VAR_14 = FUNC_4(VAR_8, VAR_15);
    if (VAR_14 == VAR_6)
     continue;
    goto found;
   }

   FUNC_5(VAR_8, VAR_0, VAR_2,
     "3329 Cannot set affinity:"
     "Error mapping vector %d (%d)\n",
     VAR_11, VAR_9);
   return 0;
  }
found:
  VAR_19 += VAR_14;
  if (VAR_8->cfg_fcp_cpu_map == VAR_3)
   VAR_7[VAR_14] = VAR_15;


  VAR_19->irq = VAR_8->sli4_hba.msix_entries[VAR_11].vector;


  VAR_19->channel_id = VAR_11;
  VAR_17++;

  if (VAR_18 == VAR_6)
   VAR_18 = VAR_14;


  VAR_20 = &VAR_19->maskbits;
  FUNC_1(VAR_20);
  FUNC_2(VAR_14, VAR_20);
  VAR_10 = FUNC_3(VAR_8->sli4_hba.msix_entries[VAR_11].
       vector, VAR_20);

  FUNC_5(VAR_8, VAR_1, VAR_2,
    "3330 Set Affinity: CPU %d channel %d "
    "irq %d (%x)\n",
    VAR_14, VAR_19->channel_id,
    VAR_8->sli4_hba.msix_entries[VAR_11].vector, VAR_10);


  VAR_15++;
  if (VAR_15 > VAR_16)
   VAR_15 = 0;
 }
 for (VAR_10 = 0; VAR_10 <= VAR_16; VAR_10++) {





  for (VAR_11 = 0; VAR_11 < VAR_8->cfg_fcp_io_channel; VAR_11++)
   VAR_21[VAR_11] = VAR_11;

  VAR_12 = 0;
  VAR_13 = 0;






  VAR_19 = VAR_8->sli4_hba.cpu_map;
  VAR_14 = VAR_18;
  VAR_19 += VAR_14;
  for (VAR_11 = 0; VAR_11 < VAR_8->sli4_hba.num_present_cpu;
       VAR_11++) {
   if (VAR_19->phys_id == VAR_10) {




    if (VAR_19->irq != VAR_6) {
     VAR_21[VAR_12] =
      VAR_19->channel_id;
     VAR_12++;
     goto out;
    }


    if (VAR_12 == 0)
     VAR_12 =
      VAR_8->cfg_fcp_io_channel;


    VAR_19->channel_id = VAR_21[VAR_13];
    VAR_17++;
    VAR_13++;
    if (VAR_13 == VAR_12)
     VAR_13 = 0;

    FUNC_5(VAR_8, VAR_1, VAR_2,
      "3331 Set IO_CHANN "
      "CPU %d channel %d\n",
      VAR_11, VAR_19->channel_id);
   }
out:
   VAR_14++;
   if (VAR_14 >= VAR_8->sli4_hba.num_present_cpu) {
    VAR_19 = VAR_8->sli4_hba.cpu_map;
    VAR_14 = 0;
   } else {
    VAR_19++;
   }
  }
 }

 if (VAR_8->sli4_hba.num_online_cpu != VAR_8->sli4_hba.num_present_cpu) {
  VAR_19 = VAR_8->sli4_hba.cpu_map;
  for (VAR_11 = 0; VAR_11 < VAR_8->sli4_hba.num_present_cpu; VAR_11++) {
   if (VAR_19->channel_id == VAR_6) {
    VAR_19->channel_id = 0;
    VAR_17++;

    FUNC_5(VAR_8, VAR_1, VAR_2,
      "3332 Assign IO_CHANN "
      "CPU %d channel %d\n",
      VAR_11, VAR_19->channel_id);
   }
   VAR_19++;
  }
 }


 if (VAR_17 != VAR_8->sli4_hba.num_present_cpu)
  FUNC_5(VAR_8, VAR_0, VAR_2,
    "3333 Set affinity mismatch:"
    "%d chann != %d cpus: %d vactors\n",
    VAR_17, VAR_8->sli4_hba.num_present_cpu,
    VAR_9);

 VAR_8->cfg_fcp_io_sched = VAR_5;
 return 1;
}
