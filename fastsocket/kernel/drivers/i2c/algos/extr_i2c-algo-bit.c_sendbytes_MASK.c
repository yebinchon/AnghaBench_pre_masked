
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {unsigned char* buf; int len; unsigned short flags; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct i2c_adapter*,unsigned char const) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_2, struct i2c_msg *VAR_3)
{
 const unsigned char *VAR_4 = VAR_3->buf;
 int VAR_5 = VAR_3->len;
 unsigned short VAR_6 = VAR_3->flags & VAR_1;
 int VAR_7;
 int VAR_8 = 0;

 while (VAR_5 > 0) {
  VAR_7 = FUNC_1(VAR_2, *VAR_4);


  if ((VAR_7 > 0) || (VAR_6 && (VAR_7 == 0))) {
   VAR_5--;
   VAR_4++;
   VAR_8++;





  } else if (VAR_7 == 0) {
   FUNC_0(&VAR_2->dev, "sendbytes: NAK bailout.\n");
   return -VAR_0;
  } else {
   FUNC_0(&VAR_2->dev, "sendbytes: error %d\n",
     VAR_7);
   return VAR_7;
  }
 }
 return VAR_8;
}
