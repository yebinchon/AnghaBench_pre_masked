
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cfq_rb_root {int min_vdisktime; scalar_t__ left; scalar_t__ active; } ;
struct cfq_group {int vdisktime; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct cfq_group* FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct cfq_rb_root *VAR_0)
{
 u64 VAR_1 = VAR_0->min_vdisktime;
 struct cfq_group *VAR_2;

 if (VAR_0->active) {
  VAR_2 = FUNC_2(VAR_0->active);
  VAR_1 = VAR_2->vdisktime;
 }

 if (VAR_0->left) {
  VAR_2 = FUNC_2(VAR_0->left);
  VAR_1 = FUNC_1(VAR_1, VAR_2->vdisktime);
 }

 VAR_0->min_vdisktime = FUNC_0(VAR_0->min_vdisktime, VAR_1);
}
