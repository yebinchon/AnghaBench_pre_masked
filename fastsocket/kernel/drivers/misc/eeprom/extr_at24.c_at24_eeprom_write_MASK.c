
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_msg {unsigned int* buf; int len; scalar_t__ flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;
struct TYPE_2__ {int flags; int page_size; } ;
struct at24_data {size_t write_max; unsigned int* writebuf; scalar_t__ use_smbus; TYPE_1__ chip; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct i2c_client* FUNC_0 (struct at24_data*,unsigned int*) ;
 int FUNC_1 (int *,char*,size_t,unsigned int,int,unsigned long) ;
 int FUNC_2 (struct i2c_client*,unsigned int,size_t,char const*) ;
 int FUNC_3 (int ,struct i2c_msg*,int) ;
 unsigned long VAR_2 ;
 int FUNC_4 (unsigned int*,char const*,size_t) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 unsigned int FUNC_7 (unsigned int,int ) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int VAR_3 ;

__attribute__((used)) static ssize_t FUNC_9(struct at24_data *VAR_4, const char *VAR_5,
  unsigned VAR_6, size_t VAR_7)
{
 struct i2c_client *VAR_8;
 struct i2c_msg VAR_9;
 ssize_t VAR_10;
 unsigned long VAR_11, VAR_12;
 unsigned VAR_13;


 VAR_8 = FUNC_0(VAR_4, &VAR_6);


 if (VAR_7 > VAR_4->write_max)
  VAR_7 = VAR_4->write_max;


 VAR_13 = FUNC_7(VAR_6 + 1, VAR_4->chip.page_size);
 if (VAR_6 + VAR_7 > VAR_13)
  VAR_7 = VAR_13 - VAR_6;


 if (!VAR_4->use_smbus) {
  int VAR_14 = 0;

  VAR_9.addr = VAR_8->addr;
  VAR_9.flags = 0;


  VAR_9.buf = VAR_4->writebuf;
  if (VAR_4->chip.flags & VAR_0)
   VAR_9.buf[VAR_14++] = VAR_6 >> 8;

  VAR_9.buf[VAR_14++] = VAR_6;
  FUNC_4(&VAR_9.buf[VAR_14], VAR_5, VAR_7);
  VAR_9.len = VAR_14 + VAR_7;
 }






 VAR_11 = VAR_2 + FUNC_5(VAR_3);
 do {
  VAR_12 = VAR_2;
  if (VAR_4->use_smbus) {
   VAR_10 = FUNC_2(VAR_8,
     VAR_6, VAR_7, VAR_5);
   if (VAR_10 == 0)
    VAR_10 = VAR_7;
  } else {
   VAR_10 = FUNC_3(VAR_8->adapter, &VAR_9, 1);
   if (VAR_10 == 1)
    VAR_10 = VAR_7;
  }
  FUNC_1(&VAR_8->dev, "write %zu@%d --> %zd (%ld)\n",
    VAR_7, VAR_6, VAR_10, VAR_2);

  if (VAR_10 == VAR_7)
   return VAR_7;


  FUNC_6(1);
 } while (FUNC_8(VAR_12, VAR_11));

 return -VAR_1;
}
