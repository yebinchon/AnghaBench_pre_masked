
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_status_struct {int buf_valid_size; int resp; int stat; int * buf; } ;
struct sas_task {struct task_status_struct task_status; } ;
struct dev_to_host_fis {int status; } ;
struct ata_task_resp {int frame_len; int ending_fis; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct dev_to_host_fis*,int) ;

__attribute__((used)) static void FUNC_1(struct sas_task *VAR_6, struct dev_to_host_fis *VAR_7)
{
 struct task_status_struct *VAR_8 = &VAR_6->task_status;
 struct ata_task_resp *VAR_9 = (void *)&VAR_8->buf[0];

 VAR_9->frame_len = sizeof(*VAR_7);
 FUNC_0(VAR_9->ending_fis, VAR_7, sizeof(*VAR_7));
 VAR_8->buf_valid_size = sizeof(*VAR_9);




 if (VAR_7->status & VAR_0)
  VAR_8->stat = VAR_4;
 else if (VAR_7->status & VAR_1)
  VAR_8->stat = VAR_2;
 else
  VAR_8->stat = VAR_3;

 VAR_8->resp = VAR_5;
}
