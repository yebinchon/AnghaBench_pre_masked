
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct rsxx_cardinfo* private; } ;
struct rsxx_cardinfo {int n_targets; TYPE_2__* ctrl; } ;
struct TYPE_3__ {int hw_q_depth; int sw_q_depth; int dma_cancelled; int dma_hw_fault; int dma_sw_err; int discards_failed; int discards_issued; int reads_retried; int reads_failed; int reads_issued; int writes_failed; int writes_issued; int soft_errors; int hard_errors; int crc_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct seq_file*,char*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct rsxx_cardinfo *VAR_2 = VAR_0->private;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->n_targets; VAR_3++) {
  FUNC_1(VAR_0, "Ctrl %d CRC Errors	= %d\n",
    VAR_3, VAR_2->ctrl[VAR_3].stats.crc_errors);
  FUNC_1(VAR_0, "Ctrl %d Hard Errors	= %d\n",
    VAR_3, VAR_2->ctrl[VAR_3].stats.hard_errors);
  FUNC_1(VAR_0, "Ctrl %d Soft Errors	= %d\n",
    VAR_3, VAR_2->ctrl[VAR_3].stats.soft_errors);
  FUNC_1(VAR_0, "Ctrl %d Writes Issued	= %d\n",
    VAR_3, VAR_2->ctrl[VAR_3].stats.writes_issued);
  FUNC_1(VAR_0, "Ctrl %d Writes Failed	= %d\n",
    VAR_3, VAR_2->ctrl[VAR_3].stats.writes_failed);
  FUNC_1(VAR_0, "Ctrl %d Reads Issued	= %d\n",
    VAR_3, VAR_2->ctrl[VAR_3].stats.reads_issued);
  FUNC_1(VAR_0, "Ctrl %d Reads Failed	= %d\n",
    VAR_3, VAR_2->ctrl[VAR_3].stats.reads_failed);
  FUNC_1(VAR_0, "Ctrl %d Reads Retried	= %d\n",
    VAR_3, VAR_2->ctrl[VAR_3].stats.reads_retried);
  FUNC_1(VAR_0, "Ctrl %d Discards Issued	= %d\n",
    VAR_3, VAR_2->ctrl[VAR_3].stats.discards_issued);
  FUNC_1(VAR_0, "Ctrl %d Discards Failed	= %d\n",
    VAR_3, VAR_2->ctrl[VAR_3].stats.discards_failed);
  FUNC_1(VAR_0, "Ctrl %d DMA SW Errors	= %d\n",
    VAR_3, VAR_2->ctrl[VAR_3].stats.dma_sw_err);
  FUNC_1(VAR_0, "Ctrl %d DMA HW Faults	= %d\n",
    VAR_3, VAR_2->ctrl[VAR_3].stats.dma_hw_fault);
  FUNC_1(VAR_0, "Ctrl %d DMAs Cancelled	= %d\n",
    VAR_3, VAR_2->ctrl[VAR_3].stats.dma_cancelled);
  FUNC_1(VAR_0, "Ctrl %d SW Queue Depth	= %d\n",
    VAR_3, VAR_2->ctrl[VAR_3].stats.sw_q_depth);
  FUNC_1(VAR_0, "Ctrl %d HW Queue Depth	= %d\n",
   VAR_3, FUNC_0(&VAR_2->ctrl[VAR_3].stats.hw_q_depth));
 }

 return 0;
}
