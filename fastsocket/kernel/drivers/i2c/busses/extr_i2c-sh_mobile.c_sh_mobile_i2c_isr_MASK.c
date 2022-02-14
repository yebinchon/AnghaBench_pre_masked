
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_i2c_data {unsigned char sr; int wait; TYPE_1__* msg; int pos; int dev; } ;
struct platform_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int flags; int len; } ;


 int VAR_0 ;
 int FUNC_0 (struct sh_mobile_i2c_data*) ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 int FUNC_1 (int ,char*,unsigned char,unsigned char,char*,int ,int ) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (unsigned char,int ) ;
 struct sh_mobile_i2c_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct sh_mobile_i2c_data*) ;
 int FUNC_6 (struct sh_mobile_i2c_data*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 struct platform_device *VAR_8 = VAR_7;
 struct sh_mobile_i2c_data *VAR_9 = FUNC_4(VAR_8);
 unsigned char VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(FUNC_0(VAR_9));
 VAR_9->sr |= VAR_10;

 FUNC_1(VAR_9->dev, "i2c_isr 0x%02x 0x%02x %s %d %d!\n", VAR_10, VAR_9->sr,
        (VAR_9->msg->flags & VAR_0) ? "read" : "write",
        VAR_9->pos, VAR_9->msg->len);

 if (VAR_10 & (VAR_1 | VAR_2)) {

  FUNC_3(VAR_10 & ~(VAR_1 | VAR_2), FUNC_0(VAR_9));
  VAR_11 = 0;
 } else if (VAR_9->msg->flags & VAR_0)
  VAR_11 = FUNC_5(VAR_9);
 else
  VAR_11 = FUNC_6(VAR_9);

 if (VAR_10 & VAR_3)
  FUNC_3(VAR_10 & ~VAR_3, FUNC_0(VAR_9));

 if (VAR_11) {
  VAR_9->sr |= VAR_5;
  FUNC_7(&VAR_9->wait);
 }

 return VAR_4;
}
