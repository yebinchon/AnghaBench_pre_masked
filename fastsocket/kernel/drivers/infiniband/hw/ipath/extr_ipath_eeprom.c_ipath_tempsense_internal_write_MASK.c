
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ipath_devdata {int dummy; } ;
struct i2c_chain_desc {int temp_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ipath_devdata*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ipath_devdata*,char*,int ) ;
 struct i2c_chain_desc* FUNC_3 (struct ipath_devdata*) ;
 int FUNC_4 (struct ipath_devdata*) ;
 int FUNC_5 (struct ipath_devdata*,int ) ;

__attribute__((used)) static int FUNC_6(struct ipath_devdata *VAR_5,
       u8 VAR_6, u8 VAR_7)
{
 int VAR_8 = -VAR_0;
 struct i2c_chain_desc *VAR_9;

 VAR_9 = FUNC_3(VAR_5);
 if (!VAR_9)
  goto bail;

 if (VAR_9->temp_dev == VAR_2) {

  VAR_8 = -VAR_1;
  goto bail;
 }
 if (FUNC_0(VAR_5, VAR_9->temp_dev | VAR_4)) {
  FUNC_1("Failed tempsense startcmd\n");
  FUNC_4(VAR_5);
  VAR_8 = -VAR_1;
  goto bail;
 }
 VAR_8 = FUNC_5(VAR_5, VAR_6);
 if (VAR_8) {
  FUNC_4(VAR_5);
  FUNC_2(VAR_5, "Failed to write tempsense command %02X\n",
         VAR_6);
  VAR_8 = -VAR_1;
  goto bail;
 }
 VAR_8 = FUNC_5(VAR_5, VAR_7);
 FUNC_4(VAR_5);
 VAR_8 = FUNC_0(VAR_5, VAR_9->temp_dev | VAR_3);
 if (VAR_8) {
  FUNC_2(VAR_5, "Failed tempsense data wrt to %02X\n",
         VAR_6);
  VAR_8 = -VAR_1;
 }

bail:
 return VAR_8;
}
