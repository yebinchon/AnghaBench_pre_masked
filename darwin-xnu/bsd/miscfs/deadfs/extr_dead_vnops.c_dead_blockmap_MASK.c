
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_blockmap_args {int a_context; int a_flags; int a_poff; int a_run; int a_bpn; int a_size; int a_foffset; int a_vp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct vnop_blockmap_args *VAR_1)
{

 if (!FUNC_1(VAR_1->a_vp))
  return (VAR_0);
 return (FUNC_0(VAR_1->a_vp, VAR_1->a_foffset, VAR_1->a_size, VAR_1->a_bpn,
                  VAR_1->a_run, VAR_1->a_poff, VAR_1->a_flags, VAR_1->a_context));
}
