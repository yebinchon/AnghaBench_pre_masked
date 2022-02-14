
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* vm_named_entry_t ;
typedef scalar_t__ user64_addr_t ;
typedef scalar_t__ user32_addr_t ;
struct TYPE_8__ {int map; } ;
struct TYPE_12__ {TYPE_1__ backing; } ;
struct TYPE_9__ {int map; } ;
struct TYPE_11__ {TYPE_2__ backing; } ;
struct TYPE_10__ {scalar_t__ ip_kobject; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (TYPE_3__**,int ) ;
 TYPE_6__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_4__* VAR_10 ;
 TYPE_3__* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_2 () ;
 unsigned int FUNC_3 () ;

void
FUNC_4(void)
{
 FUNC_0(
  ("commpage text: ->init()\n"));


 unsigned int VAR_14 = (FUNC_3() % VAR_4) << VAR_0;
 FUNC_1(&VAR_7, VAR_3);
 VAR_6 = (vm_named_entry_t) VAR_7->ip_kobject;
 VAR_9 = VAR_6->backing.map;
 VAR_8 = (user32_addr_t) (VAR_1 + VAR_14);


 VAR_14 = (FUNC_3() % VAR_5) << VAR_0;
        FUNC_1(&VAR_11, VAR_3);
        VAR_10 = (vm_named_entry_t) VAR_11->ip_kobject;
        VAR_13 = VAR_10->backing.map;
 VAR_12 = (user64_addr_t) (VAR_2 + VAR_14);

 FUNC_2();





 FUNC_0(
                ("commpage text: init() <-\n"));

}
