
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct cs_blob {int dummy; } ;
typedef int off_t ;


 char const* FUNC_0 (struct cs_blob*) ;
 struct cs_blob* FUNC_1 (struct vnode*,int,int ) ;

const char *
FUNC_2(struct vnode *VAR_0, off_t VAR_1)
{
 struct cs_blob *VAR_2;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_0, -1, VAR_1);
 if (VAR_2 == ((void*)0))
     return ((void*)0);

 return FUNC_0(VAR_2);
}
