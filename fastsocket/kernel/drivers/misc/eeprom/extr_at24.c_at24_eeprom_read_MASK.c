
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct i2c_msg {unsigned int* buf; int len; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
struct TYPE_2__ {int flags; } ;
struct at24_data {scalar_t__ use_smbus; TYPE_1__ chip; } ;
typedef size_t ssize_t ;
typedef int msg ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 struct i2c_client* FUNC_0 (struct at24_data*,unsigned int*) ;
 int FUNC_1 (int *,char*,size_t,unsigned int,int,unsigned long) ;
 int FUNC_2 (struct i2c_client*,unsigned int,size_t,char*) ;
 int FUNC_3 (int ,struct i2c_msg*,int) ;
 size_t VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_4 (struct i2c_msg*,int ,int) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;
 int VAR_6 ;

__attribute__((used)) static ssize_t FUNC_8(struct at24_data *VAR_7, char *VAR_8,
  unsigned VAR_9, size_t VAR_10)
{
 struct i2c_msg VAR_11[2];
 u8 VAR_12[2];
 struct i2c_client *VAR_13;
 unsigned long VAR_14, VAR_15;
 int VAR_16, VAR_17;

 FUNC_4(VAR_11, 0, sizeof(VAR_11));
 VAR_13 = FUNC_0(VAR_7, &VAR_9);

 if (VAR_10 > VAR_4)
  VAR_10 = VAR_4;

 if (VAR_7->use_smbus) {

  if (VAR_10 > VAR_3)
   VAR_10 = VAR_3;
 } else {







  VAR_17 = 0;
  if (VAR_7->chip.flags & VAR_0)
   VAR_12[VAR_17++] = VAR_9 >> 8;
  VAR_12[VAR_17++] = VAR_9;

  VAR_11[0].addr = VAR_13->addr;
  VAR_11[0].buf = VAR_12;
  VAR_11[0].len = VAR_17;

  VAR_11[1].addr = VAR_13->addr;
  VAR_11[1].flags = VAR_2;
  VAR_11[1].buf = VAR_8;
  VAR_11[1].len = VAR_10;
 }






 VAR_14 = VAR_5 + FUNC_5(VAR_6);
 do {
  VAR_15 = VAR_5;
  if (VAR_7->use_smbus) {
   VAR_16 = FUNC_2(VAR_13, VAR_9,
     VAR_10, VAR_8);
  } else {
   VAR_16 = FUNC_3(VAR_13->adapter, VAR_11, 2);
   if (VAR_16 == 2)
    VAR_16 = VAR_10;
  }
  FUNC_1(&VAR_13->dev, "read %zu@%d --> %d (%ld)\n",
    VAR_10, VAR_9, VAR_16, VAR_5);

  if (VAR_16 == VAR_10)
   return VAR_10;


  FUNC_6(1);
 } while (FUNC_7(VAR_15, VAR_14));

 return -VAR_1;
}
