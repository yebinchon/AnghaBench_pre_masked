
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct ipath_devdata {int dummy; } ;
typedef enum i2c_state { ____Placeholder_i2c_state } i2c_state ;


 scalar_t__ FUNC_0 (struct ipath_devdata*,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ipath_devdata*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static u8 FUNC_3(struct ipath_devdata *VAR_2, int VAR_3)
{
 enum i2c_state VAR_4;

 if (FUNC_0(VAR_2, VAR_1, &VAR_4))
  FUNC_2("get bit failed!\n");

 if (VAR_3)
  FUNC_1(VAR_2);

 return VAR_4 == VAR_0 ? 1U : 0;
}
