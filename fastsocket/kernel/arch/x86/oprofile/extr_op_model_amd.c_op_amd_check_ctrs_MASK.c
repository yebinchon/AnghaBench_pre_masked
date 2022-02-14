
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pt_regs {int dummy; } ;
struct op_msrs {TYPE_1__* counters; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pt_regs* const,struct op_msrs const* const) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pt_regs* const,int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__* VAR_2 ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct pt_regs * const VAR_3,
        struct op_msrs const * const VAR_4)
{
 u64 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  int VAR_7 = FUNC_1(VAR_6);
  if (!VAR_2[VAR_7])
   continue;
  FUNC_3(VAR_4->counters[VAR_6].addr, VAR_5);

  if (VAR_5 & VAR_0)
   continue;
  FUNC_2(VAR_3, VAR_7);
  FUNC_4(VAR_4->counters[VAR_6].addr, -(u64)VAR_2[VAR_7]);
 }

 FUNC_0(VAR_3, VAR_4);


 return 1;
}
