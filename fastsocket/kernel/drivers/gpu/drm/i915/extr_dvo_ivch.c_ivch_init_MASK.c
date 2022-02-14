
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ivch_priv {int quiet; int width; int height; } ;
struct intel_dvo_device {int slave_addr; struct ivch_priv* dev_priv; struct i2c_adapter* i2c_bus; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct intel_dvo_device*,int ,int*) ;
 int FUNC_2 (struct ivch_priv*) ;
 struct ivch_priv* FUNC_3 (int,int ) ;

__attribute__((used)) static bool FUNC_4(struct intel_dvo_device *VAR_5,
        struct i2c_adapter *VAR_6)
{
 struct ivch_priv *VAR_7;
 uint16_t VAR_8;

 VAR_7 = FUNC_3(sizeof(struct ivch_priv), VAR_0);
 if (VAR_7 == ((void*)0))
  return 0;

 VAR_5->i2c_bus = VAR_6;
 VAR_5->dev_priv = VAR_7;
 VAR_7->quiet = 1;

 if (!FUNC_1(VAR_5, VAR_1, &VAR_8))
  goto out;
 VAR_7->quiet = 0;





 if ((VAR_8 & VAR_2) != VAR_5->slave_addr) {
  FUNC_0("ivch detect failed due to address mismatch "
     "(%d vs %d)\n",
     (VAR_8 & VAR_2), VAR_5->slave_addr);
  goto out;
 }

 FUNC_1(VAR_5, VAR_3, &VAR_7->width);
 FUNC_1(VAR_5, VAR_4, &VAR_7->height);

 return 1;

out:
 FUNC_2(VAR_7);
 return 0;
}
