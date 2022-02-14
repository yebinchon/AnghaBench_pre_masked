
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct w83627hf_data {int vrm_ovt; scalar_t__ type; int update_lock; int * in_min; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ) ;
 struct w83627hf_data* FUNC_3 (struct device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int *,int) ;
 int FUNC_7 (struct w83627hf_data*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3, struct device_attribute *VAR_4,
 const char *VAR_5, size_t VAR_6)
{
 struct w83627hf_data *VAR_7 = FUNC_3(VAR_3);
 u32 VAR_8;

 VAR_8 = FUNC_6(VAR_5, ((void*)0), 10);

 FUNC_4(&VAR_7->update_lock);

 if ((VAR_7->vrm_ovt & 0x01) &&
  (VAR_0 == VAR_7->type || VAR_1 == VAR_7->type
   || VAR_2 == VAR_7->type))


  VAR_7->in_min[0] =
   FUNC_1(((VAR_8 * 100) - 70000 + 244) / 488, 0,
     255);
 else

  VAR_7->in_min[0] = FUNC_0(VAR_8);

 FUNC_7(VAR_7, FUNC_2(0), VAR_7->in_min[0]);
 FUNC_5(&VAR_7->update_lock);
 return VAR_6;
}
