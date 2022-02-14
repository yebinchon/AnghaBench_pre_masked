
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int len; unsigned char* buf; int addr; } ;
struct i2c_adapter {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (int *,char*,unsigned char,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_adapter*,int,int,int ,unsigned char*,int) ;
 int FUNC_3 (struct i2c_adapter*,int,int,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_7, struct i2c_msg *VAR_8, int VAR_9)
{
 unsigned char VAR_10;
 struct i2c_msg *VAR_11;
 int VAR_12;

 FUNC_0(&VAR_7->dev, "master xfer %d messages:\n", VAR_9);

 for (VAR_12 = 0 ; VAR_12 < VAR_9 ; VAR_12++) {
  int VAR_13 = VAR_1;

  if (VAR_12 == 0)
   VAR_13 |= VAR_2;

  if (VAR_12 == VAR_9-1)
   VAR_13 |= VAR_3;

  VAR_11 = &VAR_8[VAR_12];

  FUNC_0(&VAR_7->dev,
   "  %d: %s (flags %d) %d bytes to 0x%02x\n",
   VAR_12, VAR_11->flags & VAR_5 ? "read" : "write",
   VAR_11->flags, VAR_11->len, VAR_11->addr);


  if (VAR_11->flags & VAR_5) {

   if (FUNC_2(VAR_7, VAR_13,
         VAR_11->flags, VAR_11->addr,
         VAR_11->buf, VAR_11->len) != VAR_11->len) {
    FUNC_1(&VAR_7->dev,
     "failure reading data\n");
    return -VAR_4;
   }
  } else {

   if (FUNC_3(VAR_7, VAR_13,
          VAR_11->flags, VAR_11->addr,
          VAR_11->buf, VAR_11->len) != VAR_11->len) {
    FUNC_1(&VAR_7->dev,
     "failure writing data\n");
    return -VAR_4;
   }
  }


  if (FUNC_2(VAR_7, VAR_0, 0, 0, &VAR_10, 1) != 1) {
   FUNC_1(&VAR_7->dev, "failure reading status\n");
   return -VAR_4;
  }

  FUNC_0(&VAR_7->dev, "  status = %d\n", VAR_10);
  if (VAR_10 == VAR_6)
   return -VAR_4;
 }

 return VAR_12;
}
