
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct mem_ctl_info {int dummy; } ;
struct mce {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mem_ctl_info*,char*,...) ;
 int FUNC_1 (struct mem_ctl_info*,int ,int ,int,int ) ;
 int FUNC_2 (struct mem_ctl_info*,int ) ;
 int FUNC_3 (scalar_t__,int *,int *) ;
 struct mem_ctl_info* FUNC_4 (struct mem_ctl_info*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct mce*) ;
 int FUNC_6 (struct mem_ctl_info*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct mem_ctl_info *VAR_2, struct mce *VAR_3)
{
 struct mem_ctl_info *VAR_4, *VAR_5 = ((void*)0);
 int VAR_6;
 u64 VAR_7;
 u32 VAR_8, VAR_9;

 VAR_4 = VAR_2;

 if (!(VAR_3->status & VAR_1)) {
  FUNC_0(VAR_2, "HW has no ERROR_ADDRESS available\n");
  FUNC_2(VAR_4, VAR_0);
  return;
 }

 VAR_7 = FUNC_5(VAR_3);





 VAR_5 = FUNC_4(VAR_2, VAR_7);
 if (!VAR_5) {
  FUNC_0(VAR_2, "ERROR ADDRESS (0x%lx) NOT mapped to a MC\n",
      (unsigned long)VAR_7);
  FUNC_2(VAR_4, VAR_0);
  return;
 }

 VAR_4 = VAR_5;

 VAR_6 = FUNC_6(VAR_4, VAR_7);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2, "ERROR_ADDRESS (0x%lx) NOT mapped to CS\n",
      (unsigned long)VAR_7);
  FUNC_2(VAR_4, VAR_0);
 } else {
  FUNC_3(VAR_7, &VAR_8, &VAR_9);
  FUNC_1(VAR_4, VAR_8, VAR_9, VAR_6, VAR_0);
 }
}
