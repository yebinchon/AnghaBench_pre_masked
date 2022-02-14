
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__* device; } ;
struct esp_cmd_entry {int flags; int list; int * sense_ptr; int sense_dma; struct scsi_cmnd* cmd; } ;
struct esp {TYPE_1__* ops; } ;
struct TYPE_4__ {int hostdata; } ;
struct TYPE_3__ {int (* unmap_single ) (struct esp*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct esp_cmd_entry*,int ) ;
 int FUNC_1 (struct esp*,struct esp_cmd_entry*) ;
 int FUNC_2 (struct esp*,struct scsi_cmnd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct esp*,int ,int ,int ) ;
 int FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_6(struct esp *VAR_4, struct esp_cmd_entry *VAR_5)
{
 struct scsi_cmnd *VAR_6 = VAR_5->cmd;

 FUNC_2(VAR_4, VAR_6);
 FUNC_0(VAR_5, VAR_6->device->hostdata);
 VAR_6->result = VAR_0 << 16;

 if (VAR_5->flags & VAR_2) {
  VAR_4->ops->unmap_single(VAR_4, VAR_5->sense_dma,
           VAR_3, VAR_1);
  VAR_5->sense_ptr = ((void*)0);
 }

 VAR_6->scsi_done(VAR_6);
 FUNC_3(&VAR_5->list);
 FUNC_1(VAR_4, VAR_5);
}
