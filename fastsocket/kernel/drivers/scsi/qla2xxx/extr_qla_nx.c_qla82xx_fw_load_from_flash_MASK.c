
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct qla_hw_data {int flt_region_bootload; int hw_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct qla_hw_data*,long,int*,int) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*,long,int*) ;
 int FUNC_3 (struct qla_hw_data*,scalar_t__,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct qla_hw_data *VAR_4)
{
 int VAR_5;
 long VAR_6 = 0;
 long VAR_7 = VAR_4->flt_region_bootload << 2;
 long VAR_8 = VAR_0;
 u64 VAR_9;
 u32 VAR_10, VAR_11;
 VAR_6 = (VAR_1 - VAR_0) / 8;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  if ((FUNC_2(VAR_4, VAR_7, (int *)&VAR_11)) ||
      (FUNC_2(VAR_4, VAR_7 + 4, (int *)&VAR_10))) {
   return -1;
  }
  VAR_9 = ((u64)VAR_10 << 32) | VAR_11 ;
  FUNC_1(VAR_4, VAR_8, &VAR_9, 8);
  VAR_7 += 8;
  VAR_8 += 8;

  if (VAR_5 % 0x1000 == 0)
   FUNC_0(1);
 }
 FUNC_6(100);
 FUNC_4(&VAR_4->hw_lock);
 FUNC_3(VAR_4, VAR_2 + 0x18, 0x1020);
 FUNC_3(VAR_4, VAR_3, 0x80001e);
 FUNC_5(&VAR_4->hw_lock);
 return 0;
}
