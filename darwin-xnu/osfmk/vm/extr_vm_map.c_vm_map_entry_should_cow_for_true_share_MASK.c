
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef int boolean_t ;
struct TYPE_11__ {int should_cow_but_wired; } ;
struct TYPE_10__ {scalar_t__ wired_count; scalar_t__ needs_copy; scalar_t__ is_sub_map; } ;
struct TYPE_9__ {scalar_t__ copy_strategy; int vo_size; scalar_t__ true_share; int internal; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_4__ VAR_7 ;

boolean_t
FUNC_2(
 vm_map_entry_t VAR_8)
{
 vm_object_t VAR_9;

 if (VAR_8->is_sub_map) {

  return VAR_1;
 }

 if (VAR_8->needs_copy) {

  return VAR_1;
 }

 if (FUNC_0(VAR_8) != VAR_4 &&
     FUNC_0(VAR_8) != VAR_5) {

  return VAR_1;
 }

 if (VAR_8->wired_count) {

  VAR_7.should_cow_but_wired++;
  return VAR_1;
 }

 VAR_9 = FUNC_1(VAR_8);

 if (VAR_9 == VAR_6) {

  return VAR_1;
 }

 if (!VAR_9->internal) {

  return VAR_1;
 }

 if (VAR_9->copy_strategy != VAR_2) {

  return VAR_1;
 }

 if (VAR_9->true_share) {

  return VAR_1;
 }

 if (FUNC_0(VAR_8) == VAR_4 &&
     VAR_9->vo_size != VAR_0) {

  return VAR_1;
 }

 if (FUNC_0(VAR_8) == VAR_5 &&
     VAR_9->vo_size != 2048 * 4096) {

  return VAR_1;
 }







 return VAR_3;
}
