
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channel; } ;
struct lbs_private {TYPE_1__ curbssparams; int mesh_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {struct lbs_private* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lbs_private*) ;
 int FUNC_1 (struct lbs_private*,int,int ) ;
 int FUNC_2 (struct lbs_private*) ;
 int FUNC_3 (char const*,char*,int*) ;
 TYPE_2__* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
  struct device_attribute *VAR_3, const char * VAR_4, size_t VAR_5)
{
 struct lbs_private *VAR_6 = FUNC_4(VAR_2)->ml_priv;
 int VAR_7;
 int VAR_8, VAR_9 = VAR_1;

 FUNC_3(VAR_4, "%x", &VAR_7);
 VAR_7 = !!VAR_7;
 if (VAR_7 == !!VAR_6->mesh_dev)
  return VAR_5;
 if (VAR_7)
  VAR_9 = VAR_0;
 VAR_8 = FUNC_1(VAR_6, VAR_9, VAR_6->curbssparams.channel);
 if (VAR_8)
  return VAR_8;

 if (VAR_7)
  FUNC_0(VAR_6);
 else
  FUNC_2(VAR_6);

 return VAR_5;
}
