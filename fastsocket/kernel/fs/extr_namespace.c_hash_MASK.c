
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct dentry {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static inline unsigned long FUNC_0(struct vfsmount *VAR_3, struct dentry *VAR_4)
{
 unsigned long VAR_5 = ((unsigned long)VAR_3 / VAR_2);
 VAR_5 += ((unsigned long)VAR_4 / VAR_2);
 VAR_5 = VAR_5 + (VAR_5 >> VAR_0);
 return VAR_5 & (VAR_1 - 1);
}
