
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int list; } ;
struct Scsi_Host {int free_list; int * cmd_pool; int free_list_lock; scalar_t__ unchecked_isa_dma; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int const) ;
 struct scsi_cmnd* FUNC_3 (struct Scsi_Host*,int const) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct Scsi_Host *VAR_3)
{
 struct scsi_cmnd *VAR_4;
 const gfp_t VAR_5 = VAR_3->unchecked_isa_dma ? VAR_1 : VAR_2;

 FUNC_5(&VAR_3->free_list_lock);
 FUNC_0(&VAR_3->free_list);

 VAR_3->cmd_pool = FUNC_2(VAR_5);

 if (!VAR_3->cmd_pool)
  return -VAR_0;




 VAR_4 = FUNC_3(VAR_3, VAR_5);
 if (!VAR_4) {
  FUNC_4(VAR_5);
  VAR_3->cmd_pool = ((void*)0);
  return -VAR_0;
 }
 FUNC_1(&VAR_4->list, &VAR_3->free_list);
 return 0;
}
