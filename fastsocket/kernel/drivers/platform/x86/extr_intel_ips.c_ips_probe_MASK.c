
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; int dev; } ;
struct ips_driver {int second_cpu; int mcp_power_limit; int core_power_limit; int poll_turbo_status; int gpu_turbo_enabled; int orig_turbo_limit; int cpu_turbo_enabled; int mcp_temp_limit; int regmap; struct pci_dev* dev; int adjust; int monitor; void* mgta_val; void* pta_val; void* cta_val; int turbo_status_lock; int limits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int ,struct ips_driver*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_35 ;
 int FUNC_7 (struct ips_driver*) ;
 int FUNC_8 (struct ips_driver*) ;
 int FUNC_9 (struct ips_driver*) ;
 int FUNC_10 (struct ips_driver*) ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_11 (struct ips_driver*) ;
 int FUNC_12 (int ,struct ips_driver*,char*) ;
 int FUNC_13 (int ,struct ips_driver*,char*) ;
 int FUNC_14 (int ) ;
 struct ips_driver* FUNC_15 (int,int ) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*,char*) ;
 int FUNC_20 (struct pci_dev*,int ) ;
 int FUNC_21 (struct pci_dev*,int ) ;
 int FUNC_22 (struct pci_dev*,struct ips_driver*) ;
 int FUNC_23 (int ,int) ;
 int FUNC_24 (int ,int ,int ,char*,struct ips_driver*) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 void* FUNC_28 (int ) ;
 int FUNC_29 (int ,int) ;
 int FUNC_30 (int ,int) ;
 int FUNC_31 (int ,int) ;
 int FUNC_32 (struct ips_driver*) ;

__attribute__((used)) static int FUNC_33(struct pci_dev *VAR_38, const struct pci_device_id *VAR_39)
{
 u64 VAR_40;
 struct ips_driver *VAR_41;
 u32 VAR_42;
 int VAR_43 = 0;
 u16 VAR_44, VAR_45, VAR_46;
 u8 VAR_47;

 VAR_41 = FUNC_15(sizeof(struct ips_driver), VAR_4);
 if (!VAR_41)
  return -VAR_2;

 FUNC_22(VAR_38, VAR_41);
 VAR_41->dev = VAR_38;

 VAR_41->limits = FUNC_8(VAR_41);
 if (!VAR_41->limits) {
  FUNC_3(&VAR_38->dev, "IPS not supported on this CPU\n");
  VAR_43 = -VAR_3;
  goto error_free;
 }

 FUNC_25(&VAR_41->turbo_status_lock);

 VAR_43 = FUNC_17(VAR_38);
 if (VAR_43) {
  FUNC_2(&VAR_38->dev, "can't enable PCI device, aborting\n");
  goto error_free;
 }

 if (!FUNC_21(VAR_38, 0)) {
  FUNC_2(&VAR_38->dev, "TBAR not assigned, aborting\n");
  VAR_43 = -VAR_3;
  goto error_free;
 }

 VAR_43 = FUNC_19(VAR_38, "ips thermal sensor");
 if (VAR_43) {
  FUNC_2(&VAR_38->dev, "thermal resource busy, aborting\n");
  goto error_free;
 }


 VAR_41->regmap = FUNC_5(FUNC_21(VAR_38, 0),
         FUNC_20(VAR_38, 0));
 if (!VAR_41->regmap) {
  FUNC_2(&VAR_38->dev, "failed to map thermal regs, aborting\n");
  VAR_43 = -VAR_0;
  goto error_release;
 }

 VAR_47 = FUNC_26(VAR_23);
 if (VAR_47 != VAR_29) {
  FUNC_2(&VAR_38->dev, "thermal device not enabled (0x%02x), aborting\n", VAR_47);
  VAR_43 = -VAR_3;
  goto error_unmap;
 }

 VAR_45 = FUNC_28(VAR_22);
 VAR_46 = VAR_25 | VAR_27 | VAR_28;
 if ((VAR_45 & VAR_46) != VAR_46) {
  FUNC_2(&VAR_38->dev, "thermal reporting for required devices not enabled, aborting\n");
  VAR_43 = -VAR_3;
  goto error_unmap;
 }

 if (VAR_45 & VAR_26)
  VAR_41->second_cpu = 1;

 FUNC_32(VAR_41);
 FUNC_1(&VAR_38->dev, "max cpu power clamp: %dW\n",
  VAR_41->mcp_power_limit / 10);
 FUNC_1(&VAR_38->dev, "max core power clamp: %dW\n",
  VAR_41->core_power_limit / 10);

 if (FUNC_27(VAR_19) & VAR_13)
  VAR_41->poll_turbo_status = 1;

 if (!FUNC_10(VAR_41)) {
  FUNC_2(&VAR_38->dev, "failed to get i915 symbols, graphics turbo disabled\n");
  VAR_41->gpu_turbo_enabled = 0;
 } else {
  FUNC_1(&VAR_38->dev, "graphics turbo enabled\n");
  VAR_41->gpu_turbo_enabled = 1;
 }





 FUNC_23(VAR_11, VAR_40);
 if (!(VAR_40 & VAR_12)) {
  FUNC_2(&VAR_38->dev, "platform indicates TDP override unavailable, aborting\n");
  VAR_43 = -VAR_1;
  goto error_unmap;
 }





 FUNC_16(VAR_38);
 VAR_43 = FUNC_24(VAR_38->irq, VAR_36, VAR_10, "ips",
     VAR_41);
 if (VAR_43) {
  FUNC_2(&VAR_38->dev, "request irq failed, aborting\n");
  goto error_unmap;
 }


 FUNC_29(VAR_24, VAR_30 | VAR_32 |
     VAR_33 | VAR_31);
 FUNC_29(VAR_21, VAR_14);


 VAR_41->cta_val = FUNC_28(VAR_15);
 VAR_41->pta_val = FUNC_28(VAR_20);
 VAR_41->mgta_val = FUNC_28(VAR_18);


 FUNC_23(VAR_34, VAR_41->orig_turbo_limit);

 FUNC_9(VAR_41);
 VAR_41->cpu_turbo_enabled = 0;


 VAR_41->adjust = FUNC_12(VAR_35, VAR_41, "ips-adjust");
 if (FUNC_0(VAR_41->adjust)) {
  FUNC_2(&VAR_38->dev,
   "failed to create thermal adjust thread, aborting\n");
  VAR_43 = -VAR_2;
  goto error_free_irq;

 }





 VAR_41->monitor = FUNC_13(VAR_37, VAR_41, "ips-monitor");
 if (FUNC_0(VAR_41->monitor)) {
  FUNC_2(&VAR_38->dev,
   "failed to create thermal monitor thread, aborting\n");
  VAR_43 = -VAR_2;
  goto error_thread_cleanup;
 }

 VAR_42 = (VAR_41->core_power_limit << VAR_8) |
  (VAR_41->mcp_temp_limit << VAR_9) | VAR_7;
 VAR_44 = VAR_5 << VAR_6;

 FUNC_31(VAR_17, VAR_44);
 FUNC_30(VAR_16, VAR_42);

 FUNC_7(VAR_41);

 FUNC_3(&VAR_38->dev, "IPS driver initialized, MCP temp limit %d\n",
   VAR_41->mcp_temp_limit);
 return VAR_43;

error_thread_cleanup:
 FUNC_14(VAR_41->adjust);
error_free_irq:
 FUNC_4(VAR_41->dev->irq, VAR_41);
error_unmap:
 FUNC_6(VAR_41->regmap);
error_release:
 FUNC_18(VAR_38);
error_free:
 FUNC_11(VAR_41);
 return VAR_43;
}
