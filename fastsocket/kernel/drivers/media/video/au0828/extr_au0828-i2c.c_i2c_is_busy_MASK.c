
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {struct au0828_dev* algo_data; } ;
struct au0828_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct au0828_dev*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct i2c_adapter *VAR_2)
{
 struct au0828_dev *VAR_3 = VAR_2->algo_data;
 return FUNC_0(VAR_3, VAR_0) &
  VAR_1 ? 1 : 0;
}
