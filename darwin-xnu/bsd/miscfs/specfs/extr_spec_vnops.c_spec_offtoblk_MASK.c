
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_offtoblk_args {void** a_lblkno; struct vnode* a_vp; } ;
struct vnode {int v_type; } ;
typedef void* daddr64_t ;


 int VAR_0 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

int
FUNC_2(struct vnop_offtoblk_args *VAR_1)
{
 struct vnode *VAR_2 = VAR_1->a_vp;

 switch (VAR_2->v_type) {
 case 128:
  *VAR_1->a_lblkno = (daddr64_t)-1;
  return (VAR_0);

 case 129:
  FUNC_1("spec_offtoblk: not implemented for VBLK\n");
  *VAR_1->a_lblkno = (daddr64_t)-1;
  return (VAR_0);

 default:
  FUNC_0("spec_offtoblk type");
 }


 return (0);
}
