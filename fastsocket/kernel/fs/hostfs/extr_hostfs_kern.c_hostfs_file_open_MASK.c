
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {int dentry; } ;
struct file {int f_mode; TYPE_1__ f_path; } ;
typedef int fmode_t ;
struct TYPE_6__ {int fd; } ;
struct TYPE_5__ {int mode; int fd; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct file*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int FUNC_2 (int*) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int,int ) ;

int FUNC_6(struct inode *VAR_4, struct file *VAR_5)
{
 char *VAR_6;
 fmode_t VAR_7 = 0;
 int VAR_8 = 0, VAR_9 = 0, VAR_10;

 VAR_7 = VAR_5->f_mode & (VAR_1 | VAR_2);
 if ((VAR_7 & FUNC_1(VAR_4)->mode) == VAR_7)
  return 0;





 if (FUNC_1(VAR_4)->fd != -1) {
  FUNC_2(&FUNC_1(VAR_4)->fd);
  FUNC_1(VAR_4)->fd = -1;
 }

 FUNC_1(VAR_4)->mode |= VAR_7;
 if (FUNC_1(VAR_4)->mode & VAR_1)
  VAR_8 = 1;
 if (FUNC_1(VAR_4)->mode & VAR_2)
  VAR_9 = 1;
 if (VAR_9)
  VAR_8 = 1;

 VAR_6 = FUNC_3(VAR_5->f_path.dentry, 0);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_6, VAR_8, VAR_9, VAR_3);
 FUNC_4(VAR_6);
 if (VAR_10 < 0)
  return VAR_10;
 FUNC_0(VAR_5)->fd = VAR_10;

 return 0;
}
