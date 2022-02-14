
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sbp2_lu {int cmd_orb_completed; TYPE_3__* hi; } ;
struct sbp2_command_orb {int dummy; } ;
struct sbp2_command_info {void* command_orb_dma; int list; void* sge_dma; int scatter_gather_element; int command_orb; } ;
struct device {int dummy; } ;
struct TYPE_6__ {TYPE_2__* host; } ;
struct TYPE_4__ {struct device* parent; } ;
struct TYPE_5__ {TYPE_1__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 void* FUNC_1 (struct device*,int *,int,int ) ;
 scalar_t__ FUNC_2 (struct device*,void*) ;
 int FUNC_3 (struct device*,void*,int,int ) ;
 int FUNC_4 (struct sbp2_command_info*) ;
 struct sbp2_command_info* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_7(struct sbp2_lu *VAR_5)
{
 struct sbp2_command_info *VAR_6;
 struct device *VAR_7 = VAR_5->hi->host->device.parent;
 int VAR_8, VAR_9 = VAR_4 ? 2 : VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_2);
  if (!VAR_6)
   goto failed_alloc;

  VAR_6->command_orb_dma =
      FUNC_1(VAR_7, &VAR_6->command_orb,
       sizeof(struct sbp2_command_orb),
       VAR_0);
  if (FUNC_2(VAR_7, VAR_6->command_orb_dma))
   goto failed_orb;

  VAR_6->sge_dma =
      FUNC_1(VAR_7, &VAR_6->scatter_gather_element,
       sizeof(VAR_6->scatter_gather_element),
       VAR_0);
  if (FUNC_2(VAR_7, VAR_6->sge_dma))
   goto failed_sge;

  FUNC_0(&VAR_6->list);
  FUNC_6(&VAR_6->list, &VAR_5->cmd_orb_completed);
 }
 return 0;

failed_sge:
 FUNC_3(VAR_7, VAR_6->command_orb_dma,
    sizeof(struct sbp2_command_orb), VAR_0);
failed_orb:
 FUNC_4(VAR_6);
failed_alloc:
 return -VAR_1;
}
