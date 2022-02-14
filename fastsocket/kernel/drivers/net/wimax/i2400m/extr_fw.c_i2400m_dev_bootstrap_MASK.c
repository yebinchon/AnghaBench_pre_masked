
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_bcf_hdr {int dummy; } ;
struct i2400m {char** bus_fw_names; char const* fw_name; } ;
struct firmware {int size; scalar_t__ data; } ;
struct device {int dummy; } ;
typedef enum i2400m_bri { ____Placeholder_i2400m_bri } i2400m_bri ;


 int VAR_0 ;
 int FUNC_0 (int,struct device*,char*,struct i2400m*,int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (struct i2400m*,struct i2400m_bcf_hdr const*,int ) ;
 int FUNC_5 (struct i2400m*,struct i2400m_bcf_hdr const*,int ,int) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,char const*,struct device*) ;

int FUNC_8(struct i2400m *VAR_1, enum i2400m_bri VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 struct device *VAR_5 = FUNC_3(VAR_1);
 const struct firmware *VAR_6;
 const struct i2400m_bcf_hdr *VAR_7;
 const char *VAR_8;

 FUNC_1(5, VAR_5, "(i2400m %p)\n", VAR_1);


 VAR_4 = 0;
 while(1) {
  VAR_8 = VAR_1->bus_fw_names[VAR_4];
  if (VAR_8 == ((void*)0)) {
   FUNC_2(VAR_5, "Could not find a usable firmware image\n");
   VAR_3 = -VAR_0;
   goto error_no_fw;
  }
  VAR_3 = FUNC_7(&VAR_6, VAR_8, VAR_5);
  if (VAR_3 == 0)
   break;
  if (VAR_3 < 0)
   FUNC_2(VAR_5, "fw %s: cannot load file: %d\n",
    VAR_8, VAR_3);
  VAR_4++;
 }

 VAR_7 = (void *) VAR_6->data;
 VAR_1->fw_name = VAR_8;
 VAR_3 = FUNC_4(VAR_1, VAR_7, VAR_6->size);
 if (VAR_3 < 0)
  goto error_fw_bad;
 VAR_3 = FUNC_5(VAR_1, VAR_7, VAR_6->size, VAR_2);
error_fw_bad:
 FUNC_6(VAR_6);
error_no_fw:
 FUNC_0(5, VAR_5, "(i2400m %p) = %d\n", VAR_1, VAR_3);
 return VAR_3;
}
