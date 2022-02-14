
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct amd64_pvt {int F3; } ;
struct TYPE_2__ {int x86; } ;


 int FUNC_0 (int ,int,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct amd64_pvt*,int ) ;

__attribute__((used)) static int FUNC_2(struct mem_ctl_info *VAR_1, u32 VAR_2)
{
 struct amd64_pvt *VAR_3 = VAR_1->pvt_info;
 u32 VAR_4 = 0x5;

 if (VAR_0.x86 == 0xf)
  VAR_4 = 0x0;


 if (VAR_0.x86 == 0x15)
  FUNC_1(VAR_3, 0);

 return FUNC_0(VAR_3->F3, VAR_2, VAR_4);
}
