
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct sdio_func {struct device dev; } ;
struct i2400ms {struct sdio_func* func; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,struct device*,char*,struct i2400ms*,long) ;
 int FUNC_1 (int,struct device*,char*,struct i2400ms*) ;
 int FUNC_2 (int,struct device*,char*,long) ;
 int FUNC_3 (struct device*,char*,int,unsigned int,int) ;
 int FUNC_4 (struct sdio_func*,unsigned int,int*) ;

ssize_t FUNC_5(struct i2400ms *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 ssize_t VAR_5;
 unsigned VAR_6;
 struct sdio_func *VAR_7 = VAR_1->func;
 struct device *VAR_8 = &VAR_1->func->dev;

 FUNC_1(7, VAR_8, "(i2400ms %p)\n", VAR_1);
 VAR_6 = VAR_0;
 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  VAR_4 = FUNC_4(VAR_7, VAR_6 + VAR_3, &VAR_2);
  if (VAR_2 < 0) {
   FUNC_3(VAR_8, "RX: Can't read byte %d of RX size from "
    "0x%08x: %d\n", VAR_3, VAR_6 + VAR_3, VAR_2);
   VAR_5 = VAR_2;
   goto error_read;
  }
  VAR_5 = VAR_5 << 8 | (VAR_4 & 0xff);
 }
 FUNC_2(6, VAR_8, "RX: rx_size is %ld\n", (long) VAR_5);
error_read:
 FUNC_0(7, VAR_8, "(i2400ms %p) = %ld\n", VAR_1, (long) VAR_5);
 return VAR_5;
}
