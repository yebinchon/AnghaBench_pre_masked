
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct i2400m_report_hook_args {size_t size; struct i2400m_l3l4_hdr const* l3l4_hdr; struct sk_buff* skb_rx; } ;
struct i2400m_l3l4_hdr {int type; } ;
struct i2400m {scalar_t__ ready; int trace_msg_from_user; int wimax_dev; } ;
struct device {int dummy; } ;
typedef int args ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,struct device*,struct i2400m_l3l4_hdr const*,size_t) ;
 int FUNC_1 (int,struct device*,char*,char*,unsigned int,size_t) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (struct i2400m*,struct i2400m_l3l4_hdr const*,size_t) ;
 int FUNC_5 (struct i2400m*,int ,int ,struct i2400m_report_hook_args*,int) ;
 int VAR_2 ;
 int FUNC_6 (struct i2400m*,void const*,size_t) ;
 unsigned int FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *,char*,struct i2400m_l3l4_hdr const*,size_t,int ) ;

__attribute__((used)) static
void FUNC_11(struct i2400m *VAR_3, struct sk_buff *VAR_4,
     const void *VAR_5, size_t VAR_6)
{
 int VAR_7;
 struct device *VAR_8 = FUNC_3(VAR_3);
 const struct i2400m_l3l4_hdr *VAR_9 = VAR_5;
 unsigned VAR_10;

 VAR_7 = FUNC_4(VAR_3, VAR_9, VAR_6);
 if (VAR_7 < 0) {
  FUNC_2(VAR_8, "HW BUG? device sent a bad message: %d\n",
   VAR_7);
  goto error_check;
 }
 VAR_10 = FUNC_7(VAR_9->type);
 FUNC_1(1, VAR_8, "%s 0x%04x: %zu bytes\n",
   VAR_10 & VAR_1 ? "REPORT" : "CMD/SET/GET",
   VAR_10, VAR_6);
 FUNC_0(2, VAR_8, VAR_9, VAR_6);
 if (VAR_10 & VAR_1) {





  struct i2400m_report_hook_args VAR_11 = {
   .skb_rx = VAR_4,
   .l3l4_hdr = VAR_9,
   .size = VAR_6
  };
  if (FUNC_9(VAR_3->ready == 0))
   return;
  FUNC_8(VAR_4);
  FUNC_5(VAR_3, VAR_2,
      VAR_0, &VAR_11, sizeof(VAR_11));
  if (FUNC_9(VAR_3->trace_msg_from_user))
   FUNC_10(&VAR_3->wimax_dev, "echo",
      VAR_9, VAR_6, VAR_0);
  VAR_7 = FUNC_10(&VAR_3->wimax_dev, ((void*)0), VAR_9, VAR_6,
       VAR_0);
  if (VAR_7 < 0)
   FUNC_2(VAR_8, "error sending report to userspace: %d\n",
    VAR_7);
 } else
  FUNC_6(VAR_3, VAR_5, VAR_6);
error_check:
 return;
}
