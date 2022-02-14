
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct amd64_pvt {int nbcfg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mem_ctl_info*,char*,unsigned long) ;
 int FUNC_2 (struct mem_ctl_info*,char*,int ) ;
 int FUNC_3 (struct mem_ctl_info*,int ,int ,int ,int,int,int ) ;
 int FUNC_4 (struct mem_ctl_info*,int ) ;
 int FUNC_5 (int,int *,int *) ;
 struct mem_ctl_info* FUNC_6 (struct mem_ctl_info*,int) ;
 int FUNC_7 (struct mem_ctl_info*,int ) ;
 int FUNC_8 (struct mem_ctl_info*,int) ;

__attribute__((used)) static void FUNC_9(struct mem_ctl_info *VAR_2, u64 VAR_3,
        u16 VAR_4)
{
 struct mem_ctl_info *VAR_5;
 struct amd64_pvt *VAR_6 = VAR_2->pvt_info;
 int VAR_7, VAR_8;
 u32 VAR_9, VAR_10;


 if (VAR_6->nbcfg & VAR_1) {
  VAR_7 = FUNC_7(VAR_2, VAR_4);
  if (VAR_7 < 0) {





   FUNC_2(VAR_2, "unknown syndrome 0x%04x - possible "
        "error reporting race\n", VAR_4);
   FUNC_4(VAR_2, VAR_0);
   return;
  }
 } else {
  VAR_7 = ((VAR_3 & FUNC_0(3)) != 0);
 }





 VAR_5 = FUNC_6(VAR_2, VAR_3);
 if (!VAR_5) {
  FUNC_1(VAR_2, "failed to map error addr 0x%lx to a node\n",
        (unsigned long)VAR_3);
  FUNC_4(VAR_2, VAR_0);
  return;
 }


 VAR_8 = FUNC_8(VAR_5, VAR_3);
 if (VAR_8 < 0) {
  FUNC_4(VAR_5, VAR_0);
 } else {
  FUNC_5(VAR_3, &VAR_9, &VAR_10);

  FUNC_3(VAR_5, VAR_9, VAR_10, VAR_4, VAR_8,
      VAR_7, VAR_0);
 }
}
