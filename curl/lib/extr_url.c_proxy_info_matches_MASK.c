
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct proxy_info {scalar_t__ proxytype; scalar_t__ port; TYPE_1__ host; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_1(const struct proxy_info* VAR_2,
                   const struct proxy_info* VAR_3)
{
  if((VAR_2->proxytype == VAR_3->proxytype) &&
     (VAR_2->port == VAR_3->port) &&
     FUNC_0(VAR_2->host.name, VAR_3->host.name))
    return VAR_1;

  return VAR_0;
}
