
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct amd64_pvt {int mc_node_id; } ;


 int FUNC_0 (struct mem_ctl_info*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (char*,unsigned long,unsigned long,...) ;
 scalar_t__ FUNC_2 (struct amd64_pvt*,int ) ;

__attribute__((used)) static u64 FUNC_3(struct mem_ctl_info *VAR_0, u64 VAR_1)
{
 struct amd64_pvt *VAR_2 = VAR_0->pvt_info;
 u64 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0;

 VAR_8 = FUNC_0(VAR_0, &VAR_3, &VAR_4,
          &VAR_5);
 if (!VAR_8) {
  if ((VAR_1 >= VAR_3) &&
      (VAR_1 < (VAR_3 + VAR_5))) {
   VAR_7 = VAR_1 + VAR_4;

   FUNC_1("using DHAR to translate DramAddr 0x%lx to "
    "SysAddr 0x%lx\n", (unsigned long)VAR_1,
    (unsigned long)VAR_7);

   return VAR_7;
  }
 }

 VAR_6 = FUNC_2(VAR_2, VAR_2->mc_node_id);
 VAR_7 = VAR_1 + VAR_6;
 VAR_7 |= ~((VAR_7 & (1ull << 39)) - 1);

 FUNC_1("    Node %d, DramAddr 0x%lx to SysAddr 0x%lx\n",
  VAR_2->mc_node_id, (unsigned long)VAR_1,
  (unsigned long)VAR_7);

 return VAR_7;
}
