
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int vid; } ;
struct atxp1_data {int vrm; TYPE_1__ reg; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct atxp1_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4;
 struct atxp1_data *VAR_5;

 VAR_5 = FUNC_0(VAR_1);

 VAR_4 = FUNC_1(VAR_3, "%d\n", FUNC_2(VAR_5->reg.vid & VAR_0, VAR_5->vrm));

 return VAR_4;
}
