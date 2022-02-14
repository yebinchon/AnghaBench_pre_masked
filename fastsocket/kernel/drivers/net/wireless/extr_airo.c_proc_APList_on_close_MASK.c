
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct proc_dir_entry {struct net_device* data; } ;
struct proc_data {int writelen; scalar_t__* wbuffer; } ;
struct net_device {struct airo_info* ml_priv; } ;
struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct airo_info {int dummy; } ;
struct TYPE_4__ {int** ap; int len; } ;
typedef int APList_rid ;
typedef TYPE_1__ APListRid ;


 struct proc_dir_entry* FUNC_0 (struct inode*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct airo_info*,int) ;
 int FUNC_3 (struct airo_info*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (struct airo_info*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_7( struct inode *VAR_0, struct file *VAR_1 ) {
 struct proc_data *VAR_2 = (struct proc_data *)VAR_1->private_data;
 struct proc_dir_entry *VAR_3 = FUNC_0(VAR_0);
 struct net_device *VAR_4 = VAR_3->data;
 struct airo_info *VAR_5 = VAR_4->ml_priv;
 APListRid VAR_6;
 int VAR_7;

 if ( !VAR_2->writelen ) return;

 FUNC_5( &VAR_6, 0, sizeof(VAR_6) );
 VAR_6.len = FUNC_1(sizeof(VAR_6));

 for( VAR_7 = 0; VAR_7 < 4 && VAR_2->writelen >= (VAR_7+1)*6*3; VAR_7++ ) {
  int VAR_8;
  for( VAR_8 = 0; VAR_8 < 6*3 && VAR_2->wbuffer[VAR_8+VAR_7*6*3]; VAR_8++ ) {
   switch(VAR_8%3) {
   case 0:
    VAR_6.ap[VAR_7][VAR_8/3]=
     FUNC_4(VAR_2->wbuffer[VAR_8+VAR_7*6*3])<<4;
    break;
   case 1:
    VAR_6.ap[VAR_7][VAR_8/3]|=
     FUNC_4(VAR_2->wbuffer[VAR_8+VAR_7*6*3]);
    break;
   }
  }
 }
 FUNC_2(VAR_5, 1);
 FUNC_6(VAR_5, &VAR_6, 1);
 FUNC_3(VAR_5, 1);
}
