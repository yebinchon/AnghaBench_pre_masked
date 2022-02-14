
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pt_regs {int dummy; } ;
struct op_msrs {int dummy; } ;
struct op_entry {int dummy; } ;
struct TYPE_4__ {scalar_t__ op_enabled; scalar_t__ fetch_enabled; } ;
struct TYPE_3__ {int ibs_op_ctl; scalar_t__ branch_target; int sample_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_2__ VAR_19 ;
 TYPE_1__ VAR_20 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct op_entry*,unsigned long) ;
 int FUNC_2 (struct op_entry*,int) ;
 int FUNC_3 (struct op_entry*) ;
 int FUNC_4 (struct op_entry*,struct pt_regs* const,int,int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static inline void
FUNC_7(struct pt_regs * const VAR_21,
    struct op_msrs const * const VAR_22)
{
 u64 VAR_23, VAR_24;
 struct op_entry VAR_25;

 if (!VAR_18)
  return;

 if (VAR_19.fetch_enabled) {
  FUNC_5(VAR_10, VAR_24);
  if (VAR_24 & VAR_4) {
   FUNC_5(VAR_11, VAR_23);
   FUNC_4(&VAR_25, VAR_21, VAR_23,
            VAR_1, VAR_3);
   FUNC_2(&VAR_25, VAR_23);
   FUNC_2(&VAR_25, VAR_24);
   FUNC_5(VAR_12, VAR_23);
   FUNC_2(&VAR_25, VAR_23);
   FUNC_3(&VAR_25);


   VAR_24 &= ~(VAR_4 | VAR_0);
   VAR_24 |= VAR_2;
   FUNC_6(VAR_10, VAR_24);
  }
 }

 if (VAR_19.op_enabled) {
  FUNC_5(VAR_13, VAR_24);
  if (VAR_24 & VAR_6) {
   FUNC_5(VAR_17, VAR_23);
   FUNC_4(&VAR_25, VAR_21, VAR_23, VAR_5,
            VAR_20.sample_size);
   FUNC_2(&VAR_25, VAR_23);
   FUNC_5(VAR_14, VAR_23);
   FUNC_2(&VAR_25, VAR_23);
   FUNC_5(VAR_15, VAR_23);
   FUNC_2(&VAR_25, VAR_23);
   FUNC_5(VAR_16, VAR_23);
   FUNC_2(&VAR_25, VAR_23);
   FUNC_5(VAR_8, VAR_23);
   FUNC_2(&VAR_25, VAR_23);
   FUNC_5(VAR_9, VAR_23);
   FUNC_2(&VAR_25, VAR_23);
   if (VAR_20.branch_target) {
    FUNC_5(VAR_7, VAR_23);
    FUNC_1(&VAR_25, (unsigned long)VAR_23);
   }
   FUNC_3(&VAR_25);


   VAR_24 = FUNC_0(VAR_20.ibs_op_ctl);
   FUNC_6(VAR_13, VAR_24);
  }
 }
}
