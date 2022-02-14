
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp1301 {int (* i2c_release ) (struct device*) ;} ;
struct device {int dummy; } ;


 struct isp1301* FUNC_0 (struct device*) ;
 int FUNC_1 (struct isp1301*) ;
 int FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct isp1301 *VAR_1;

 VAR_1 = FUNC_0(VAR_0);




 if (VAR_1->i2c_release)
  VAR_1->i2c_release(VAR_0);
 FUNC_1 (VAR_1);
}
