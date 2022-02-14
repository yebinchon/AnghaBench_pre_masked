
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int modalias; } ;
struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobj_uevent_env*,char*,int ,int ) ;
 struct spi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 const struct spi_device *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, "MODALIAS=%s%s", VAR_0, VAR_3->modalias);
 return 0;
}
