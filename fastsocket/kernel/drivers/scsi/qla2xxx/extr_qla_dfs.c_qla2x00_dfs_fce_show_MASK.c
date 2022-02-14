
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct seq_file {TYPE_1__* private; } ;
struct qla_hw_data {int fce_mutex; int fce_bufs; scalar_t__ fce_dma; scalar_t__ fce; int * fce_mb; scalar_t__ fce_wr; } ;
struct TYPE_2__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,...) ;

__attribute__((used)) static int
FUNC_4(struct seq_file *VAR_0, void *VAR_1)
{
 scsi_qla_host_t *VAR_2 = VAR_0->private;
 uint32_t VAR_3;
 uint32_t *VAR_4;
 uint64_t VAR_5;
 struct qla_hw_data *VAR_6 = VAR_2->hw;

 FUNC_1(&VAR_6->fce_mutex);

 FUNC_3(VAR_0, "FCE Trace Buffer\n");
 FUNC_3(VAR_0, "In Pointer = %llx\n\n", (unsigned long long)VAR_6->fce_wr);
 FUNC_3(VAR_0, "Base = %llx\n\n", (unsigned long long) VAR_6->fce_dma);
 FUNC_3(VAR_0, "FCE Enable Registers\n");
 FUNC_3(VAR_0, "%08x %08x %08x %08x %08x %08x\n",
     VAR_6->fce_mb[0], VAR_6->fce_mb[2], VAR_6->fce_mb[3], VAR_6->fce_mb[4],
     VAR_6->fce_mb[5], VAR_6->fce_mb[6]);

 VAR_4 = (uint32_t *) VAR_6->fce;
 VAR_5 = (unsigned long long) VAR_6->fce_dma;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_6->fce_bufs) / 4; VAR_3++) {
  if (VAR_3 % 8 == 0)
   FUNC_3(VAR_0, "\n%llx: ",
       (unsigned long long)((VAR_3 * 4) + VAR_5));
  else
   FUNC_3(VAR_0, " ");
  FUNC_3(VAR_0, "%08x", *VAR_4++);
 }

 FUNC_3(VAR_0, "\nEnd\n");

 FUNC_2(&VAR_6->fce_mutex);

 return 0;
}
