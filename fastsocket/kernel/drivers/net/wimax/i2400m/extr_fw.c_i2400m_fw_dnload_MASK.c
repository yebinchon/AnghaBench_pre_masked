
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_bcf_hdr {int dummy; } ;
struct i2400m {int bus_bm_retries; int boot_mode; int fw_name; } ;
struct device {int dummy; } ;
typedef enum i2400m_bri { ____Placeholder_i2400m_bri } i2400m_bri ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,struct device*,char*,struct i2400m*,struct i2400m_bcf_hdr const*,size_t,int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,struct i2400m_bcf_hdr const*,size_t) ;
 int FUNC_2 (int,struct device*,char*,int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct i2400m*,int) ;
 struct device* FUNC_5 (struct i2400m*) ;
 int FUNC_6 (struct i2400m*,struct i2400m_bcf_hdr const*,size_t) ;
 int FUNC_7 (struct i2400m*,struct i2400m_bcf_hdr const*,int) ;
 int FUNC_8 (struct i2400m*,struct i2400m_bcf_hdr const*) ;
 int FUNC_9 () ;

__attribute__((used)) static
int FUNC_10(struct i2400m *VAR_3, const struct i2400m_bcf_hdr *VAR_4,
       size_t VAR_5, enum i2400m_bri VAR_6)
{
 int VAR_7 = 0;
 struct device *VAR_8 = FUNC_5(VAR_3);
 int VAR_9 = VAR_3->bus_bm_retries;

 FUNC_1(5, VAR_8, "(i2400m %p bcf %p size %zu)\n",
    VAR_3, VAR_4, VAR_5);
 VAR_3->boot_mode = 1;
 FUNC_9();
hw_reboot:
 if (VAR_9-- == 0) {
  VAR_7 = -VAR_0;
  FUNC_3(VAR_8, "device rebooted too many times, aborting\n");
  goto error_too_many_reboots;
 }
 if (VAR_6 & VAR_1) {
  VAR_7 = FUNC_4(VAR_3, VAR_6);
  if (VAR_7 < 0) {
   FUNC_3(VAR_8, "bootrom init failed: %d\n", VAR_7);
   goto error_bootrom_init;
  }
 }
 VAR_6 |= VAR_1;






 VAR_7 = FUNC_8(VAR_3, VAR_4);
 if (VAR_7 == -VAR_0)
  goto error_dev_rebooted;
 if (VAR_7 < 0)
  goto error_dnload_init;

 VAR_7 = FUNC_6(VAR_3, VAR_4, VAR_5);
 if (VAR_7 == -VAR_0)
  goto error_dev_rebooted;
 if (VAR_7 < 0) {
  FUNC_3(VAR_8, "fw %s: download failed: %d\n",
   VAR_3->fw_name, VAR_7);
  goto error_dnload_bcf;
 }

 VAR_7 = FUNC_7(VAR_3, VAR_4, VAR_7);
 if (VAR_7 == -VAR_0)
  goto error_dev_rebooted;
 if (VAR_7 < 0) {
  FUNC_3(VAR_8, "fw %s: "
   "download finalization failed: %d\n",
   VAR_3->fw_name, VAR_7);
  goto error_dnload_finalize;
 }

 FUNC_2(2, VAR_8, "fw %s successfully uploaded\n",
   VAR_3->fw_name);
 VAR_3->boot_mode = 0;
 FUNC_9();
error_dnload_finalize:
error_dnload_bcf:
error_dnload_init:
error_bootrom_init:
error_too_many_reboots:
 FUNC_0(5, VAR_8, "(i2400m %p bcf %p size %zu) = %d\n",
  VAR_3, VAR_4, VAR_5, VAR_7);
 return VAR_7;

error_dev_rebooted:
 FUNC_3(VAR_8, "device rebooted, %d tries left\n", VAR_9);

 VAR_6 |= VAR_2;
 goto hw_reboot;
}
