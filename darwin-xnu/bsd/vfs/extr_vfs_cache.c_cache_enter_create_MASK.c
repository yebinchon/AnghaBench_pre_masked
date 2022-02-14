
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct componentname {scalar_t__ cn_hash; int cn_namelen; int cn_nameptr; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 char* FUNC_2 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,int ,struct componentname*,char const*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

const char *
FUNC_5(vnode_t VAR_1, vnode_t VAR_2, struct componentname *VAR_3)
{
 const char *VAR_4;

        if (VAR_3->cn_hash == 0)
         VAR_3->cn_hash = FUNC_4(VAR_3->cn_nameptr, VAR_3->cn_namelen);






 VAR_4 = FUNC_2(VAR_3->cn_nameptr, VAR_3->cn_namelen, VAR_3->cn_hash, VAR_0, 0);

 FUNC_0();

 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);

 FUNC_1();

 return (VAR_4);
}
