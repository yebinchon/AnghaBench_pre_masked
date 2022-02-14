
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {scalar_t__ private_data; TYPE_2__ f_path; } ;
typedef int poll_table ;
struct TYPE_8__ {TYPE_3__** drv; int info_waitq; } ;
struct TYPE_7__ {scalar_t__ stavail; int st_waitq; } ;
struct TYPE_5__ {int d_inode; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 TYPE_4__* VAR_10 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct file*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct file*,int *,int *) ;
 int FUNC_5 () ;

__attribute__((used)) static unsigned int
FUNC_6(struct file *VAR_11, poll_table * VAR_12)
{
 unsigned int VAR_13 = 0;
 unsigned int VAR_14 = FUNC_0(VAR_11->f_path.dentry->d_inode);
 int VAR_15 = FUNC_1(VAR_14 - VAR_0);

 FUNC_3();
 if (VAR_14 == VAR_3) {
  FUNC_4(VAR_11, &(VAR_10->info_waitq), VAR_12);

  if (VAR_11->private_data) {
   VAR_13 |= VAR_6 | VAR_8;
  }
  goto out;
 }
 if (VAR_14 >= VAR_0 && VAR_14 <= VAR_1) {
  if (VAR_15 < 0) {

   VAR_13 = VAR_5;
   goto out;
  }
  FUNC_4(VAR_11, &(VAR_10->drv[VAR_15]->st_waitq), VAR_12);
  VAR_13 = VAR_7 | VAR_9;
  if (VAR_10->drv[VAR_15]->stavail) {
   VAR_13 |= VAR_6 | VAR_8;
  }
  goto out;
 }






 VAR_13 = VAR_4;
 out:
 FUNC_5();
 return VAR_13;
}
