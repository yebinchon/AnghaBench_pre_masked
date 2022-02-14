
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mem_ctl_info {struct amd64_pvt* pvt_info; } ;
struct amd64_pvt {int F3; } ;
struct TYPE_5__ {int x86; } ;
struct TYPE_4__ {int scrubval; int bandwidth; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (struct amd64_pvt*,int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int FUNC_3(struct mem_ctl_info *VAR_4)
{
 struct amd64_pvt *VAR_5 = VAR_4->pvt_info;
 u32 VAR_6 = 0;
 int VAR_7, VAR_8 = -VAR_0;


 if (VAR_2.x86 == 0x15)
  FUNC_2(VAR_5, 0);

 FUNC_1(VAR_5->F3, VAR_1, &VAR_6);

 VAR_6 = VAR_6 & 0x001F;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  if (VAR_3[VAR_7].scrubval == VAR_6) {
   VAR_8 = VAR_3[VAR_7].bandwidth;
   break;
  }
 }
 return VAR_8;
}
