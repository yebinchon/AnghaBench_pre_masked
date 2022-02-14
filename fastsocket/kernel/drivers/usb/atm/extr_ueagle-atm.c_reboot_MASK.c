
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uea_softc {int reset; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct uea_softc* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
  const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = -VAR_0;
 struct uea_softc *VAR_7;

 FUNC_1(&VAR_1);
 VAR_7 = FUNC_0(VAR_2);
 if (!VAR_7)
  goto out;
 VAR_7->reset = 1;
 VAR_6 = VAR_5;
out:
 FUNC_2(&VAR_1);
 return VAR_6;
}
