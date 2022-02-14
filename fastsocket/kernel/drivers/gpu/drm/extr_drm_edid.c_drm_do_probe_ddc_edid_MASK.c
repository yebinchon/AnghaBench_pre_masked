
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; unsigned char* buf; int flags; int addr; } ;
struct i2c_adapter {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,unsigned char) ;

__attribute__((used)) static int
FUNC_2(struct i2c_adapter *VAR_5, unsigned char *VAR_6,
        int VAR_7, int VAR_8)
{
 unsigned char VAR_9 = VAR_7 * VAR_2;
 unsigned char VAR_10 = VAR_7 >> 1;
 unsigned char VAR_11 = VAR_10 ? 3 : 2;
 int VAR_12, VAR_13 = 5;







 do {
  struct i2c_msg VAR_14[] = {
   {
    .addr = VAR_1,
    .flags = 0,
    .len = 1,
    .buf = &VAR_10,
   }, {
    .addr = VAR_0,
    .flags = 0,
    .len = 1,
    .buf = &VAR_9,
   }, {
    .addr = VAR_0,
    .flags = VAR_4,
    .len = VAR_8,
    .buf = VAR_6,
   }
  };





  VAR_12 = FUNC_1(VAR_5, &VAR_14[3 - VAR_11], VAR_11);

  if (VAR_12 == -VAR_3) {
   FUNC_0("drm: skipping non-existent adapter %s\n",
     VAR_5->name);
   break;
  }
 } while (VAR_12 != VAR_11 && --VAR_13);

 return VAR_12 == VAR_11 ? 0 : -1;
}
