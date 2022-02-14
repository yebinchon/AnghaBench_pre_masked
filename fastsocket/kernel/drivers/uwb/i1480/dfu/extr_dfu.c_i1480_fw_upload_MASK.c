
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i1480 {int (* rc_release ) (struct i1480*) ;int dev; int mac_fw_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct i1480*) ;
 int FUNC_3 (struct i1480*) ;
 int FUNC_4 (struct i1480*) ;
 int FUNC_5 (struct i1480*) ;
 int FUNC_6 (struct i1480*) ;

int FUNC_7(struct i1480 *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2 < 0 && VAR_2 != -VAR_0) {
  FUNC_5(VAR_1);
  goto error;
 }
 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 < 0) {
  if (VAR_2 == -VAR_0)
   FUNC_0(VAR_1->dev, "Cannot locate MAC FW file '%s'\n",
    VAR_1->mac_fw_name);
  else
   FUNC_5(VAR_1);
  goto error;
 }
 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 < 0 && VAR_2 != -VAR_0) {
  FUNC_5(VAR_1);
  goto error_rc_release;
 }




 FUNC_1(VAR_1->dev, "firmware uploaded successfully\n");
error_rc_release:
 if (VAR_1->rc_release)
  VAR_1->rc_release(VAR_1);
 VAR_2 = 0;
error:
 return VAR_2;
}
