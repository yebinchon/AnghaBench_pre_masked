
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct nameidata {int ni_flag; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1(vnode_t VAR_1, struct nameidata *VAR_2)
{
 if ((VAR_2->ni_flag & VAR_0) != 0) {
  return FUNC_0(VAR_1);
 }

 return 0;
}
