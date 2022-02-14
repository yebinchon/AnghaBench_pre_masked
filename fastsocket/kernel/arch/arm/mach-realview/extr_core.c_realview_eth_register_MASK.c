
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_4__ {int * platform_data; } ;
struct TYPE_5__ {char const* name; TYPE_1__ dev; struct resource* resource; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char const*,char*) ;

int FUNC_2(const char *VAR_2, struct resource *VAR_3)
{
 if (VAR_2)
  VAR_0.name = VAR_2;
 VAR_0.resource = VAR_3;
 if (FUNC_1(VAR_0.name, "smsc911x") == 0)
  VAR_0.dev.platform_data = &VAR_1;

 return FUNC_0(&VAR_0);
}
