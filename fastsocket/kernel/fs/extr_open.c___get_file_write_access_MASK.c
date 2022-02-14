
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct inode {int i_mode; } ;


 int FUNC_0 (struct vfsmount*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline int FUNC_4(struct inode *VAR_0,
       struct vfsmount *VAR_1)
{
 int VAR_2;
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;





 if (!FUNC_3(VAR_0->i_mode)) {



  VAR_2 = FUNC_0(VAR_1);
  if (VAR_2)
   FUNC_2(VAR_0);
 }
 return VAR_2;
}
