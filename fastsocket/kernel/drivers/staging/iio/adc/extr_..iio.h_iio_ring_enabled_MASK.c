
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int currentmode; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(struct iio_dev *VAR_2)
{
 return VAR_2->currentmode
  & (VAR_1
     | VAR_0);
}
