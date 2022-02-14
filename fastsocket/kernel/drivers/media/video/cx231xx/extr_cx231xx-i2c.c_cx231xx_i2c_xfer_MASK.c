
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int addr; int flags; int len; int * buf; } ;
struct i2c_adapter {struct cx231xx_i2c* algo_data; } ;
struct cx231xx_i2c {int nr; struct cx231xx* dev; } ;
struct cx231xx {int i2c_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*) ;
 int FUNC_2 (struct i2c_adapter*,struct i2c_msg*,struct i2c_msg*) ;
 int FUNC_3 (struct i2c_adapter*,struct i2c_msg*) ;
 int FUNC_4 (int,char*,...) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static int FUNC_8(struct i2c_adapter *VAR_2,
       struct i2c_msg VAR_3[], int VAR_4)
{
 struct cx231xx_i2c *VAR_5 = VAR_2->algo_data;
 struct cx231xx *VAR_6 = VAR_5->dev;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 if (VAR_4 <= 0)
  return 0;
 FUNC_5(&VAR_6->i2c_lock);
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {

  VAR_7 = VAR_3[VAR_9].addr >> 1;

  FUNC_4(2, "%s %s addr=%x len=%d:",
    (VAR_3[VAR_9].flags & VAR_0) ? "read" : "write",
    VAR_9 == VAR_4 - 1 ? "stop" : "nonstop", VAR_7, VAR_3[VAR_9].len);
  if (!VAR_3[VAR_9].len) {

   VAR_8 = FUNC_0(VAR_2, &VAR_3[VAR_9]);
   if (VAR_8 < 0) {
    FUNC_4(2, " no device\n");
    FUNC_6(&VAR_6->i2c_lock);
    return VAR_8;
   }

  } else if (VAR_3[VAR_9].flags & VAR_0) {

   VAR_8 = FUNC_1(VAR_2, &VAR_3[VAR_9]);
   if (VAR_1 >= 2) {
    for (VAR_10 = 0; VAR_10 < VAR_3[VAR_9].len; VAR_10++)
     FUNC_7(" %02x", VAR_3[VAR_9].buf[VAR_10]);
   }
  } else if (VAR_9 + 1 < VAR_4 && (VAR_3[VAR_9 + 1].flags & VAR_0) &&
      VAR_3[VAR_9].addr == VAR_3[VAR_9 + 1].addr
      && (VAR_3[VAR_9].len <= 2) && (VAR_5->nr < 3)) {

   VAR_8 = FUNC_2(VAR_2,
              &VAR_3[VAR_9],
              &VAR_3[VAR_9 + 1]);
   if (VAR_1 >= 2) {
    for (VAR_10 = 0; VAR_10 < VAR_3[VAR_9].len; VAR_10++)
     FUNC_7(" %02x", VAR_3[VAR_9].buf[VAR_10]);
   }
   VAR_9++;
  } else {

   if (VAR_1 >= 2) {
    for (VAR_10 = 0; VAR_10 < VAR_3[VAR_9].len; VAR_10++)
     FUNC_7(" %02x", VAR_3[VAR_9].buf[VAR_10]);
   }
   VAR_8 = FUNC_3(VAR_2, &VAR_3[VAR_9]);
  }
  if (VAR_8 < 0)
   goto err;
  if (VAR_1 >= 2)
   FUNC_7("\n");
 }
 FUNC_6(&VAR_6->i2c_lock);
 return VAR_4;
err:
 FUNC_4(2, " ERROR: %i\n", VAR_8);
 FUNC_6(&VAR_6->i2c_lock);
 return VAR_8;
}
