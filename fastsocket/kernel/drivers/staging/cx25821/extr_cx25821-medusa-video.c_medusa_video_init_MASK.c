
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx25821_dev {int _max_num_decoders; int lock; int * i2c_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct cx25821_dev*,int,int ) ;
 int FUNC_3 (struct cx25821_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct cx25821_dev *VAR_9)
{
 u32 VAR_10 = 0, VAR_11 = 0;
 int VAR_12 = 0;
 int VAR_13 = 0;

 FUNC_4(&VAR_9->lock);

 VAR_8 = VAR_9->_max_num_decoders;


 VAR_10 = FUNC_0(&VAR_9->i2c_bus[0], VAR_5, &VAR_11);
 VAR_10 &= 0xFFFFF0FF;
 VAR_12 = FUNC_1(&VAR_9->i2c_bus[0], VAR_5, VAR_10);

 if (VAR_12 < 0) {
  FUNC_5(&VAR_9->lock);
  return -VAR_3;
 }

 VAR_10 = FUNC_0(&VAR_9->i2c_bus[0], VAR_5, &VAR_11);
 VAR_10 &= 0xFFFFFFDF;
 VAR_12 = FUNC_1(&VAR_9->i2c_bus[0], VAR_5, VAR_10);

 if (VAR_12 < 0) {
  FUNC_5(&VAR_9->lock);
  return -VAR_3;
 }

 FUNC_5(&VAR_9->lock);

 for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
  FUNC_2(VAR_9, VAR_13, VAR_7[VAR_13]);
 }

 FUNC_4(&VAR_9->lock);


 VAR_10 = FUNC_0(&VAR_9->i2c_bus[0], VAR_2, &VAR_11);
 VAR_10 &= 0xFF70FF70;
 VAR_10 |= 0x00090008;
 VAR_12 = FUNC_1(&VAR_9->i2c_bus[0], VAR_2, VAR_10);

 if (VAR_12 < 0) {
  FUNC_5(&VAR_9->lock);
  return -VAR_3;
 }

 VAR_10 = FUNC_0(&VAR_9->i2c_bus[0], VAR_1, &VAR_11);
 VAR_10 |= 0x00040100;
 VAR_12 = FUNC_1(&VAR_9->i2c_bus[0], VAR_1, VAR_10);

 if (VAR_12 < 0) {
  FUNC_5(&VAR_9->lock);
  return -VAR_3;
 }

 VAR_10 = FUNC_0(&VAR_9->i2c_bus[0], VAR_0, &VAR_11);
 VAR_10 &= 0x83FFFFFF;
 VAR_12 =
     FUNC_1(&VAR_9->i2c_bus[0], VAR_0,
         VAR_10 | 0x10000000);

 if (VAR_12 < 0) {
  FUNC_5(&VAR_9->lock);
  return -VAR_3;
 }

 VAR_10 = FUNC_0(&VAR_9->i2c_bus[0], VAR_6, &VAR_11);
 VAR_10 &= 0xFEF0FE00;
 if (VAR_8 == VAR_4) {


  VAR_10 |= 0x010001F8;
 } else {
  VAR_10 |= 0x010F0108;
 }

 VAR_10 |= 7;
 VAR_12 = FUNC_1(&VAR_9->i2c_bus[0], VAR_6, VAR_10);
 if (VAR_12 < 0) {
  FUNC_5(&VAR_9->lock);
  return -VAR_3;
 }

 FUNC_5(&VAR_9->lock);

 VAR_12 = FUNC_3(VAR_9);

 if (VAR_12 < 0) {
  FUNC_5(&VAR_9->lock);
  return -VAR_3;
 }

 return 1;
}
