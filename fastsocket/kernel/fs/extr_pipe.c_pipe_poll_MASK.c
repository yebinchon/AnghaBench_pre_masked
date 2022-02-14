
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pipe_inode_info {int nrbufs; scalar_t__ w_counter; int readers; int writers; int wait; } ;
struct inode {struct pipe_inode_info* i_pipe; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {int f_mode; scalar_t__ f_version; TYPE_2__ f_path; } ;
typedef int poll_table ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int
FUNC_1(struct file *VAR_9, poll_table *VAR_10)
{
 unsigned int VAR_11;
 struct inode *VAR_12 = VAR_9->f_path.dentry->d_inode;
 struct pipe_inode_info *VAR_13 = VAR_12->i_pipe;
 int VAR_14;

 FUNC_0(VAR_9, &VAR_13->wait, VAR_10);


 VAR_14 = VAR_13->nrbufs;
 VAR_11 = 0;
 if (VAR_9->f_mode & VAR_0) {
  VAR_11 = (VAR_14 > 0) ? VAR_5 | VAR_7 : 0;
  if (!VAR_13->writers && VAR_9->f_version != VAR_13->w_counter)
   VAR_11 |= VAR_4;
 }

 if (VAR_9->f_mode & VAR_1) {
  VAR_11 |= (VAR_14 < VAR_2) ? VAR_6 | VAR_8 : 0;




  if (!VAR_13->readers)
   VAR_11 |= VAR_3;
 }

 return VAR_11;
}
