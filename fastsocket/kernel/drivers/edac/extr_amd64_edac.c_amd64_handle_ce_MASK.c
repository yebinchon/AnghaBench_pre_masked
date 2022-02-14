
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct mce {int status; } ;
struct amd64_pvt {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* map_sysaddr_to_csrow ) (struct mem_ctl_info*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mem_ctl_info*,char*,...) ;
 int FUNC_1 (struct mem_ctl_info*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mce*) ;
 int FUNC_4 (struct mem_ctl_info*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct mem_ctl_info *VAR_2, struct mce *VAR_3)
{
 struct amd64_pvt *VAR_4 = VAR_2->pvt_info;
 u64 VAR_5;
 u16 VAR_6;


 if (!(VAR_3->status & VAR_1)) {
  FUNC_0(VAR_2, "HW has no ERROR_ADDRESS available\n");
  FUNC_1(VAR_2, VAR_0);
  return;
 }

 VAR_5 = FUNC_3(VAR_3);
 VAR_6 = FUNC_2(VAR_3->status);

 FUNC_0(VAR_2, "CE ERROR_ADDRESS= 0x%llx\n", VAR_5);

 VAR_4->ops->map_sysaddr_to_csrow(VAR_2, VAR_5, VAR_6);
}
