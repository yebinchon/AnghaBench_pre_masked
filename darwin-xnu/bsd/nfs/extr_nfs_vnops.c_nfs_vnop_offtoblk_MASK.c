
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
struct vnop_offtoblk_args {int a_offset; scalar_t__* a_lblkno; int a_vp; } ;
struct nfsmount {int nm_biosize; } ;
typedef scalar_t__ daddr64_t ;


 int VAR_0 ;
 struct nfsmount* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct nfsmount*) ;

int
FUNC_2(
 struct vnop_offtoblk_args *VAR_1)





{
 int VAR_2;
 vnode_t VAR_3 = VAR_1->a_vp;
 struct nfsmount *VAR_4 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_4))
  return (VAR_0);
 VAR_2 = VAR_4->nm_biosize;

 *VAR_1->a_lblkno = (daddr64_t)(VAR_1->a_offset / VAR_2);

 return (0);
}
