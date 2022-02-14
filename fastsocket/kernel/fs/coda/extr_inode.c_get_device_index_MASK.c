
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct coda_mount_data {scalar_t__ version; int fd; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct file* FUNC_1 (int ) ;
 int FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct coda_mount_data *VAR_3)
{
 struct file *VAR_4;
 struct inode *VAR_5;
 int VAR_6;

 if(VAR_3 == ((void*)0)) {
  FUNC_5("coda_read_super: Bad mount data\n");
  return -1;
 }

 if(VAR_3->version != VAR_0) {
  FUNC_5("coda_read_super: Bad mount version\n");
  return -1;
 }

 VAR_4 = FUNC_1(VAR_3->fd);
 VAR_5 = ((void*)0);
 if(VAR_4)
  VAR_5 = VAR_4->f_path.dentry->d_inode;

 if(!VAR_5 || !FUNC_0(VAR_5->i_mode) ||
    FUNC_3(VAR_5) != VAR_1) {
  if(VAR_4)
   FUNC_2(VAR_4);

  FUNC_5("coda_read_super: Bad file\n");
  return -1;
 }

 VAR_6 = FUNC_4(VAR_5);
 FUNC_2(VAR_4);

 if(VAR_6 < 0 || VAR_6 >= VAR_2) {
  FUNC_5("coda_read_super: Bad minor number\n");
  return -1;
 }

 return VAR_6;
}
