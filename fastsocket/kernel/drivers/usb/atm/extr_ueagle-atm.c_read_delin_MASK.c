
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ phy; } ;
struct uea_softc {TYPE_2__ stats; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct uea_softc*) ;
 struct uea_softc* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
  char *VAR_5)
{
 int VAR_6 = -VAR_1;
 struct uea_softc *VAR_7;
 char *VAR_8 = "GOOD";

 FUNC_2(&VAR_2);
 VAR_7 = FUNC_1(VAR_3);
 if (!VAR_7)
  goto out;

 if (FUNC_0(VAR_7) == VAR_0) {
  if (VAR_7->stats.phy.flags & 0x4000)
   VAR_8 = "RESET";
  else if (VAR_7->stats.phy.flags & 0x0001)
   VAR_8 = "LOSS";
 } else {
  if (VAR_7->stats.phy.flags & 0x0C00)
   VAR_8 = "ERROR";
  else if (VAR_7->stats.phy.flags & 0x0030)
   VAR_8 = "LOSS";
 }

 VAR_6 = FUNC_4(VAR_5, "%s\n", VAR_8);
out:
 FUNC_3(&VAR_2);
 return VAR_6;
}
