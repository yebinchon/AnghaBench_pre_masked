
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int scan_mask; int scan_count; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct iio_dev *VAR_2, int VAR_3)
{
 if (VAR_3 > VAR_1)
  return -VAR_0;
 VAR_2->scan_mask |= (1 << VAR_3);
 VAR_2->scan_count++;
 return 0;
}
