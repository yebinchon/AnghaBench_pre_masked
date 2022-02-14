
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct proc_dir_entry {struct net_device* data; } ;
struct proc_data {char* rbuffer; int maxwritelen; int readlen; int on_close; int * wbuffer; scalar_t__ writelen; } ;
struct net_device {struct airo_info* ml_priv; } ;
struct inode {int dummy; } ;
struct file {char* private_data; } ;
struct airo_info {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ssids; } ;
struct TYPE_4__ {int * ssid; int len; } ;
typedef TYPE_2__ SsidRid ;


 int VAR_0 ;
 int VAR_1 ;
 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 void* FUNC_3 (int,int ) ;
 size_t FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (struct airo_info*,TYPE_2__*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct file *VAR_4)
{
 struct proc_data *VAR_5;
 struct proc_dir_entry *VAR_6 = FUNC_0(VAR_3);
 struct net_device *VAR_7 = VAR_6->data;
 struct airo_info *VAR_8 = VAR_7->ml_priv;
 int VAR_9;
 char *VAR_10;
 SsidRid VAR_11;

 if ((VAR_4->private_data = FUNC_3(sizeof(struct proc_data ), VAR_1)) == ((void*)0))
  return -VAR_0;
 VAR_5 = (struct proc_data *)VAR_4->private_data;
 if ((VAR_5->rbuffer = FUNC_2( 104, VAR_1 )) == ((void*)0)) {
  FUNC_1 (VAR_4->private_data);
  return -VAR_0;
 }
 VAR_5->writelen = 0;
 VAR_5->maxwritelen = 33*3;

 if ((VAR_5->wbuffer = FUNC_3(33*3 + 1, VAR_1)) == ((void*)0)) {
  FUNC_1 (VAR_5->rbuffer);
  FUNC_1 (VAR_4->private_data);
  return -VAR_0;
 }
 VAR_5->on_close = VAR_2;

 FUNC_5(VAR_8, &VAR_11);
 VAR_10 = VAR_5->rbuffer;
 for (VAR_9 = 0; VAR_9 < 3; VAR_9++) {
  int VAR_12;
  size_t VAR_13 = FUNC_4(VAR_11.ssids[VAR_9].len);
  if (!VAR_13)
   break;
  if (VAR_13 > 32)
   VAR_13 = 32;
  for (VAR_12 = 0; VAR_12 < VAR_13 && VAR_11.ssids[VAR_9].ssid[VAR_12]; VAR_12++)
   *VAR_10++ = VAR_11.ssids[VAR_9].ssid[VAR_12];
  *VAR_10++ = '\n';
 }
 *VAR_10 = '\0';
 VAR_5->readlen = FUNC_6( VAR_5->rbuffer );
 return 0;
}
