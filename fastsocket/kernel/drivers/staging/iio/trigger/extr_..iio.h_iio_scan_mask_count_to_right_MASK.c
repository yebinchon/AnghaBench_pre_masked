
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int scan_mask; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct iio_dev *VAR_2,
int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = (1 << VAR_3);
 if (VAR_3 > VAR_1)
  return -VAR_0;
 while (VAR_5) {
  VAR_5 >>= 1;
  if (VAR_5 & VAR_2->scan_mask)
   VAR_4++;
 }

 return VAR_4;
}
