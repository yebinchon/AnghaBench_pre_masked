
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {scalar_t__ flash_mfg_id; TYPE_2__* ahw; } ;
typedef int loff_t ;
struct TYPE_3__ {scalar_t__ mfg_id; } ;
struct TYPE_4__ {TYPE_1__ fdt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char* FUNC_0 (size_t,int,int ) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (unsigned char*,char*,size_t) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*,int ,int *) ;
 scalar_t__ FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;

__attribute__((used)) static int FUNC_8(struct qlcnic_adapter *VAR_3,
      char *VAR_4, loff_t VAR_5, size_t VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 unsigned char *VAR_10, *VAR_11;

 VAR_10 = FUNC_0(VAR_6, sizeof(unsigned char), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_2(VAR_10, VAR_4, VAR_6);
 VAR_11 = VAR_10;
 VAR_9 = VAR_6 / sizeof(u32);

 if (FUNC_6(VAR_3) != 0) {
  FUNC_1(VAR_10);
  return -VAR_0;
 }

 if (VAR_3->ahw->fdt.mfg_id == VAR_3->flash_mfg_id) {
  VAR_8 = FUNC_4(VAR_3);
  if (VAR_8) {
   FUNC_1(VAR_10);
   FUNC_7(VAR_3);
   return -VAR_0;
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  VAR_8 = FUNC_5(VAR_3, VAR_5, (u32 *)VAR_11);
  if (VAR_8) {
   if (VAR_3->ahw->fdt.mfg_id == VAR_3->flash_mfg_id) {
    VAR_8 = FUNC_3(VAR_3);
    if (VAR_8) {
     FUNC_1(VAR_10);
     FUNC_7(VAR_3);
     return -VAR_0;
    }
   }
   FUNC_1(VAR_10);
   FUNC_7(VAR_3);
   return -VAR_0;
  }

  VAR_11 = VAR_11 + sizeof(u32);
  VAR_5 = VAR_5 + sizeof(u32);
 }

 if (VAR_3->ahw->fdt.mfg_id == VAR_3->flash_mfg_id) {
  VAR_8 = FUNC_3(VAR_3);
  if (VAR_8) {
   FUNC_1(VAR_10);
   FUNC_7(VAR_3);
   return -VAR_0;
  }
 }

 FUNC_1(VAR_10);
 FUNC_7(VAR_3);

 return 0;
}
