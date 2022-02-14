
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int dummy; } ;
struct i2400m_l3l4_hdr {int type; } ;
struct i2400m {scalar_t__ ready; struct wimax_dev wimax_dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int,struct device*,struct i2400m_l3l4_hdr const*,size_t) ;
 int FUNC_1 (int,struct device*,char*,char*,unsigned int,size_t) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (struct i2400m*,struct i2400m_l3l4_hdr const*,size_t) ;
 unsigned int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct wimax_dev*,char*,struct i2400m_l3l4_hdr const*,size_t,int ) ;

__attribute__((used)) static
void FUNC_8(struct i2400m *VAR_2,
       const void *VAR_3, size_t VAR_4)
{
 int VAR_5;
 struct device *VAR_6 = FUNC_3(VAR_2);
 struct wimax_dev *VAR_7 = &VAR_2->wimax_dev;
 const struct i2400m_l3l4_hdr *VAR_8 = VAR_3;
 unsigned VAR_9;

 VAR_5 = FUNC_4(VAR_2, VAR_8, VAR_4);
 if (VAR_5 < 0) {
  FUNC_2(VAR_6, "HW BUG? device sent a bad trace message: %d\n",
   VAR_5);
  goto error_check;
 }
 VAR_9 = FUNC_5(VAR_8->type);
 FUNC_1(1, VAR_6, "Trace %s 0x%04x: %zu bytes\n",
   VAR_9 & VAR_1 ? "REPORT" : "CMD/SET/GET",
   VAR_9, VAR_4);
 FUNC_0(2, VAR_6, VAR_8, VAR_4);
 if (FUNC_6(VAR_2->ready == 0))
  return;
 VAR_5 = FUNC_7(VAR_7, "trace", VAR_8, VAR_4, VAR_0);
 if (VAR_5 < 0)
  FUNC_2(VAR_6, "error sending trace to userspace: %d\n",
   VAR_5);
error_check:
 return;
}
