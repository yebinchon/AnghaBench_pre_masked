
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef int vm_object_offset_t ;
typedef int vm_behavior_t ;
typedef int uint64_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_10__ {int sequential; } ;
struct TYPE_9__ {scalar_t__ vmp_q_state; int vmp_absent; int vmp_fictitious; int vmp_no_cache; int vmp_busy; int vmp_laundry; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int,unsigned int,unsigned int) ;
 TYPE_2__* VAR_8 ;
 int FUNC_2 (int ,int ,int ,void*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 () ;

__attribute__((used)) static
boolean_t
FUNC_7(
 vm_object_t VAR_12,
 vm_object_offset_t VAR_13,
 vm_behavior_t VAR_14)
{
 int VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18;
 int VAR_19 = 128;
 vm_object_offset_t VAR_20 = 0;
 vm_object_offset_t VAR_21 = 0;
 vm_page_t VAR_22;
 vm_page_t VAR_23[VAR_5];

 VAR_16 = 0;




 if (VAR_12 == VAR_8 || VAR_10 == VAR_0) {





  return VAR_0;
 }
 if ((VAR_18 = VAR_12->sequential)) {
    if (VAR_18 < 0) {
            VAR_19 = 129;
     VAR_18 = 0 - VAR_18;
    } else {
            VAR_19 = 128;
    }
 }
 switch (VAR_14) {
 case 130:
  break;
 case 128:
         if (VAR_18 >= (int)VAR_1) {
   VAR_20 = 0 - VAR_2;
   VAR_17 = 1;
  }
  break;
 case 129:
         if (VAR_18 >= (int)VAR_1) {
   VAR_20 = VAR_2;
   VAR_17 = 1;
  }
  break;
 case 131:
 default:
 { vm_object_offset_t VAR_24 = VAR_9 * VAR_2;






  if ((uint64_t)VAR_18 >= VAR_24 && (VAR_18 % (VAR_5 * VAR_1)) == 0) {





          if (VAR_19 == 128) {
           if (VAR_13 >= VAR_24) {
     VAR_20 = 0 - VAR_24;
     VAR_21 = VAR_2;
     VAR_17 = VAR_5;
    }
   } else {
           if (VAR_13 < -VAR_24) {
     VAR_20 = VAR_24;
     VAR_21 = 0 - VAR_2;
     VAR_17 = VAR_5;
    }
   }
  }
  break;
 }
 }
        for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {
  VAR_22 = FUNC_5(VAR_12, VAR_13 + VAR_20 + (VAR_15 * VAR_21));

  if (VAR_22 && !VAR_22->vmp_laundry && !VAR_22->vmp_busy && !VAR_22->vmp_no_cache && (VAR_22->vmp_q_state != VAR_7) && !VAR_22->vmp_fictitious && !VAR_22->vmp_absent) {
   VAR_23[VAR_16++] = VAR_22;
   FUNC_2(FUNC_0(VAR_22), VAR_6, VAR_3, (void *)((void*)0));
  }
 }
 if (VAR_16) {
  FUNC_4();

  for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {

   VAR_22 = VAR_23[VAR_15];

   FUNC_3(VAR_22, VAR_0);

   VAR_11++;



  }
  FUNC_6();

  return VAR_4;
 }
 return VAR_0;
}
