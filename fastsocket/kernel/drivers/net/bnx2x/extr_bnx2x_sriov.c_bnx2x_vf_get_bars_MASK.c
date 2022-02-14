
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x_virtf {int * bars; } ;
struct bnx2x_vf_bar_info {int nr_bars; int * bars; } ;
struct bnx2x {TYPE_2__* vfdb; } ;
struct TYPE_3__ {int nres; } ;
struct TYPE_4__ {TYPE_1__ sriov; } ;



__attribute__((used)) static inline void FUNC_0(struct bnx2x *VAR_0, struct bnx2x_virtf *VAR_1,
         struct bnx2x_vf_bar_info *VAR_2)
{
 int VAR_3;

 VAR_2->nr_bars = VAR_0->vfdb->sriov.nres;
 for (VAR_3 = 0; VAR_3 < VAR_2->nr_bars; VAR_3++)
  VAR_2->bars[VAR_3] = VAR_1->bars[VAR_3];
}
