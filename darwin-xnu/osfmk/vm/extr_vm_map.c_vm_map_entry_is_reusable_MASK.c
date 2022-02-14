
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {scalar_t__ protection; scalar_t__ max_protection; scalar_t__ inheritance; scalar_t__ superpage_size; scalar_t__ wired_count; scalar_t__ user_wired_count; scalar_t__ zero_wired_pages; scalar_t__ permanent; scalar_t__ no_cache; scalar_t__ in_transition; scalar_t__ is_sub_map; } ;
struct TYPE_8__ {int ref_count; scalar_t__ wired_page_count; scalar_t__ purgable; scalar_t__ copy_strategy; scalar_t__ wimg_bits; int code_signed; int true_share; scalar_t__ internal; struct TYPE_8__* shadow; struct TYPE_8__* copy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;







 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static boolean_t
FUNC_2(
 vm_map_entry_t VAR_9)
{


 vm_object_t VAR_10;

 if (VAR_9->is_sub_map) {
  return VAR_0;
 }

 switch (FUNC_0(VAR_9)) {
 case 134:
 case 130:
 case 133:
 case 128:
 case 129:
 case 132:
 case 131:





  break;
 default:




  return VAR_2;
 }

 if (
     VAR_9->is_sub_map ||
     VAR_9->in_transition ||
     VAR_9->protection != VAR_6 ||
     VAR_9->max_protection != VAR_5 ||
     VAR_9->inheritance != VAR_3 ||
     VAR_9->no_cache ||
     VAR_9->permanent ||
     VAR_9->superpage_size != VAR_0 ||
     VAR_9->zero_wired_pages ||
     VAR_9->wired_count != 0 ||
     VAR_9->user_wired_count != 0) {
  return VAR_0;
 }

 VAR_10 = FUNC_1(VAR_9);
 if (VAR_10 == VAR_4) {
  return VAR_2;
 }
 if (
     VAR_10->wired_page_count == 0 &&
     VAR_10->copy == VAR_4 &&
     VAR_10->shadow == VAR_4 &&
     VAR_10->internal &&
     VAR_10->purgable == VAR_7 &&
     VAR_10->copy_strategy != VAR_1 &&
     !VAR_10->true_share &&
     VAR_10->wimg_bits == VAR_8 &&
     !VAR_10->code_signed) {
  return VAR_2;
 }
 return VAR_0;


}
