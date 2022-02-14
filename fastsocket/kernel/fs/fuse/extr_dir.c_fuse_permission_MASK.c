
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct fuse_conn {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct fuse_conn*) ;
 int FUNC_3 (struct inode*,int *,int *) ;
 int FUNC_4 (struct inode*,int *,int *,int*) ;
 int FUNC_5 (struct inode*,int,int *) ;
 struct fuse_conn* FUNC_6 (struct inode*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_5, int VAR_6)
{
 struct fuse_conn *VAR_7 = FUNC_6(VAR_5);
 bool VAR_8 = 0;
 int VAR_9 = 0;

 if (!FUNC_2(VAR_7))
  return -VAR_0;




 if ((VAR_7->flags & VAR_1) ||
     ((VAR_6 & VAR_3) && FUNC_0(VAR_5->i_mode))) {
  VAR_9 = FUNC_4(VAR_5, ((void*)0), ((void*)0), &VAR_8);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_7->flags & VAR_1) {
  VAR_9 = FUNC_5(VAR_5, VAR_6, ((void*)0));




  if (VAR_9 == -VAR_0 && !VAR_8) {
   VAR_9 = FUNC_3(VAR_5, ((void*)0), ((void*)0));
   if (!VAR_9)
    VAR_9 = FUNC_5(VAR_5, VAR_6, ((void*)0));
  }





 } else if (VAR_6 & VAR_2) {
  VAR_9 = FUNC_1(VAR_5, VAR_6);
 } else if ((VAR_6 & VAR_3) && FUNC_0(VAR_5->i_mode)) {
  if (!(VAR_5->i_mode & VAR_4)) {
   if (VAR_8)
    return -VAR_0;

   VAR_9 = FUNC_3(VAR_5, ((void*)0), ((void*)0));
   if (!VAR_9 && !(VAR_5->i_mode & VAR_4))
    return -VAR_0;
  }
 }
 return VAR_9;
}
