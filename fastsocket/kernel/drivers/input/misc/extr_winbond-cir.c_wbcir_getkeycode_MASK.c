
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wbcir_data {int dummy; } ;
struct input_dev {int dummy; } ;


 struct wbcir_data* FUNC_0 (struct input_dev*) ;
 scalar_t__ FUNC_1 (struct wbcir_data*,int ) ;

__attribute__((used)) static int
FUNC_2(struct input_dev *VAR_0, int VAR_1, int *VAR_2)
{
 struct wbcir_data *VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = (int)FUNC_1(VAR_3, (u32)VAR_1);
 return 0;
}
