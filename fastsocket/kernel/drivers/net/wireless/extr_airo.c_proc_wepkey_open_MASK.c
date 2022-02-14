
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wkr ;
struct proc_dir_entry {struct net_device* data; } ;
struct proc_data {char* rbuffer; int maxwritelen; int readlen; int on_close; int * wbuffer; scalar_t__ writelen; } ;
struct net_device {struct airo_info* ml_priv; } ;
struct inode {int dummy; } ;
struct file {char* private_data; } ;
struct airo_info {int dummy; } ;
typedef scalar_t__ __le16 ;
struct TYPE_4__ {scalar_t__ kindex; scalar_t__ klen; scalar_t__* mac; } ;
typedef TYPE_1__ WepKeyRid ;


 int VAR_0 ;
 int VAR_1 ;
 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 int FUNC_6 (struct airo_info*,TYPE_1__*,int,int) ;
 scalar_t__ FUNC_7 (char*,char*,int,...) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10( struct inode *VAR_4, struct file *VAR_5 )
{
 struct proc_data *VAR_6;
 struct proc_dir_entry *VAR_7 = FUNC_0(VAR_4);
 struct net_device *VAR_8 = VAR_7->data;
 struct airo_info *VAR_9 = VAR_8->ml_priv;
 char *VAR_10;
 WepKeyRid VAR_11;
 __le16 VAR_12;
 int VAR_13=0;
 int VAR_14;

 if ((VAR_5->private_data = FUNC_3(sizeof(struct proc_data ), VAR_1)) == ((void*)0))
  return -VAR_0;
 FUNC_5(&VAR_11, 0, sizeof(VAR_11));
 VAR_6 = (struct proc_data *)VAR_5->private_data;
 if ((VAR_6->rbuffer = FUNC_3( 180, VAR_1 )) == ((void*)0)) {
  FUNC_2 (VAR_5->private_data);
  return -VAR_0;
 }
 VAR_6->writelen = 0;
 VAR_6->maxwritelen = 80;
 if ((VAR_6->wbuffer = FUNC_3( 80, VAR_1 )) == ((void*)0)) {
  FUNC_2 (VAR_6->rbuffer);
  FUNC_2 (VAR_5->private_data);
  return -VAR_0;
 }
 VAR_6->on_close = VAR_3;

 VAR_10 = VAR_6->rbuffer;
 FUNC_8(VAR_10, "No wep keys\n");
 VAR_14 = FUNC_6(VAR_9, &VAR_11, 1, 1);
 if (VAR_14 == VAR_2) do {
  VAR_12 = VAR_11.kindex;
  if (VAR_11.kindex == FUNC_1(0xffff)) {
   VAR_13 += FUNC_7(VAR_10+VAR_13, "Tx key = %d\n",
         (int)VAR_11.mac[0]);
  } else {
   VAR_13 += FUNC_7(VAR_10+VAR_13, "Key %d set with length = %d\n",
         FUNC_4(VAR_11.kindex),
         FUNC_4(VAR_11.klen));
  }
  FUNC_6(VAR_9, &VAR_11, 0, 1);
 } while((VAR_12 != VAR_11.kindex) && (VAR_13 < 180-30));

 VAR_6->readlen = FUNC_9( VAR_6->rbuffer );
 return 0;
}
