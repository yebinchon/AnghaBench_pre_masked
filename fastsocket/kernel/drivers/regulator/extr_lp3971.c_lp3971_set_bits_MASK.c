
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct lp3971 {int io_lock; int dev; int i2c; } ;


 int FUNC_0 (int ,char*,int,unsigned int) ;
 int FUNC_1 (int ,scalar_t__,int,int*) ;
 int FUNC_2 (int ,scalar_t__,int,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct lp3971 *VAR_0, u8 VAR_1, u16 VAR_2, u16 VAR_3)
{
 u16 VAR_4;
 int VAR_5;

 FUNC_3(&VAR_0->io_lock);

 VAR_5 = FUNC_1(VAR_0->i2c, VAR_1, 1, &VAR_4);
 VAR_4 = (VAR_4 & ~VAR_2) | VAR_3;
 if (VAR_5 == 0) {
  VAR_5 = FUNC_2(VAR_0->i2c, VAR_1, 1, &VAR_4);
  FUNC_0(VAR_0->dev, "reg write 0x%02x -> 0x%02x\n", (int)VAR_1,
   (unsigned)VAR_3&0xff);
 }
 FUNC_4(&VAR_0->io_lock);

 return VAR_5;
}
