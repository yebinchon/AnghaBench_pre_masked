
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vnode_t ;
typedef int vfs_context_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,uintptr_t,int ) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int,int ) ;

__attribute__((used)) static int
FUNC_4(vnode_t VAR_1, int VAR_2, vfs_context_t VAR_3)
{
 int VAR_4;

 if ((VAR_4 = FUNC_3(VAR_1, VAR_2, 0)) != 0) {
  goto bad;
 }







 FUNC_0(FUNC_2(VAR_3), VAR_0,
         (uintptr_t)VAR_1, 0);

 return 0;

bad:
 return VAR_4;

}
