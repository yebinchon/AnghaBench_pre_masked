
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
typedef int u32 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct amd64_pvt {unsigned int mc_node_id; } ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int,int) ;
 int FUNC_2 (char*,unsigned long,...) ;
 int FUNC_3 (struct amd64_pvt*,int ) ;
 int FUNC_4 (struct amd64_pvt*,unsigned int) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static u64 FUNC_6(struct mem_ctl_info *VAR_0, u64 VAR_1)
{
 struct amd64_pvt *VAR_2;
 unsigned VAR_3, VAR_4;
 u64 VAR_5, VAR_6;
 u32 VAR_7;
 VAR_2 = VAR_0->pvt_info;
 VAR_3 = VAR_2->mc_node_id;

 FUNC_0(VAR_3 > 7);

 VAR_4 = FUNC_5(FUNC_3(VAR_2, 0));
 if (VAR_4 == 0) {
  FUNC_2("    InputAddr 0x%lx translates to DramAddr of "
   "same value\n", (unsigned long)VAR_1);

  return VAR_1;
 }

 VAR_5 = ((VAR_1 & FUNC_1(12, 35)) << VAR_4) +
  (VAR_1 & 0xfff);

 VAR_7 = FUNC_4(VAR_2, VAR_3) & ((1 << VAR_4) - 1);
 VAR_6 = VAR_5 + (VAR_7 << 12);

 FUNC_2("InputAddr 0x%lx translates to DramAddr 0x%lx "
  "(%d node interleave bits)\n", (unsigned long)VAR_1,
  (unsigned long)VAR_6, VAR_4);

 return VAR_6;
}
