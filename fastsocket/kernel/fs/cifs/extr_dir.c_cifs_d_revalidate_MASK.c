
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int flags; } ;
struct dentry {int d_flags; scalar_t__ d_time; int d_lock; scalar_t__ d_inode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct dentry *VAR_8, struct nameidata *VAR_9)
{
 if (VAR_8->d_inode) {
  if (FUNC_1(VAR_8))
   return 0;
  else {







   if (FUNC_0(VAR_8->d_inode) &&
      !(VAR_8->d_flags & VAR_0)) {
    FUNC_2(&VAR_8->d_lock);
    VAR_8->d_flags |= VAR_0;
    FUNC_3(&VAR_8->d_lock);
   }

   return 1;
  }
 }





 if (!VAR_9)
  return 0;






 if (!(VAR_9->flags & (VAR_2 | VAR_4))) {
  if (VAR_9->flags & (VAR_3 | VAR_5))
   return 0;
 }

 if (FUNC_4(VAR_6, VAR_8->d_time + VAR_1) || !VAR_7)
  return 0;

 return 1;
}
