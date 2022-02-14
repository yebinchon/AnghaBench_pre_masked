
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct req_que {int num_outstanding_cmds; void* outstanding_cmds; } ;
struct qla_hw_data {int fw_xcb_count; int fw_iocb_count; scalar_t__ mqiobase; } ;
typedef int srb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,int *,int,char*,struct req_que*) ;
 int VAR_7 ;

int
FUNC_4(struct qla_hw_data *VAR_8, struct req_que *VAR_9)
{

 if (VAR_9->outstanding_cmds)
  return VAR_4;






 if (!FUNC_0(VAR_8) || (VAR_8->mqiobase &&
     (VAR_6 || VAR_5 > 1)))
  VAR_9->num_outstanding_cmds = VAR_0;
 else {
  if (FUNC_2(VAR_8->fw_xcb_count, VAR_8->fw_iocb_count))
   VAR_9->num_outstanding_cmds = VAR_8->fw_xcb_count;
  else
   VAR_9->num_outstanding_cmds = VAR_8->fw_iocb_count;
 }

 VAR_9->outstanding_cmds = FUNC_1(sizeof(srb_t *) *
     VAR_9->num_outstanding_cmds, VAR_1);

 if (!VAR_9->outstanding_cmds) {




  VAR_9->num_outstanding_cmds = VAR_2;
  VAR_9->outstanding_cmds = FUNC_1(sizeof(srb_t *) *
      VAR_9->num_outstanding_cmds, VAR_1);

  if (!VAR_9->outstanding_cmds) {
   FUNC_3(VAR_7, ((void*)0), 0x0123,
       "Failed to allocate memory for "
       "outstanding_cmds for req_que %p.\n", VAR_9);
   VAR_9->num_outstanding_cmds = 0;
   return VAR_3;
  }
 }

 return VAR_4;
}
