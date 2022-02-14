
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_host_cmd_pool {int users; void* cmd_slab; void* sense_slab; int slab_flags; int sense_name; int cmd_name; } ;
struct scsi_cmnd {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int,int ,int ,int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct scsi_host_cmd_pool VAR_3 ;
 struct scsi_host_cmd_pool VAR_4 ;

__attribute__((used)) static struct scsi_host_cmd_pool *FUNC_4(gfp_t VAR_5)
{
 struct scsi_host_cmd_pool *VAR_6 = ((void*)0), *VAR_7;




 FUNC_2(&VAR_2);
 VAR_7 = (VAR_5 & VAR_1) ? &VAR_3 :
  &VAR_4;
 if (!VAR_7->users) {
  VAR_7->cmd_slab = FUNC_0(VAR_7->cmd_name,
         sizeof(struct scsi_cmnd), 0,
         VAR_7->slab_flags, ((void*)0));
  if (!VAR_7->cmd_slab)
   goto fail;

  VAR_7->sense_slab = FUNC_0(VAR_7->sense_name,
           VAR_0, 0,
           VAR_7->slab_flags, ((void*)0));
  if (!VAR_7->sense_slab) {
   FUNC_1(VAR_7->cmd_slab);
   goto fail;
  }
 }

 VAR_7->users++;
 VAR_6 = VAR_7;
 fail:
 FUNC_3(&VAR_2);
 return VAR_6;
}
