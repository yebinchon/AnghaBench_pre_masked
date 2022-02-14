
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aic7xxx_scb {TYPE_1__* hscb; scalar_t__ tag_action; scalar_t__ sg_length; scalar_t__ sg_count; int * cmd; int flags; } ;
struct aic7xxx_host {TYPE_2__* scb_data; } ;
struct TYPE_4__ {int free_scbs; } ;
struct TYPE_3__ {int target_channel_lun; scalar_t__ target_status; scalar_t__ control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct aic7xxx_scb*) ;

__attribute__((used)) static void
FUNC_1(struct aic7xxx_host *VAR_2, struct aic7xxx_scb *VAR_3)
{

  VAR_3->flags = VAR_0;
  VAR_3->cmd = ((void*)0);
  VAR_3->sg_count = 0;
  VAR_3->sg_length = 0;
  VAR_3->tag_action = 0;
  VAR_3->hscb->control = 0;
  VAR_3->hscb->target_status = 0;
  VAR_3->hscb->target_channel_lun = VAR_1;

  FUNC_0(&VAR_2->scb_data->free_scbs, VAR_3);
}
