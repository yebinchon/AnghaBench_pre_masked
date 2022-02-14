
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_caps_config_cmd {int niccaps; void* op_to_write; void* retval_len16; } ;
struct adapter {int fn; int pdev_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct fw_caps_config_cmd) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_3 (int ,char*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct fw_caps_config_cmd*,int ,int) ;
 int FUNC_7 (struct adapter*,int ,int ,int ,int ,int,int ,int ,int ,int,int,int,int,int ,int ) ;
 int FUNC_8 (struct adapter*,int ,int ,int) ;
 int FUNC_9 (struct adapter*,int ) ;
 int FUNC_10 (struct adapter*,int ) ;
 int FUNC_11 (struct adapter*) ;
 int FUNC_12 (struct adapter*,int ,struct fw_caps_config_cmd*,int,struct fw_caps_config_cmd*) ;
 int FUNC_13 (struct adapter*,int ,int) ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static int FUNC_14(struct adapter *VAR_19, struct fw_caps_config_cmd *VAR_20)
{
 u32 VAR_21;
 int VAR_22;


 FUNC_6(VAR_20, 0, sizeof(*VAR_20));
 VAR_20->op_to_write = FUNC_4(FUNC_0(VAR_1) |
          VAR_5 | VAR_4);
 VAR_20->retval_len16 = FUNC_4(FUNC_1(*VAR_20));
 VAR_22 = FUNC_12(VAR_19, VAR_19->fn, VAR_20, sizeof(*VAR_20), VAR_20);
 if (VAR_22 < 0)
  return VAR_22;


 if (VAR_20->niccaps & FUNC_5(VAR_2)) {
  if (!VAR_18)
   VAR_20->niccaps ^= FUNC_5(VAR_2);
  else
   VAR_20->niccaps = FUNC_5(VAR_2);
 } else if (VAR_18) {
  FUNC_3(VAR_19->pdev_dev, "virtualization ACLs not supported");
  return VAR_22;
 }
 VAR_20->op_to_write = FUNC_4(FUNC_0(VAR_1) |
          VAR_5 | VAR_6);
 VAR_22 = FUNC_12(VAR_19, VAR_19->fn, VAR_20, sizeof(*VAR_20), ((void*)0));
 if (VAR_22 < 0)
  return VAR_22;

 VAR_22 = FUNC_8(VAR_19, VAR_19->fn,
     VAR_7,
     VAR_9 |
     VAR_8);
 if (VAR_22 < 0)
  return VAR_22;

 VAR_22 = FUNC_7(VAR_19, VAR_19->fn, VAR_19->fn, 0, VAR_10, 64, VAR_11,
     0, 0, 4, 0xf, 0xf, 16, VAR_3, VAR_3);
 if (VAR_22 < 0)
  return VAR_22;

 FUNC_11(VAR_19);


 FUNC_13(VAR_19, VAR_16, 0x64f8849);
 FUNC_13(VAR_19, VAR_17, FUNC_2(VAR_12 - 12));
 FUNC_13(VAR_19, VAR_14, VAR_13);
 VAR_21 = FUNC_10(VAR_19, VAR_15);
 FUNC_13(VAR_19, VAR_15, VAR_21 & ~VAR_0);


 return FUNC_9(VAR_19, VAR_19->fn);
}
