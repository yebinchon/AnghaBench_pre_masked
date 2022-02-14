
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct accel_t {int dummy; } ;
struct _wpad_cb {size_t queue_length; scalar_t__ queue_full; size_t queue_head; int lstate; int * queue_int; int * queue_ext; } ;
typedef size_t s32 ;
typedef int WPADData ;
struct TYPE_4__ {struct accel_t accel_calib; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int *,int *,struct accel_t*,size_t) ;
 TYPE_1__** VAR_8 ;
 scalar_t__ VAR_9 ;
 struct _wpad_cb* VAR_10 ;

s32 FUNC_5(s32 VAR_11, WPADData *VAR_12)
{
 u32 VAR_13;
 u32 VAR_14,VAR_15 = 0;
 struct accel_t *VAR_16 = ((void*)0);
 struct _wpad_cb *VAR_17 = ((void*)0);
 WPADData *VAR_18 = ((void*)0),*VAR_19 = ((void*)0);



 FUNC_2(VAR_13);
 if(VAR_9==VAR_7) {
  FUNC_3(VAR_13);
  return VAR_4;
 }

 if(VAR_8[VAR_11] && FUNC_1(VAR_8[VAR_11],VAR_1)) {
  if(FUNC_1(VAR_8[VAR_11],VAR_2)) {
   VAR_17 = &VAR_10[VAR_11];







         {
    VAR_14 = VAR_0;
    VAR_19 = VAR_17->queue_int;
   }
   if(VAR_17->queue_full == 0) {
    FUNC_3(VAR_13);
    return VAR_6;
   }
   if(VAR_12)
    *VAR_12 = VAR_19[VAR_17->queue_head];
   VAR_17->queue_head++;
   VAR_17->queue_head %= VAR_14;
   VAR_17->queue_full--;
   VAR_18 = &VAR_17->lstate;
   VAR_16 = &VAR_8[VAR_11]->accel_calib;
   VAR_15 = FUNC_0(VAR_8[VAR_11], VAR_3);
  } else {
   FUNC_3(VAR_13);
   return VAR_4;
  }
 } else {
  FUNC_3(VAR_13);
  return VAR_5;
 }

 FUNC_3(VAR_13);
 if(VAR_12)
  FUNC_4(VAR_12,VAR_18,VAR_16,VAR_15);
 return 0;
}
