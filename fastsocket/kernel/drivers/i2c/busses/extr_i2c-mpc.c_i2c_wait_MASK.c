
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpc_i2c {scalar_t__ irq; int interrupt; int dev; int queue; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned long,unsigned int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int,unsigned int) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (struct mpc_i2c*,int ) ;

__attribute__((used)) static int FUNC_8(struct mpc_i2c *VAR_10, unsigned VAR_11, int VAR_12)
{
 unsigned long VAR_13 = VAR_9;
 u32 VAR_14;
 int VAR_15 = 0;

 if (VAR_10->irq == VAR_8) {
  while (!(FUNC_1(VAR_10->base + VAR_7) & VAR_3)) {
   FUNC_2();
   if (FUNC_3(VAR_9, VAR_13 + VAR_11)) {
    FUNC_0(VAR_10->dev, "timeout\n");
    FUNC_7(VAR_10, 0);
    VAR_15 = -VAR_5;
    break;
   }
  }
  VAR_14 = FUNC_1(VAR_10->base + VAR_7);
  FUNC_6(0, VAR_10->base + VAR_7);
 } else {

  VAR_15 = FUNC_5(VAR_10->queue,
   (VAR_10->interrupt & VAR_3), VAR_11);

  if (FUNC_4(!(VAR_10->interrupt & VAR_3))) {
   FUNC_0(VAR_10->dev, "wait timeout\n");
   FUNC_7(VAR_10, 0);
   VAR_15 = -VAR_6;
  }

  VAR_14 = VAR_10->interrupt;
  VAR_10->interrupt = 0;
 }

 if (VAR_15 < 0)
  return VAR_15;

 if (!(VAR_14 & VAR_2)) {
  FUNC_0(VAR_10->dev, "unfinished\n");
  return -VAR_5;
 }

 if (VAR_14 & VAR_1) {
  FUNC_0(VAR_10->dev, "MAL\n");
  return -VAR_5;
 }

 if (VAR_12 && (VAR_14 & VAR_4)) {
  FUNC_0(VAR_10->dev, "No RXAK\n");

  FUNC_7(VAR_10, VAR_0);
  return -VAR_5;
 }
 return 0;
}
