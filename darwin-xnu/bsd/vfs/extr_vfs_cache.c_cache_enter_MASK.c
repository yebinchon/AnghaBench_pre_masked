
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct componentname {scalar_t__ cn_hash; int cn_namelen; int cn_nameptr; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_3 (struct vnode*,struct vnode*,struct componentname*,char const*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

void
FUNC_5(struct vnode *VAR_1, struct vnode *VAR_2, struct componentname *VAR_3)
{
 const char *VAR_4;

        if (VAR_3->cn_hash == 0)
         VAR_3->cn_hash = FUNC_4(VAR_3->cn_nameptr, VAR_3->cn_namelen);





 VAR_4 = FUNC_2(VAR_3->cn_nameptr, VAR_3->cn_namelen, VAR_3->cn_hash, VAR_0, 0);

 FUNC_0();

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_1();
}
