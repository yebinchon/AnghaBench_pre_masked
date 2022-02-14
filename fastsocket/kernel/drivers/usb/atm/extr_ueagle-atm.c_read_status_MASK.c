
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct TYPE_4__ {TYPE_1__ phy; } ;
struct uea_softc {TYPE_2__ stats; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct uea_softc* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
  char *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct uea_softc *VAR_6;

 FUNC_1(&VAR_1);
 VAR_6 = FUNC_0(VAR_2);
 if (!VAR_6)
  goto out;
 VAR_5 = FUNC_3(VAR_4, 10, "%08x\n", VAR_6->stats.phy.state);
out:
 FUNC_2(&VAR_1);
 return VAR_5;
}
