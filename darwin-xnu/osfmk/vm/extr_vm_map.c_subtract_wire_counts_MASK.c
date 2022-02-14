
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int user_wired_count; int wired_count; scalar_t__ vme_start; scalar_t__ vme_end; } ;
struct TYPE_5__ {int user_wire_size; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(
 vm_map_t VAR_0,
 vm_map_entry_t VAR_1,
 boolean_t VAR_2)
{

 if (VAR_2) {





  if (VAR_1->user_wired_count == 1) {






   FUNC_0(VAR_1->wired_count >= 1);
   VAR_1->wired_count--;
   VAR_0->user_wire_size -= VAR_1->vme_end - VAR_1->vme_start;
  }

  FUNC_0(VAR_1->user_wired_count >= 1);
  VAR_1->user_wired_count--;

 } else {





  FUNC_0(VAR_1->wired_count >= 1);
  VAR_1->wired_count--;
 }
}
