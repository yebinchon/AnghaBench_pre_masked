
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mem_ctl_info {TYPE_1__* csrows; struct amd64_pvt* pvt_info; } ;
struct amd64_pvt {int dummy; } ;
struct TYPE_2__ {int nr_channels; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct amd64_pvt*) ;
 int FUNC_1 (struct mem_ctl_info*,int ,int ,int ,int,int,int ) ;
 int FUNC_2 (struct mem_ctl_info*,int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (struct amd64_pvt*,int ,int*,int*) ;
 int FUNC_5 (struct mem_ctl_info*,int ) ;

__attribute__((used)) static void FUNC_6(struct mem_ctl_info *VAR_1, u64 VAR_2,
         u16 VAR_3)
{
 struct amd64_pvt *VAR_4 = VAR_1->pvt_info;
 u32 VAR_5, VAR_6;
 int VAR_7, VAR_8, VAR_9 = 0;

 VAR_8 = FUNC_4(VAR_4, VAR_2, &VAR_7, &VAR_9);

 if (VAR_8 < 0) {
  FUNC_2(VAR_1, VAR_0);
  return;
 }

 FUNC_3(VAR_2, &VAR_5, &VAR_6);






 if (FUNC_0(VAR_4))
  VAR_9 = FUNC_5(VAR_1, VAR_3);

 if (VAR_9 >= 0)
  FUNC_1(VAR_1, VAR_5, VAR_6, VAR_3, VAR_8, VAR_9,
      VAR_0);
 else



  for (VAR_9 = 0; VAR_9 < VAR_1->csrows[VAR_8].nr_channels; VAR_9++)
   FUNC_1(VAR_1, VAR_5, VAR_6, VAR_3,
       VAR_8, VAR_9, VAR_0);
}
