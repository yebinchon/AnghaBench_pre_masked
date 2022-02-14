
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_2__ {int name; struct module* owner; int * bus; } ;
struct hpsb_protocol_driver {TYPE_1__ driver; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (struct hpsb_protocol_driver*) ;

int FUNC_2(struct hpsb_protocol_driver *VAR_1,
        struct module *VAR_2)
{
 int VAR_3;

 VAR_1->driver.bus = &VAR_0;
 VAR_1->driver.owner = VAR_2;
 VAR_1->driver.name = VAR_1->name;


 VAR_3 = FUNC_0(&VAR_1->driver);
 if (!VAR_3)
  FUNC_1(VAR_1);
 return VAR_3;
}
