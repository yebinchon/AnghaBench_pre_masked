
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx25821_dev {int lock; int * i2c_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int* VAR_5 ;
 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cx25821_dev *VAR_6, int VAR_7,
           int VAR_8)
{
 int VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 VAR_12 = VAR_0;

 FUNC_2(&VAR_6->lock);


 if (VAR_7 < VAR_4 && VAR_7 > 128) {
  FUNC_3(&VAR_6->lock);
  return;
 }

 switch (VAR_7) {
 default:
  break;
 case 133:
 case 132:
  VAR_12 = VAR_1;
  break;
 case 131:
 case 130:
  VAR_12 = VAR_2;
  break;
 case 129:
 case 128:
  VAR_12 = VAR_3;
  break;
 }

 VAR_5[VAR_7] = VAR_8;


 VAR_10 = FUNC_0(&VAR_6->i2c_bus[0], VAR_12, &VAR_11);

 if (!(VAR_7 % 2))
 {
  VAR_10 &= 0xFFFF0000;
  VAR_10 |= VAR_8;
 } else {
  VAR_10 &= 0x0000FFFF;
  VAR_10 |= ((u32) VAR_8) << 16;
 }

 VAR_9 = FUNC_1(&VAR_6->i2c_bus[0], VAR_12, VAR_10);

 FUNC_3(&VAR_6->lock);
}
