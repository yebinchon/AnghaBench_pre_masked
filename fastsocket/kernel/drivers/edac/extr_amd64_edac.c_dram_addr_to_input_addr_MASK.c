
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct amd64_pvt {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,unsigned long,unsigned long) ;
 int FUNC_2 (struct amd64_pvt*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u64 FUNC_4(struct mem_ctl_info *VAR_0, u64 VAR_1)
{
 struct amd64_pvt *VAR_2;
 int VAR_3;
 u64 VAR_4;

 VAR_2 = VAR_0->pvt_info;





 VAR_3 = FUNC_3(FUNC_2(VAR_2, 0));
 VAR_4 = ((VAR_1 >> VAR_3) & FUNC_0(12, 35)) +
        (VAR_1 & 0xfff);

 FUNC_1("  Intlv Shift=%d DramAddr=0x%lx maps to InputAddr=0x%lx\n",
  VAR_3, (unsigned long)VAR_1,
  (unsigned long)VAR_4);

 return VAR_4;
}
