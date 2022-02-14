
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_driver {char* name; TYPE_1__* bus; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(struct device_driver *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_0(FUNC_2(VAR_1->name) + FUNC_2(VAR_1->bus->name) + 2,
         VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(VAR_2, "%s:%s", VAR_1->bus->name, VAR_1->name);
 return VAR_2;
}
