
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int off_t ;
typedef int daddr64_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;

off_t
FUNC_2(vnode_t VAR_0, daddr64_t VAR_1)
{
 off_t VAR_2 = -1;
 int VAR_3;

 if (FUNC_0(VAR_0)) {
  VAR_3 = FUNC_1(VAR_0, VAR_1, &VAR_2);
  if (VAR_3)
   VAR_2 = -1;
 }

 return (VAR_2);
}
