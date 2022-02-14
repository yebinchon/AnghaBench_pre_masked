
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct proc_dir_entry {struct net_device* data; } ;
struct proc_data {char* wbuffer; int writelen; } ;
struct net_device {struct airo_info* ml_priv; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct airo_info {int dummy; } ;
struct TYPE_6__ {void* len; TYPE_1__* ssids; } ;
struct TYPE_5__ {void* len; int * ssid; } ;
typedef TYPE_2__ SsidRid ;
typedef int SSID_rid ;


 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct airo_info*,int) ;
 int FUNC_3 (struct airo_info*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (struct airo_info*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_0, struct file *VAR_1)
{
 struct proc_data *VAR_2 = (struct proc_data *)VAR_1->private_data;
 struct proc_dir_entry *VAR_3 = FUNC_0(VAR_0);
 struct net_device *VAR_4 = VAR_3->data;
 struct airo_info *VAR_5 = VAR_4->ml_priv;
 SsidRid VAR_6;
 int VAR_7;
 char *VAR_8 = VAR_2->wbuffer;
 char *VAR_9 = VAR_8 + VAR_2->writelen;

 if (!VAR_2->writelen)
  return;

 *VAR_9 = '\n';

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));

 for (VAR_7 = 0; VAR_7 < 3 && VAR_8 < VAR_9; VAR_7++) {
  int VAR_10 = 0;

  while (*VAR_8 != '\n' && VAR_10 < 32)
   VAR_6.ssids[VAR_7].ssid[VAR_10++] = *VAR_8++;
  if (VAR_10 == 0)
   break;
  VAR_6.ssids[VAR_7].len = FUNC_1(VAR_10);

  while (*VAR_8++ != '\n')
   ;
 }
 if (VAR_7)
  VAR_6.len = FUNC_1(sizeof(VAR_6));
 FUNC_2(VAR_5, 1);
 FUNC_5(VAR_5, &VAR_6, 1);
 FUNC_3(VAR_5, 1);
}
