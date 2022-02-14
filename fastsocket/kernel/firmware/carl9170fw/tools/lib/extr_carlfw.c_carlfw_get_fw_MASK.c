
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; void* data; } ;
struct carlfw {TYPE_1__ fw; } ;



void *FUNC_0(struct carlfw *VAR_0, size_t *VAR_1)
{
 *VAR_1 = VAR_0->fw.len;
 return VAR_0->fw.data;
}
