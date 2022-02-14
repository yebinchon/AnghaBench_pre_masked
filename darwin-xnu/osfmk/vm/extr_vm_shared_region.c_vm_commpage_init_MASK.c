
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
struct TYPE_8__ {int map; } ;
struct TYPE_12__ {TYPE_1__ backing; } ;
struct TYPE_9__ {int map; } ;
struct TYPE_11__ {TYPE_2__ backing; } ;
struct TYPE_10__ {scalar_t__ ip_kobject; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_3__**,int ) ;
 TYPE_6__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 TYPE_4__* VAR_7 ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;

void
FUNC_4(void)
{
 FUNC_0(
  ("commpage: -> init()\n"));



 FUNC_1(&VAR_5, VAR_0);
 VAR_4 = (vm_named_entry_t) VAR_5->ip_kobject;
 VAR_6 = VAR_4->backing.map;



 FUNC_1(&VAR_8, VAR_1);
 VAR_7 = (vm_named_entry_t) VAR_8->ip_kobject;
 VAR_9 = VAR_7->backing.map;




 FUNC_2();
 VAR_2 = 1;

 if (VAR_3 == 0) {
  FUNC_3(0, 1);
 }


 FUNC_0(
  ("commpage: init() <-\n"));
}
