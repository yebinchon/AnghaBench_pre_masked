
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cmd_rcvr {unsigned char cmd; unsigned char netfn; unsigned int chans; int link; TYPE_1__* user; } ;
typedef TYPE_1__* ipmi_user_t ;
typedef TYPE_2__* ipmi_smi_t ;
struct TYPE_6__ {int cmd_rcvrs_mutex; int cmd_rcvrs; } ;
struct TYPE_5__ {TYPE_2__* intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,unsigned char,unsigned char,unsigned int) ;
 int FUNC_1 (struct cmd_rcvr*) ;
 struct cmd_rcvr* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(ipmi_user_t VAR_3,
     unsigned char VAR_4,
     unsigned char VAR_5,
     unsigned int VAR_6)
{
 ipmi_smi_t VAR_7 = VAR_3->intf;
 struct cmd_rcvr *VAR_8;
 int VAR_9 = 0;


 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;
 VAR_8->cmd = VAR_5;
 VAR_8->netfn = VAR_4;
 VAR_8->chans = VAR_6;
 VAR_8->user = VAR_3;

 FUNC_4(&VAR_7->cmd_rcvrs_mutex);

 if (!FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6)) {
  VAR_9 = -VAR_0;
  goto out_unlock;
 }

 FUNC_3(&VAR_8->link, &VAR_7->cmd_rcvrs);

 out_unlock:
 FUNC_5(&VAR_7->cmd_rcvrs_mutex);
 if (VAR_9)
  FUNC_1(VAR_8);

 return VAR_9;
}
