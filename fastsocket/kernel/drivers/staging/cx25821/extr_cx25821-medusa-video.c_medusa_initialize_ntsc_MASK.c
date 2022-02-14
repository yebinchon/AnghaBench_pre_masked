
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx25821_dev {int lock; int * i2c_bus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,scalar_t__,int*) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (struct cx25821_dev*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct cx25821_dev *VAR_20)
{
 int VAR_21 = 0;
 int VAR_22 = 0;
 u32 VAR_23 = 0;
 u32 VAR_24 = 0;

 FUNC_4(&VAR_20->lock);

 for (VAR_22 = 0; VAR_22 < VAR_11; VAR_22++) {

  VAR_23 =
      FUNC_1(&VAR_20->i2c_bus[0], VAR_14 + (0x200 * VAR_22),
         &VAR_24);
  VAR_23 &= 0xFFFFFFF0;
  VAR_23 |= 0x10001;
  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0], VAR_14 + (0x200 * VAR_22),
          VAR_23);


  VAR_23 =
      FUNC_1(&VAR_20->i2c_bus[0],
         VAR_9 + (0x200 * VAR_22), &VAR_24);
  VAR_23 &= 0x00C00C00;
  VAR_23 |= 0x612D0074;
  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0],
          VAR_9 + (0x200 * VAR_22), VAR_23);

  VAR_23 =
      FUNC_1(&VAR_20->i2c_bus[0],
         VAR_18 + (0x200 * VAR_22), &VAR_24);
  VAR_23 &= 0x00C00C00;
  VAR_23 |= 0x1C1E001A;
  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0],
          VAR_18 + (0x200 * VAR_22), VAR_23);


  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0],
          VAR_17 + (0x200 * VAR_22), 0x43E00000);


  VAR_23 =
      FUNC_1(&VAR_20->i2c_bus[0],
         VAR_16 + (0x200 * VAR_22), &VAR_24);
  VAR_23 &= 0xFFFBFFFF;
  VAR_23 |= 0x00040000;
  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0],
          VAR_16 + (0x200 * VAR_22), VAR_23);


  VAR_23 =
      FUNC_1(&VAR_20->i2c_bus[0], VAR_15 + (0x200 * VAR_22),
         &VAR_24);
  VAR_23 &= 0xFFFBFFFF;
  VAR_23 |= 0x00040000;
  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0], VAR_15 + (0x200 * VAR_22),
          VAR_23);




  VAR_23 =
      FUNC_1(&VAR_20->i2c_bus[0],
         VAR_13 + (0x200 * VAR_22), &VAR_24);
  VAR_23 = FUNC_6(VAR_23, 14);
  VAR_23 = FUNC_0(VAR_23, 15);
  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0],
          VAR_13 + (0x200 * VAR_22), VAR_23);


  VAR_23 =
      FUNC_1(&VAR_20->i2c_bus[0], VAR_8 + (0x200 * VAR_22),
         &VAR_24);
  VAR_23 = FUNC_0(VAR_23, 29);
  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0], VAR_8 + (0x200 * VAR_22),
          VAR_23);


  FUNC_3(VAR_20, VAR_22, 1);
 }

 for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++) {

  VAR_23 =
      FUNC_1(&VAR_20->i2c_bus[0],
         VAR_1 + (0x100 * VAR_22), &VAR_24);
  VAR_23 &= 0xF000FC00;
  VAR_23 |= 0x06B402D0;
  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0],
          VAR_1 + (0x100 * VAR_22), VAR_23);


  VAR_23 =
      FUNC_1(&VAR_20->i2c_bus[0],
         VAR_2 + (0x100 * VAR_22), &VAR_24);
  VAR_23 &= 0xFF000000;
  VAR_23 |= 0x007E9054;
  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0],
          VAR_2 + (0x100 * VAR_22), VAR_23);

  VAR_23 =
      FUNC_1(&VAR_20->i2c_bus[0],
         VAR_3 + (0x100 * VAR_22), &VAR_24);
  VAR_23 &= 0xFC00FE00;
  VAR_23 |= 0x00EC00F0;
  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0],
          VAR_3 + (0x100 * VAR_22), VAR_23);


  VAR_23 =
      FUNC_1(&VAR_20->i2c_bus[0],
         VAR_4 + (0x100 * VAR_22), &VAR_24);
  VAR_23 &= 0x00FCFFFF;
  VAR_23 |= 0x13020000;
  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0],
          VAR_4 + (0x100 * VAR_22), VAR_23);

  VAR_23 =
      FUNC_1(&VAR_20->i2c_bus[0],
         VAR_5 + (0x100 * VAR_22), &VAR_24);
  VAR_23 &= 0xFFFF0000;
  VAR_23 |= 0x0000E575;
  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0],
          VAR_5 + (0x100 * VAR_22), VAR_23);

  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0],
          VAR_6 + (0x100 * VAR_22), 0x009A89C1);


  VAR_21 =
      FUNC_2(&VAR_20->i2c_bus[0],
          VAR_7 + (0x100 * VAR_22), 0x21F07C1F);
 }


 VAR_21 = FUNC_2(&VAR_20->i2c_bus[0], VAR_10, 0x0);
 VAR_21 = FUNC_2(&VAR_20->i2c_bus[0], VAR_19, 0x0);


 VAR_23 = FUNC_1(&VAR_20->i2c_bus[0], VAR_0, &VAR_24);
 VAR_23 |= 0x00080200;
 VAR_21 = FUNC_2(&VAR_20->i2c_bus[0], VAR_0, VAR_23);

 FUNC_5(&VAR_20->lock);

 return VAR_21;
}
