
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef int vm_map_t ;
typedef int vm_map_offset_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef int kern_return_t ;
struct TYPE_10__ {scalar_t__ is_sub_map; } ;
struct TYPE_9__ {int set_cache_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_2__**) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

kern_return_t
FUNC_6(
 vm_map_t VAR_5,
 vm_map_offset_t VAR_6)
{
 vm_map_entry_t VAR_7;
 vm_object_t VAR_8;
 kern_return_t VAR_9 = VAR_1;

 FUNC_1(VAR_5);

 if (!FUNC_2(VAR_5, VAR_6, &VAR_7) ||
     VAR_7->is_sub_map) {



  VAR_9 = VAR_0;
  goto done;
 }
 VAR_8 = FUNC_0(VAR_7);

 if (VAR_8 == VAR_3) {



  VAR_9 = VAR_0;
  goto done;
 }
 FUNC_4(VAR_8);
 VAR_8->set_cache_attr = VAR_2;
 FUNC_5(VAR_8);

 VAR_4++;
done:
 FUNC_3(VAR_5);

 return VAR_9;
}
