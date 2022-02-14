
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct w83627hf_data {int* fan_min; int* fan_div; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct w83627hf_data* FUNC_5 (struct device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned long FUNC_8 (char const*,int *,int) ;
 TYPE_1__* FUNC_9 (struct device_attribute*) ;
 int FUNC_10 (struct w83627hf_data*,int ) ;
 int FUNC_11 (struct w83627hf_data*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_12(struct device *VAR_3, struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 int VAR_7 = FUNC_9(VAR_4)->index;
 struct w83627hf_data *VAR_8 = FUNC_5(VAR_3);
 unsigned long VAR_9;
 u8 VAR_10;
 unsigned long VAR_11 = FUNC_8(VAR_5, ((void*)0), 10);

 FUNC_6(&VAR_8->update_lock);


 VAR_9 = FUNC_2(VAR_8->fan_min[VAR_7],
      FUNC_0(VAR_8->fan_div[VAR_7]));

 VAR_8->fan_div[VAR_7] = FUNC_1(VAR_11);

 VAR_10 = (FUNC_10(VAR_8, VAR_7==2 ? VAR_0 : VAR_2)
        & (VAR_7==0 ? 0xcf : 0x3f))
     | ((VAR_8->fan_div[VAR_7] & 0x03) << (VAR_7==0 ? 4 : 6));
 FUNC_11(VAR_8, VAR_7==2 ? VAR_0 : VAR_2, VAR_10);

 VAR_10 = (FUNC_10(VAR_8, VAR_1)
        & ~(1 << (5 + VAR_7)))
     | ((VAR_8->fan_div[VAR_7] & 0x04) << (3 + VAR_7));
 FUNC_11(VAR_8, VAR_1, VAR_10);


 VAR_8->fan_min[VAR_7] = FUNC_3(VAR_9, FUNC_0(VAR_8->fan_div[VAR_7]));
 FUNC_11(VAR_8, FUNC_4(VAR_7), VAR_8->fan_min[VAR_7]);

 FUNC_7(&VAR_8->update_lock);
 return VAR_6;
}
