
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {void* length; void* type; } ;
struct TYPE_3__ {void* version; void* length; void* type; } ;
struct i2400m_cmd_enter_power_save {int val; TYPE_2__ tlv; TYPE_1__ hdr; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;
typedef int strerr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,struct device*,char*) ;
 int FUNC_5 (struct device*,char*,int,...) ;
 struct device* FUNC_6 (struct i2400m*) ;
 int FUNC_7 (int ,char*,int) ;
 struct sk_buff* FUNC_8 (struct i2400m*,struct i2400m_cmd_enter_power_save*,int) ;
 int FUNC_9 (struct i2400m_cmd_enter_power_save*) ;
 int FUNC_10 (struct sk_buff*) ;
 struct i2400m_cmd_enter_power_save* FUNC_11 (int,int ) ;
 int FUNC_12 (struct sk_buff*) ;

int FUNC_13(struct i2400m *VAR_7)
{
 int VAR_8;
 struct device *VAR_9 = FUNC_6(VAR_7);
 struct sk_buff *VAR_10;
 struct i2400m_cmd_enter_power_save *VAR_11;
 char VAR_12[32];

 VAR_8 = -VAR_1;
 VAR_11 = FUNC_11(sizeof(*VAR_11), VAR_2);
 if (VAR_11 == ((void*)0))
  goto error_alloc;
 VAR_11->hdr.type = FUNC_2(VAR_4);
 VAR_11->hdr.length = FUNC_2(sizeof(*VAR_11) - sizeof(VAR_11->hdr));
 VAR_11->hdr.version = FUNC_2(VAR_3);
 VAR_11->tlv.type = FUNC_2(VAR_5);
 VAR_11->tlv.length = FUNC_2(sizeof(VAR_11->val));
 VAR_11->val = FUNC_3(VAR_6);

 VAR_10 = FUNC_8(VAR_7, VAR_11, sizeof(*VAR_11));
 VAR_8 = FUNC_1(VAR_10);
 if (FUNC_0(VAR_10)) {
  FUNC_5(VAR_9, "Failed to issue 'Enter power save' command: %d\n",
   VAR_8);
  goto error_msg_to_dev;
 }
 VAR_8 = FUNC_7(FUNC_12(VAR_10),
      VAR_12, sizeof(VAR_12));
 if (VAR_8 == -VAR_0)
  FUNC_4(1, VAR_9, "Cannot enter power save mode\n");
 else if (VAR_8 < 0)
  FUNC_5(VAR_9, "'Enter power save' (0x%04x) command failed: "
   "%d - %s\n", VAR_4,
   VAR_8, VAR_12);
 else
  FUNC_4(1, VAR_9, "device ready to power save\n");
 FUNC_10(VAR_10);
error_msg_to_dev:
 FUNC_9(VAR_11);
error_alloc:
 return VAR_8;
}
