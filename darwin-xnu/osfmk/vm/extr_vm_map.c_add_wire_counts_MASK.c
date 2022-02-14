
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {scalar_t__ user_wired_count; scalar_t__ vme_end; scalar_t__ vme_start; scalar_t__ wired_count; } ;
struct TYPE_5__ {scalar_t__ user_wire_size; int user_wire_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static kern_return_t
FUNC_3(
 vm_map_t VAR_10,
 vm_map_entry_t VAR_11,
 boolean_t VAR_12)
{
 vm_map_size_t VAR_13;

 if (VAR_12) {
  unsigned int VAR_14 = VAR_8 + VAR_7;






  if (VAR_11->user_wired_count == 0) {
   VAR_13 = VAR_11->vme_end - VAR_11->vme_start;
   if(VAR_13 + VAR_10->user_wire_size > FUNC_0(VAR_10->user_wire_limit, VAR_9) ||
      VAR_13 + FUNC_2(VAR_14) > VAR_6 ||
          VAR_13 + FUNC_2(VAR_14) > VAR_4 - VAR_5)
    return VAR_1;






   if (VAR_11->wired_count >= VAR_3)
    return VAR_0;

   VAR_11->wired_count++;
   VAR_10->user_wire_size += VAR_13;
  }

  if (VAR_11->user_wired_count >= VAR_3)
   return VAR_0;

  VAR_11->user_wired_count++;

 } else {





  if (VAR_11->wired_count >= VAR_3)
   FUNC_1("vm_map_wire: too many wirings");

  VAR_11->wired_count++;
 }

 return VAR_2;
}
