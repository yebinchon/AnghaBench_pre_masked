
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct mem_ctl_info {int ctl_name; TYPE_1__* csrows; } ;
struct amd76x_error_info {int ecc_mode_status; } ;
struct TYPE_2__ {int first_page; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mem_ctl_info*,int ,int ,int ,size_t,int ,int ) ;
 int FUNC_2 (struct mem_ctl_info*,int ,int ,size_t,int ) ;

__attribute__((used)) static int FUNC_3(struct mem_ctl_info *VAR_0,
    struct amd76x_error_info *VAR_1,
    int VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 VAR_3 = 0;




 if (VAR_1->ecc_mode_status & FUNC_0(8)) {
  VAR_3 = 1;

  if (VAR_2) {
   VAR_4 = (VAR_1->ecc_mode_status >> 4) & 0xf;
   FUNC_2(VAR_0, VAR_0->csrows[VAR_4].first_page, 0,
     VAR_4, VAR_0->ctl_name);
  }
 }




 if (VAR_1->ecc_mode_status & FUNC_0(9)) {
  VAR_3 = 1;

  if (VAR_2) {
   VAR_4 = VAR_1->ecc_mode_status & 0xf;
   FUNC_1(VAR_0, VAR_0->csrows[VAR_4].first_page, 0,
     0, VAR_4, 0, VAR_0->ctl_name);
  }
 }

 return VAR_3;
}
