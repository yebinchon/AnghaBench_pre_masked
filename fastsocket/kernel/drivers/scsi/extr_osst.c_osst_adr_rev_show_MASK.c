
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct osst_tape {TYPE_1__* header_cache; scalar_t__ linux_media; scalar_t__ header_ok; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int major_rev; int minor_rev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct osst_tape * VAR_4 = (struct osst_tape *) FUNC_0 (VAR_1);
 ssize_t VAR_5 = 0;

 if (VAR_4 && VAR_4->header_ok && VAR_4->linux_media)
  VAR_5 = FUNC_1(VAR_3, VAR_0, "%d.%d\n", VAR_4->header_cache->major_rev, VAR_4->header_cache->minor_rev);
 return VAR_5;
}
