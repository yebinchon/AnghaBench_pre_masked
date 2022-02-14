
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* c_slot_t ;
typedef TYPE_2__* c_slot_mapping_t ;
typedef TYPE_3__* c_segment_t ;
struct TYPE_12__ {TYPE_3__* c_seg; } ;
struct TYPE_11__ {int c_lock; int c_busy_swapping; scalar_t__ c_busy; } ;
struct TYPE_10__ {int s_cseg; int s_cindx; } ;
struct TYPE_9__ {int c_packed_ptr; } ;


 TYPE_1__* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_4__* VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(
 int *VAR_4,
 int *VAR_5)
{
 c_slot_mapping_t VAR_6, VAR_7;
 c_segment_t VAR_8;
 int VAR_9;
 c_slot_t VAR_10;

 VAR_7 = (c_slot_mapping_t) VAR_5;

 if (VAR_7->s_cseg == VAR_0) {
  *VAR_4 = *VAR_5;
  *VAR_5 = 0;
  return;
 }
 VAR_6 = (c_slot_mapping_t) VAR_4;
Retry:
 FUNC_2(VAR_2);

 VAR_8 = VAR_3[VAR_7->s_cseg -1].c_seg;

 FUNC_4(&VAR_8->c_lock);

 if (VAR_8->c_busy && !VAR_8->c_busy_swapping) {
  FUNC_2(VAR_1);
  FUNC_3(VAR_8);
  goto Retry;
 }

 VAR_9 = VAR_7->s_cindx;
 VAR_10 = FUNC_0(VAR_8, VAR_9);

 VAR_10->c_packed_ptr = FUNC_1(VAR_6);

 *VAR_4 = *VAR_5;
 *VAR_5 = 0;
 FUNC_5(&VAR_8->c_lock);
 FUNC_2(VAR_1);
}
