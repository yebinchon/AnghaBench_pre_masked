
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct fileglob {scalar_t__ fg_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fileglob*) ;
 int FUNC_1 (struct vnode*,char const*,char*,size_t) ;

int
FUNC_2(struct fileglob *VAR_2, const char *VAR_3, char *VAR_4, size_t VAR_5) {
 struct vnode *VAR_6 = ((void*)0);

 if (!VAR_2 || FUNC_0(VAR_2) != VAR_0) {
  return VAR_1;
 }

 VAR_6 = (struct vnode *)VAR_2->fg_data;
 return FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5);
}
