
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2400m_bcf_hdr {int module_id; } ;
struct i2400m {scalar_t__ sboot; int fw_name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ,int) ;
 struct device* FUNC_1 (struct i2400m*) ;
 int FUNC_2 (struct i2400m*) ;
 int FUNC_3 (struct i2400m*,struct i2400m_bcf_hdr const*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static
int FUNC_5(struct i2400m *VAR_2, const struct i2400m_bcf_hdr *VAR_3)
{
 int VAR_4;
 struct device *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6 = FUNC_4(VAR_3->module_id);

 if (VAR_2->sboot == 0
     && (VAR_6 & VAR_1) == 0) {

  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4 == -VAR_0)
   return VAR_4;
  if (VAR_4 < 0)
   FUNC_0(VAR_5, "fw %s: non-signed download "
    "initialization failed: %d\n",
    VAR_2->fw_name, VAR_4);
 } else if (VAR_2->sboot == 0
   && (VAR_6 & VAR_1)) {

  VAR_4 = 0;
 } else {
  VAR_4 = FUNC_3(VAR_2, VAR_3);
  if (VAR_4 == -VAR_0)
   return VAR_4;
  if (VAR_4 < 0)
   FUNC_0(VAR_5, "fw %s: signed boot download "
    "initialization failed: %d\n",
    VAR_2->fw_name, VAR_4);
 }
 return VAR_4;
}
