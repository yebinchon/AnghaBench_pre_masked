
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx25821_dev {int lock; int * i2c_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,scalar_t__,int*) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int,int,int,int ,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct cx25821_dev *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 int VAR_10 = 0;
 u32 VAR_11 = 0, VAR_12 = 0;

 FUNC_3(&VAR_6->lock);

 if ((VAR_7 > VAR_4)
     || (VAR_7 < VAR_5)) {
  FUNC_4(&VAR_6->lock);
  return -1;
 }

 VAR_9 =
     FUNC_2(VAR_5, VAR_4, VAR_7,
   VAR_1, VAR_0, &VAR_10);

 VAR_11 =
     FUNC_0(&VAR_6->i2c_bus[0],
        VAR_2 + (0x200 * VAR_8), &VAR_12);
 VAR_11 &= 0xFFFFFF00;
 VAR_9 |=
     FUNC_1(&VAR_6->i2c_bus[0],
         VAR_2 + (0x200 * VAR_8),
         VAR_11 | VAR_10);

 VAR_11 =
     FUNC_0(&VAR_6->i2c_bus[0],
        VAR_3 + (0x200 * VAR_8), &VAR_12);
 VAR_11 &= 0xFFFFFF00;
 VAR_9 |=
     FUNC_1(&VAR_6->i2c_bus[0],
         VAR_3 + (0x200 * VAR_8),
         VAR_11 | VAR_10);

 FUNC_4(&VAR_6->lock);
 return VAR_9;
}
