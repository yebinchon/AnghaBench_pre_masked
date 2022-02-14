
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;
struct autofs_info {scalar_t__ last_used; } ;


 struct autofs_info* FUNC_0 (struct dentry*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct dentry *VAR_1,
     unsigned long VAR_2, int VAR_3)
{
 struct autofs_info *VAR_4 = FUNC_0(VAR_1);


 if (VAR_4 == ((void*)0))
  return 0;

 if (!VAR_3) {

  if (!VAR_2 || FUNC_1(VAR_4->last_used + VAR_2, VAR_0))
   return 0;





  VAR_4->last_used = VAR_0;
 }
 return 1;
}
