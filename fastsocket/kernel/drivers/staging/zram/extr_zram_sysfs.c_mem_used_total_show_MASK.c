
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ pages_expand; } ;
struct zram {TYPE_1__ stats; int mem_pool; scalar_t__ init_done; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct zram* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 u64 VAR_4 = 0;
 struct zram *VAR_5 = FUNC_0(VAR_1);

 if (VAR_5->init_done) {
  VAR_4 = FUNC_2(VAR_5->mem_pool) +
   ((u64)(VAR_5->stats.pages_expand) << VAR_0);
 }

 return FUNC_1(VAR_3, "%llu\n", VAR_4);
}
