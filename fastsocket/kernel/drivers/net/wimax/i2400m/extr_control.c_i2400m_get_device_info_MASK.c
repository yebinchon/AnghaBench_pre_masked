
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct i2400m_tlv_hdr {int dummy; } ;
struct i2400m_tlv_detailed_device_info {int dummy; } ;
struct i2400m_l3l4_hdr {int pl; void* version; scalar_t__ length; void* type; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;
typedef int strerr ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct device*,char*,int ,...) ;
 struct device* FUNC_5 (struct i2400m*) ;
 int FUNC_6 (struct i2400m_l3l4_hdr const*,char*,int) ;
 struct sk_buff* FUNC_7 (struct i2400m*,struct i2400m_l3l4_hdr*,int) ;
 struct i2400m_tlv_hdr* FUNC_8 (struct i2400m*,int ,size_t,int ,int) ;
 int FUNC_9 (struct i2400m_l3l4_hdr*) ;
 int FUNC_10 (struct sk_buff*) ;
 struct i2400m_l3l4_hdr* FUNC_11 (int,int ) ;
 int FUNC_12 (struct sk_buff*,int) ;
 struct i2400m_l3l4_hdr* FUNC_13 (struct sk_buff*,size_t*) ;

struct sk_buff *FUNC_14(struct i2400m *VAR_6)
{
 int VAR_7;
 struct device *VAR_8 = FUNC_5(VAR_6);
 struct sk_buff *VAR_9;
 struct i2400m_l3l4_hdr *VAR_10;
 const struct i2400m_l3l4_hdr *VAR_11;
 size_t VAR_12;
 const struct i2400m_tlv_hdr *VAR_13;
 const struct i2400m_tlv_detailed_device_info *VAR_14;
 char VAR_15[32];

 VAR_9 = FUNC_0(-VAR_1);
 VAR_10 = FUNC_11(sizeof(*VAR_10), VAR_2);
 if (VAR_10 == ((void*)0))
  goto error_alloc;
 VAR_10->type = FUNC_3(VAR_4);
 VAR_10->length = 0;
 VAR_10->version = FUNC_3(VAR_3);

 VAR_9 = FUNC_7(VAR_6, VAR_10, sizeof(*VAR_10));
 if (FUNC_1(VAR_9)) {
  FUNC_4(VAR_8, "Failed to issue 'get device info' command: %ld\n",
   FUNC_2(VAR_9));
  goto error_msg_to_dev;
 }
 VAR_11 = FUNC_13(VAR_9, &VAR_12);
 VAR_7 = FUNC_6(VAR_11, VAR_15, sizeof(VAR_15));
 if (VAR_7 < 0) {
  FUNC_4(VAR_8, "'get device info' (0x%04x) command failed: "
   "%d - %s\n", VAR_4, VAR_7,
   VAR_15);
  goto error_cmd_failed;
 }
 VAR_13 = FUNC_8(VAR_6, VAR_11->pl, VAR_12 - sizeof(*VAR_11),
         VAR_5, sizeof(*VAR_14));
 if (VAR_13 == ((void*)0)) {
  FUNC_4(VAR_8, "GET DEVICE INFO: "
   "detailed device info TLV not found (0x%04x)\n",
   VAR_5);
  VAR_7 = -VAR_0;
  goto error_no_tlv;
 }
 FUNC_12(VAR_9, (void *) VAR_13 - (void *) VAR_9->data);
error_msg_to_dev:
 FUNC_9(VAR_10);
error_alloc:
 return VAR_9;

error_no_tlv:
error_cmd_failed:
 FUNC_10(VAR_9);
 FUNC_9(VAR_10);
 return FUNC_0(VAR_7);
}
