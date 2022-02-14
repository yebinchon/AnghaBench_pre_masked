
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_blktooff_args {void** a_offset; struct vnode* a_vp; } ;
struct vnode {int v_type; } ;
typedef void* off_t ;


 int VAR_0 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

int
FUNC_2(struct vnop_blktooff_args *VAR_1)
{
 struct vnode *VAR_2 = VAR_1->a_vp;

 switch (VAR_2->v_type) {
 case 128:
  *VAR_1->a_offset = (off_t)-1;
  return (VAR_0);

 case 129:
  FUNC_1("spec_blktooff: not implemented for VBLK\n");
  *VAR_1->a_offset = (off_t)-1;
  return (VAR_0);

 default:
  FUNC_0("spec_blktooff type");
 }


 return (0);
}
