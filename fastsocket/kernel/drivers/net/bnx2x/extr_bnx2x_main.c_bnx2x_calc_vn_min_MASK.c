
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cmng_enables; } ;
struct cmng_init_input {int* vnic_min_rate; TYPE_1__ flags; } ;
struct bnx2x {int* mf_config; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_7,
          struct cmng_init_input *VAR_8)
{
 int VAR_9 = 1;
 int VAR_10;

 for (VAR_10 = VAR_6; VAR_10 < FUNC_1(VAR_7); VAR_10++) {
  u32 VAR_11 = VAR_7->mf_config[VAR_10];
  u32 VAR_12 = ((VAR_11 & VAR_3) >>
       VAR_4) * 100;


  if (VAR_11 & VAR_2)
   VAR_12 = 0;

  else if (!VAR_12)
   VAR_12 = VAR_1;
  else
   VAR_9 = 0;

  VAR_8->vnic_min_rate[VAR_10] = VAR_12;
 }


 if (FUNC_0(VAR_7)) {
  VAR_8->flags.cmng_enables &=
     ~VAR_0;
  FUNC_2(VAR_5, "Fairness will be disabled due to ETS\n");
 } else if (VAR_9) {
  VAR_8->flags.cmng_enables &=
     ~VAR_0;
  FUNC_2(VAR_5,
     "All MIN values are zeroes fairness will be disabled\n");
 } else
  VAR_8->flags.cmng_enables |=
     VAR_0;
}
