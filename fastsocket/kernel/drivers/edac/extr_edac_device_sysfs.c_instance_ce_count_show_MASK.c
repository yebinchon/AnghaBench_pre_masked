
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ce_count; } ;
struct edac_device_instance {TYPE_1__ counters; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct edac_device_instance *VAR_0,
    char *VAR_1)
{
 return FUNC_0(VAR_1, "%u\n", VAR_0->counters.ce_count);
}
