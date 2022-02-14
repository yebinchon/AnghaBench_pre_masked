
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct autofs_info {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct autofs_info* FUNC_0 (struct dentry*) ;

__attribute__((used)) static inline int FUNC_1(struct dentry *VAR_2)
{
 struct autofs_info *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->flags & VAR_1)
  return 1;

 if (VAR_3->flags & VAR_0)
  return 1;

 return 0;
}
