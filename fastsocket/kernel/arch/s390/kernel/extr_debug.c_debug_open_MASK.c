
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_14__ {TYPE_2__* dentry; } ;
struct file {TYPE_5__* private_data; TYPE_3__ f_path; } ;
struct TYPE_16__ {scalar_t__ act_entry_offset; int act_entry; scalar_t__ act_page; scalar_t__ act_area; TYPE_4__* view; TYPE_6__* debug_info_org; TYPE_6__* debug_info_snap; scalar_t__ offset; } ;
typedef TYPE_5__ file_private_info_t ;
struct TYPE_17__ {TYPE_4__** views; TYPE_2__** debugfs_entries; } ;
typedef TYPE_6__ debug_info_t ;
struct TYPE_15__ {int header_proc; int format_proc; } ;
struct TYPE_13__ {TYPE_1__* d_inode; } ;
struct TYPE_12__ {TYPE_6__* i_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_6__* FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_7 ;
 TYPE_5__* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_8, struct file *VAR_9)
{
 int VAR_10, VAR_11 = 0;
 file_private_info_t *VAR_12;
 debug_info_t *VAR_13, *VAR_14;

 FUNC_4(&VAR_7);
 VAR_13 = VAR_9->f_path.dentry->d_inode->i_private;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (!VAR_13->views[VAR_10])
   continue;
  else if (VAR_13->debugfs_entries[VAR_10] ==
    VAR_9->f_path.dentry) {
   goto found;
  }
 }

 VAR_11 = -VAR_3;
 goto out;

found:





 if(!VAR_13->views[VAR_10]->format_proc &&
  !VAR_13->views[VAR_10]->header_proc){
  VAR_14 = FUNC_0(VAR_13, VAR_6);
 } else {
  VAR_14 = FUNC_0(VAR_13, VAR_0);
 }

 if(!VAR_14){
  VAR_11 = -VAR_4;
  goto out;
 }
 VAR_12 = FUNC_3(sizeof(file_private_info_t),
      VAR_5);
 if(!VAR_12){
  FUNC_1(VAR_14);
  VAR_11 = -VAR_4;
  goto out;
 }
 VAR_12->offset = 0;
 VAR_12->debug_info_snap = VAR_14;
 VAR_12->debug_info_org = VAR_13;
 VAR_12->view = VAR_13->views[VAR_10];
 VAR_12->act_area = 0;
 VAR_12->act_page = 0;
 VAR_12->act_entry = VAR_2;
 VAR_12->act_entry_offset = 0;
 VAR_9->private_data = VAR_12;
 FUNC_2(VAR_13);
out:
 FUNC_5(&VAR_7);
 return VAR_11;
}
