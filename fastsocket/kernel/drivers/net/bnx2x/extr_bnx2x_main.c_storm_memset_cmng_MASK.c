
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct rate_shaping_vars_per_vn {int dummy; } ;
struct fairness_vars_per_vn {int dummy; } ;
struct cmng_struct_per_port {int dummy; } ;
struct TYPE_2__ {int * vnic_min_rate; int * vnic_max_rate; } ;
struct cmng_init {TYPE_1__ vnic; int port; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct bnx2x*,scalar_t__,size_t,scalar_t__*) ;
 int FUNC_5 (struct bnx2x*,int) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_2,
         struct cmng_init *VAR_3,
         u8 VAR_4)
{
 int VAR_5;
 size_t VAR_6 = sizeof(struct cmng_struct_per_port);

 u32 VAR_7 = VAR_0 +
   FUNC_1(VAR_4);

 FUNC_4(VAR_2, VAR_7, VAR_6, (u32 *)&VAR_3->port);

 for (VAR_5 = VAR_1; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  int VAR_8 = FUNC_5(VAR_2, VAR_5);

  VAR_7 = VAR_0 +
         FUNC_3(VAR_8);
  VAR_6 = sizeof(struct rate_shaping_vars_per_vn);
  FUNC_4(VAR_2, VAR_7, VAR_6,
          (u32 *)&VAR_3->vnic.vnic_max_rate[VAR_5]);

  VAR_7 = VAR_0 +
         FUNC_2(VAR_8);
  VAR_6 = sizeof(struct fairness_vars_per_vn);
  FUNC_4(VAR_2, VAR_7, VAR_6,
          (u32 *)&VAR_3->vnic.vnic_min_rate[VAR_5]);
 }
}
