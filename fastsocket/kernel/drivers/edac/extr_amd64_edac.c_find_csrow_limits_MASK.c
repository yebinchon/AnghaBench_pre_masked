
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct amd64_pvt {TYPE_1__* csels; } ;
struct TYPE_2__ {int b_cnt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct amd64_pvt*,int,int ,int*,int*) ;

__attribute__((used)) static void FUNC_2(struct mem_ctl_info *VAR_0, int VAR_1,
         u64 *VAR_2, u64 *VAR_3)
{
 struct amd64_pvt *VAR_4;
 u64 VAR_5, VAR_6;

 VAR_4 = VAR_0->pvt_info;
 FUNC_0((VAR_1 < 0) || (VAR_1 >= VAR_4->csels[0].b_cnt));

 FUNC_1(VAR_4, VAR_1, 0, &VAR_5, &VAR_6);

 *VAR_2 = VAR_5 & ~VAR_6;
 *VAR_3 = VAR_5 | VAR_6;
}
