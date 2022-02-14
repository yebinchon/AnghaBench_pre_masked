
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proc_dir_entry {struct net_device* data; } ;
struct proc_data {char* rbuffer; int maxwritelen; int readlen; int on_close; int * wbuffer; scalar_t__ writelen; } ;
struct net_device {struct airo_info* ml_priv; } ;
struct inode {int dummy; } ;
struct file {char* private_data; } ;
struct airo_info {int dummy; } ;
struct TYPE_3__ {int ** ap; } ;
typedef TYPE_1__ APListRid ;


 int VAR_0 ;
 int VAR_1 ;
 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 void* FUNC_3 (int,int ) ;
 int VAR_2 ;
 int FUNC_4 (struct airo_info*,TYPE_1__*) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7( struct inode *VAR_3, struct file *VAR_4 ) {
 struct proc_data *VAR_5;
 struct proc_dir_entry *VAR_6 = FUNC_0(VAR_3);
 struct net_device *VAR_7 = VAR_6->data;
 struct airo_info *VAR_8 = VAR_7->ml_priv;
 int VAR_9;
 char *VAR_10;
 APListRid VAR_11;

 if ((VAR_4->private_data = FUNC_3(sizeof(struct proc_data ), VAR_1)) == ((void*)0))
  return -VAR_0;
 VAR_5 = (struct proc_data *)VAR_4->private_data;
 if ((VAR_5->rbuffer = FUNC_2( 104, VAR_1 )) == ((void*)0)) {
  FUNC_1 (VAR_4->private_data);
  return -VAR_0;
 }
 VAR_5->writelen = 0;
 VAR_5->maxwritelen = 4*6*3;
 if ((VAR_5->wbuffer = FUNC_3( VAR_5->maxwritelen, VAR_1 )) == ((void*)0)) {
  FUNC_1 (VAR_5->rbuffer);
  FUNC_1 (VAR_4->private_data);
  return -VAR_0;
 }
 VAR_5->on_close = VAR_2;

 FUNC_4(VAR_8, &VAR_11);
 VAR_10 = VAR_5->rbuffer;
 for( VAR_9 = 0; VAR_9 < 4; VAR_9++ ) {

  if ( !*(int*)VAR_11.ap[VAR_9] &&
       !*(int*)&VAR_11.ap[VAR_9][2]) break;
  VAR_10 += FUNC_5(VAR_10, "%pM\n", VAR_11.ap[VAR_9]);
 }
 if (VAR_9==0) VAR_10 += FUNC_5(VAR_10, "Not using specific APs\n");

 *VAR_10 = '\0';
 VAR_5->readlen = FUNC_6( VAR_5->rbuffer );
 return 0;
}
