
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct cmng_init_input {int* vnic_max_rate; } ;
struct TYPE_2__ {int line_speed; } ;
struct bnx2x {int* mf_config; TYPE_1__ link_vars; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int VAR_1 ;
 int FUNC_2 (struct bnx2x*,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_2, int VAR_3,
        struct cmng_init_input *VAR_4)
{
 u16 VAR_5;
 u32 VAR_6 = VAR_2->mf_config[VAR_3];

 if (VAR_6 & VAR_0)
  VAR_5 = 0;
 else {
  u32 VAR_7 = FUNC_2(VAR_2, VAR_6);

  if (FUNC_1(VAR_2)) {

   VAR_5 = (VAR_2->link_vars.line_speed * VAR_7) / 100;
  } else

   VAR_5 = VAR_7 * 100;
 }

 FUNC_0(VAR_1, "vn %d: vn_max_rate %d\n", VAR_3, VAR_5);

 VAR_4->vnic_max_rate[VAR_3] = VAR_5;
}
