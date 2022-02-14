
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_tlv_hdr {void* length; void* type; } ;
struct i2400m_tlv_config_idle_timeout {struct i2400m_tlv_hdr hdr; scalar_t__ timeout; } ;
struct i2400m_tlv_config_idle_parameters {struct i2400m_tlv_hdr hdr; scalar_t__ idle_paging_interval; scalar_t__ idle_timeout; } ;
struct i2400m_tlv_config_dl_host_reorder {int reorder; struct i2400m_tlv_hdr hdr; } ;
struct i2400m_tlv_config_d2h_data_format {int format; struct i2400m_tlv_hdr hdr; } ;
struct i2400m {scalar_t__ rx_reorder; } ;
struct device {int dummy; } ;
typedef int idle_timeout ;
typedef int idle_params ;
typedef int dlhr ;
typedef int df ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,int) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct i2400m*) ;
 struct device* FUNC_5 (struct i2400m*) ;
 scalar_t__ FUNC_6 (struct i2400m*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_7 (struct i2400m*) ;
 int FUNC_8 (struct i2400m*,struct i2400m_tlv_hdr const**,unsigned int) ;

int FUNC_9(struct i2400m *VAR_5)
{
 int VAR_6;
 struct device *VAR_7 = FUNC_5(VAR_5);
 struct i2400m_tlv_config_idle_parameters VAR_8;
 struct i2400m_tlv_config_idle_timeout VAR_9;
 struct i2400m_tlv_config_d2h_data_format VAR_10;
 struct i2400m_tlv_config_dl_host_reorder VAR_11;
 const struct i2400m_tlv_hdr *VAR_12[9];
 unsigned VAR_13 = 0;

 FUNC_2(3, VAR_7, "(i2400m %p)\n", VAR_5);

 if (VAR_4) {
  if (FUNC_7(VAR_5)) {
   VAR_8.hdr.type =
    FUNC_0(VAR_2);
   VAR_8.hdr.length = FUNC_0(
    sizeof(VAR_8) - sizeof(VAR_8.hdr));
   VAR_8.idle_timeout = 0;
   VAR_8.idle_paging_interval = 0;
   VAR_12[VAR_13++] = &VAR_8.hdr;
  } else {
   VAR_9.hdr.type =
    FUNC_0(VAR_3);
   VAR_9.hdr.length = FUNC_0(
    sizeof(VAR_9) - sizeof(VAR_9.hdr));
   VAR_9.timeout = 0;
   VAR_12[VAR_13++] = &VAR_9.hdr;
  }
 }
 if (FUNC_6(VAR_5)) {

  VAR_10.hdr.type =
   FUNC_0(VAR_0);
  VAR_10.hdr.length = FUNC_0(
   sizeof(VAR_10) - sizeof(VAR_10.hdr));
  VAR_10.format = 1;
  VAR_12[VAR_13++] = &VAR_10.hdr;



  if (VAR_5->rx_reorder) {
   VAR_11.hdr.type =
    FUNC_0(VAR_1);
   VAR_11.hdr.length = FUNC_0(
    sizeof(VAR_11) - sizeof(VAR_11.hdr));
   VAR_11.reorder = 1;
   VAR_12[VAR_13++] = &VAR_11.hdr;
  }
 }
 VAR_6 = FUNC_8(VAR_5, VAR_12, VAR_13);
 if (VAR_6 < 0)
  goto error;






 VAR_6 = FUNC_4(VAR_5);
error:
 if (VAR_6 < 0)
  FUNC_3(VAR_7, "failed to initialize the device: %d\n", VAR_6);
 FUNC_1(3, VAR_7, "(i2400m %p) = %d\n", VAR_5, VAR_6);
 return VAR_6;
}
