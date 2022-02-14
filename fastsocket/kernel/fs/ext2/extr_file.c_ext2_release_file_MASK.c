
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_mode; } ;
struct TYPE_2__ {int truncate_mutex; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4 (struct inode * VAR_1, struct file * VAR_2)
{
 if (VAR_2->f_mode & VAR_0) {
  FUNC_2(&FUNC_0(VAR_1)->truncate_mutex);
  FUNC_1(VAR_1);
  FUNC_3(&FUNC_0(VAR_1)->truncate_mutex);
 }
 return 0;
}
