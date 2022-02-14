
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_pm_memtiming {int* mr; } ;
struct nouveau_pm_level {struct nouveau_pm_memtiming timing; } ;
struct nouveau_mem_exec_func {int (* mrg ) (struct nouveau_mem_exec_func*,int) ;int (* precharge ) (struct nouveau_mem_exec_func*) ;int (* wait ) (struct nouveau_mem_exec_func*,int) ;int (* mrs ) (struct nouveau_mem_exec_func*,int,int) ;int (* timing_set ) (struct nouveau_mem_exec_func*) ;int (* refresh_auto ) (struct nouveau_mem_exec_func*,int) ;int (* refresh_self ) (struct nouveau_mem_exec_func*,int) ;int (* clock_set ) (struct nouveau_mem_exec_func*) ;int (* refresh ) (struct nouveau_mem_exec_func*) ;int dev; } ;
struct TYPE_2__ {int type; } ;
struct nouveau_fb {TYPE_1__ ram; } ;
struct nouveau_drm {int dummy; } ;
struct nouveau_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*) ;



 struct nouveau_device* FUNC_1 (int ) ;
 struct nouveau_drm* FUNC_2 (int ) ;
 struct nouveau_fb* FUNC_3 (struct nouveau_device*) ;
 int FUNC_4 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_5 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_6 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_7 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_8 (struct nouveau_mem_exec_func*) ;
 int FUNC_9 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_10 (struct nouveau_mem_exec_func*) ;
 int FUNC_11 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_12 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_13 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_14 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_15 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_16 (struct nouveau_mem_exec_func*,int,int) ;
 int FUNC_17 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_18 (struct nouveau_mem_exec_func*,int,int) ;
 int FUNC_19 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_20 (struct nouveau_mem_exec_func*,int,int) ;
 int FUNC_21 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_22 (struct nouveau_mem_exec_func*) ;
 int FUNC_23 (struct nouveau_mem_exec_func*,int,int) ;
 int FUNC_24 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_25 (struct nouveau_mem_exec_func*,int,int) ;
 int FUNC_26 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_27 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_28 (struct nouveau_mem_exec_func*,int,int) ;
 int FUNC_29 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_30 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_31 (struct nouveau_mem_exec_func*) ;
 int FUNC_32 (struct nouveau_mem_exec_func*) ;
 int FUNC_33 (struct nouveau_mem_exec_func*,int,int) ;
 int FUNC_34 (struct nouveau_mem_exec_func*,int) ;
 int FUNC_35 (struct nouveau_mem_exec_func*) ;
 int FUNC_36 (struct nouveau_mem_exec_func*) ;
 int FUNC_37 (struct nouveau_mem_exec_func*) ;

int
FUNC_38(struct nouveau_mem_exec_func *VAR_1,
   struct nouveau_pm_level *VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_2(VAR_1->dev);
 struct nouveau_device *VAR_4 = FUNC_1(VAR_1->dev);
 struct nouveau_fb *VAR_5 = FUNC_3(VAR_4);
 struct nouveau_pm_memtiming *VAR_6 = &VAR_2->timing;
 u32 VAR_7 = 1000, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 u32 VAR_12[3] = { VAR_6->mr[0], VAR_6->mr[1], VAR_6->mr[2] };
 u32 VAR_13;

 switch (VAR_5->ram.type) {
 case 130:
  VAR_11 = 2000;
  VAR_13 = 0x00000001;
  break;
 case 129:
  VAR_11 = 12000;
  VAR_8 = 2000;
  VAR_10 = 1000;
  VAR_13 = 0x00000001;
  break;
 case 128:
  VAR_11 = 40000;
  VAR_13 = 0x00000040;
  break;
 default:
  FUNC_0(VAR_3, "cannot reclock unsupported memtype\n");
  return -VAR_0;
 }


 switch (VAR_5->ram.type) {
 case 128:
 case 129:
  VAR_12[2] = VAR_1->mrg(VAR_1, 2);
 default:
  VAR_12[1] = VAR_1->mrg(VAR_1, 1);
  VAR_12[0] = VAR_1->mrg(VAR_1, 0);
  break;
 }


 if (!(VAR_12[1] & VAR_13) && (VAR_6->mr[1] & VAR_13)) {
  VAR_1->precharge(VAR_1);
  VAR_1->mrs (VAR_1, 1, VAR_12[1] | VAR_13);
  VAR_1->wait(VAR_1, VAR_7);
 }


 VAR_1->precharge(VAR_1);
 VAR_1->refresh(VAR_1);
 VAR_1->refresh(VAR_1);
 VAR_1->refresh_auto(VAR_1, 0);
 VAR_1->refresh_self(VAR_1, 1);
 VAR_1->wait(VAR_1, VAR_8);


 VAR_1->clock_set(VAR_1);


 VAR_1->wait(VAR_1, VAR_9);
 VAR_1->precharge(VAR_1);
 VAR_1->refresh_self(VAR_1, 0);
 VAR_1->refresh_auto(VAR_1, 1);
 VAR_1->wait(VAR_1, VAR_10);
 VAR_1->wait(VAR_1, VAR_10);


 if (VAR_12[2] != VAR_6->mr[2]) {
  VAR_1->mrs (VAR_1, 2, VAR_6->mr[2]);
  VAR_1->wait(VAR_1, VAR_7);
 }

 if (VAR_12[1] != VAR_6->mr[1]) {

  VAR_1->mrs (VAR_1, 1, VAR_6->mr[1] | (VAR_12[1] & VAR_13));
  VAR_1->wait(VAR_1, VAR_7);
 }

 if (VAR_12[0] != VAR_6->mr[0]) {
  VAR_1->mrs (VAR_1, 0, VAR_6->mr[0]);
  VAR_1->wait(VAR_1, VAR_7);
 }


 VAR_1->timing_set(VAR_1);


 if (!(VAR_6->mr[1] & VAR_13)) {
  if (VAR_12[1] & VAR_13) {
   VAR_1->mrs (VAR_1, 1, VAR_6->mr[1]);
   VAR_1->wait(VAR_1, VAR_7);
  }
  VAR_1->mrs (VAR_1, 0, VAR_6->mr[0] | 0x00000100);
  VAR_1->wait(VAR_1, VAR_7);
  VAR_1->mrs (VAR_1, 0, VAR_6->mr[0] | 0x00000000);
  VAR_1->wait(VAR_1, VAR_7);
  VAR_1->wait(VAR_1, VAR_11);
  if (VAR_5->ram.type == 128)
   VAR_1->precharge(VAR_1);
 }

 return 0;
}
