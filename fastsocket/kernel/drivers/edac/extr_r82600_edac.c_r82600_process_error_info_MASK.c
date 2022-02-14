
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r82600_error_info {int eapr; } ;
struct mem_ctl_info {int ctl_name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mem_ctl_info*,int) ;
 int FUNC_2 (struct mem_ctl_info*,int,int ,int,int ,int ,int ) ;
 int FUNC_3 (struct mem_ctl_info*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mem_ctl_info *VAR_1,
    struct r82600_error_info *VAR_2,
    int VAR_3)
{
 int VAR_4;
 u32 VAR_5, VAR_6;
 u32 VAR_7;

 VAR_4 = 0;


 VAR_5 = ((VAR_2->eapr >> 12) & 0x7FFF) << 13;

 VAR_7 = (VAR_2->eapr >> 4) & 0xFF;



 VAR_6 = VAR_5 >> VAR_0;

 if (VAR_2->eapr & FUNC_0(0)) {
  VAR_4 = 1;

  if (VAR_3)
   FUNC_2(VAR_1, VAR_6, 0,
     VAR_7,
     FUNC_1(VAR_1, VAR_6),
     0, VAR_1->ctl_name);
 }

 if (VAR_2->eapr & FUNC_0(1)) {
  VAR_4 = 1;

  if (VAR_3)

   FUNC_3(VAR_1, VAR_6, 0,
     FUNC_1(VAR_1, VAR_6),
     VAR_1->ctl_name);
 }

 return VAR_4;
}
