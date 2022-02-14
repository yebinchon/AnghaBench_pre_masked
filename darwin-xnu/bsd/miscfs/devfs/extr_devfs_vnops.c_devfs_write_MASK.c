
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnop_write_args {TYPE_1__* a_vp; } ;
struct TYPE_2__ {int v_type; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (char*,int) ;

__attribute__((used)) static int
FUNC_1(struct vnop_write_args *VAR_2)






{
 switch (VAR_2->a_vp->v_type) {
 case 128:
  return(VAR_1);
 default:
  FUNC_0("devfs_write(): bad file type %d", VAR_2->a_vp->v_type);
  return (VAR_0);
 }
}
