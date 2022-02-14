
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pasemi_smbus {int dummy; } ;
struct i2c_msg {int flags; int addr; int len; int* buf; } ;
struct i2c_adapter {struct pasemi_smbus* algo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct pasemi_smbus*) ;
 int FUNC_1 (struct pasemi_smbus*,int) ;
 int FUNC_2 (struct pasemi_smbus*) ;
 int FUNC_3 (struct pasemi_smbus*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_adapter *VAR_12,
          struct i2c_msg *VAR_13, int VAR_14)
{
 struct pasemi_smbus *VAR_15 = VAR_12->algo_data;
 int VAR_16, VAR_17, VAR_18;
 u32 VAR_19;

 VAR_16 = VAR_13->flags & VAR_5 ? 1 : 0;

 FUNC_1(VAR_15, VAR_9 | (VAR_13->addr << 1) | VAR_16);

 if (VAR_16) {
  FUNC_1(VAR_15, VAR_13->len | VAR_8 |
     (VAR_14 ? VAR_10 : 0));

  VAR_18 = FUNC_2(VAR_15);
  if (VAR_18)
   goto reset_out;

  for (VAR_17 = 0; VAR_17 < VAR_13->len; VAR_17++) {
   VAR_19 = FUNC_0(VAR_15);
   if (VAR_19 & VAR_7) {
    VAR_18 = -VAR_4;
    goto reset_out;
   }
   VAR_13->buf[VAR_17] = VAR_19 & VAR_6;
  }
 } else {
  for (VAR_17 = 0; VAR_17 < VAR_13->len - 1; VAR_17++)
   FUNC_1(VAR_15, VAR_13->buf[VAR_17]);

  FUNC_1(VAR_15, VAR_13->buf[VAR_13->len-1] |
     (VAR_14 ? VAR_10 : 0));
 }

 return 0;

 reset_out:
 FUNC_3(VAR_15, VAR_11, (VAR_3 | VAR_2 |
    (VAR_0 & VAR_1)));
 return VAR_18;
}
