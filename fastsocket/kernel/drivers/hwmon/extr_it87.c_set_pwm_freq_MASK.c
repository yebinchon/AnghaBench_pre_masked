
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct it87_data {int fan_ctl; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 struct it87_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct it87_data*,int ) ;
 int FUNC_2 (struct it87_data*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int* VAR_1 ;
 unsigned long FUNC_5 (char const*,int *,int) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct it87_data *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7 = FUNC_5(VAR_4, ((void*)0), 10);
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < 7; VAR_8++) {
  if (VAR_7 > (VAR_1[VAR_8] + VAR_1[VAR_8+1]) / 2)
   break;
 }

 FUNC_3(&VAR_6->update_lock);
 VAR_6->fan_ctl = FUNC_1(VAR_6, VAR_0) & 0x8f;
 VAR_6->fan_ctl |= VAR_8 << 4;
 FUNC_2(VAR_6, VAR_0, VAR_6->fan_ctl);
 FUNC_4(&VAR_6->update_lock);

 return VAR_5;
}
