
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssb_bus {TYPE_1__* host_sdio; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;



__attribute__((used)) static inline struct device *FUNC_0(struct ssb_bus *VAR_0)
{
 return &VAR_0->host_sdio->dev;
}
