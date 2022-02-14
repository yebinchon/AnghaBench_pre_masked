
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_flags; int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_8, struct file *VAR_9)
{
 FUNC_0();
 FUNC_1(&VAR_7);

 if ((VAR_5 && (VAR_9->f_flags & VAR_4)) ||
     (VAR_6 & VAR_2) ||
     ((VAR_9->f_mode & VAR_1) && (VAR_6 & VAR_3))) {
  FUNC_2(&VAR_7);
  FUNC_3();
  return -VAR_0;
 }

 if (VAR_9->f_flags & VAR_4)
  VAR_6 |= VAR_2;
 if (VAR_9->f_mode & VAR_1)
  VAR_6 |= VAR_3;
 VAR_5++;

 FUNC_2(&VAR_7);
 FUNC_3();

 return 0;
}
