
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stub_entry {int dummy; } ;
struct TYPE_4__ {TYPE_1__* section; } ;
struct module {TYPE_2__ arch; } ;
struct TYPE_3__ {int stub_entries; } ;



unsigned int FUNC_0(struct module *VAR_0,
          unsigned int VAR_1)
{


 return (VAR_0->arch.section[VAR_1].stub_entries + 1)
  * sizeof(struct stub_entry);
}
