
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct pxa_i2c {int slave_addr; TYPE_1__ adap; scalar_t__ fast_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pxa_i2c*) ;
 int FUNC_1 (struct pxa_i2c*) ;
 int FUNC_2 (struct pxa_i2c*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct pxa_i2c*) ;
 int FUNC_5 (struct pxa_i2c*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static void FUNC_10(struct pxa_i2c *VAR_8)
{
 FUNC_6("Resetting I2C Controller Unit\n");


 FUNC_4(VAR_8);


 FUNC_9(VAR_7, FUNC_0(VAR_8));
 FUNC_9(VAR_1, FUNC_2(VAR_8));
 FUNC_9(FUNC_7(FUNC_0(VAR_8)) & ~VAR_7, FUNC_0(VAR_8));

 FUNC_9(VAR_8->slave_addr, FUNC_1(VAR_8));


 FUNC_9(VAR_0 | (VAR_8->fast_mode ? VAR_3 : 0), FUNC_0(VAR_8));






 FUNC_5(VAR_8, 0);


 FUNC_9(FUNC_7(FUNC_0(VAR_8)) | VAR_4, FUNC_0(VAR_8));
 FUNC_8(100);
}
