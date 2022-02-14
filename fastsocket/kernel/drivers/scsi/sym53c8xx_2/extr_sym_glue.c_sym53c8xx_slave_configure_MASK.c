
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sym_tcb {int usrtags; } ;
struct TYPE_3__ {int scdev_depth; } ;
struct sym_lcb {TYPE_1__ s; int user_flags; int curr_flags; } ;
struct sym_hcb {struct sym_tcb* target; } ;
struct scsi_device {size_t id; int sdev_target; int lun; scalar_t__ tagged_supported; int host; } ;
struct TYPE_4__ {int max_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_device*,int ,int) ;
 int FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_2 ;
 struct sym_hcb* FUNC_3 (int ) ;
 struct sym_lcb* FUNC_4 (struct sym_tcb*,int ) ;
 int FUNC_5 (struct sym_tcb*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct scsi_device *VAR_3)
{
 struct sym_hcb *VAR_4 = FUNC_3(VAR_3->host);
 struct sym_tcb *VAR_5 = &VAR_4->target[VAR_3->id];
 struct sym_lcb *VAR_6 = FUNC_4(VAR_5, VAR_3->lun);
 int VAR_7, VAR_8;




 VAR_6->curr_flags = VAR_6->user_flags;







 VAR_7 = VAR_2.max_tag;
 if (VAR_7 > VAR_5->usrtags)
  VAR_7 = VAR_5->usrtags;
 if (!VAR_3->tagged_supported)
  VAR_7 = 0;
 if (VAR_7 > VAR_1)
  VAR_7 = VAR_1;
 VAR_8 = VAR_7 ? VAR_7 : 1;
 FUNC_0(VAR_3,
    VAR_3->tagged_supported ? VAR_0 : 0,
    VAR_8);
 VAR_6->s.scdev_depth = VAR_8;
 FUNC_5(VAR_5, VAR_3->lun, VAR_7);

 if (!FUNC_2(VAR_3->sdev_target))
  FUNC_1(VAR_3);

 return 0;
}
