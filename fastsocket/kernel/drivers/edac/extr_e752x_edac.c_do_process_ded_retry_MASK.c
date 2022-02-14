
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mem_ctl_info {scalar_t__ pvt_info; } ;
struct e752x_pvt {scalar_t__ mc_symmetric; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mem_ctl_info*,int ,char*,unsigned long,int) ;
 int FUNC_1 (struct mem_ctl_info*,int) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_2, u16 VAR_3,
     u32 VAR_4)
{
 u32 VAR_5, VAR_6;
 int VAR_7;
 struct e752x_pvt *VAR_8 = (struct e752x_pvt *)VAR_2->pvt_info;

 VAR_5 = VAR_4;
 VAR_6 = VAR_5 >> (VAR_1 - 4);


 VAR_7 = VAR_8->mc_symmetric ? ((VAR_6 >> 1) & 3) :
  FUNC_1(VAR_2, VAR_6);

 FUNC_0(VAR_2, VAR_0,
   "CE page 0x%lx, row %d : Memory read retry\n",
   (long unsigned int)VAR_6, VAR_7);
}
