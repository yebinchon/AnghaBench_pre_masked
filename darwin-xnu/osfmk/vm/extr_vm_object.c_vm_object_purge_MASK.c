
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef unsigned int uint64_t ;
typedef int boolean_t ;
struct TYPE_8__ {scalar_t__ purgable; scalar_t__ copy; scalar_t__ copy_strategy; scalar_t__ resident_page_count; scalar_t__ wired_page_count; scalar_t__ activity_in_progress; scalar_t__ paging_in_progress; int * pager; } ;
typedef int SInt32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,unsigned int,unsigned int,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (unsigned int,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned int,int ,TYPE_1__*) ;
 unsigned int FUNC_6 (int *) ;
 unsigned int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,unsigned int) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 unsigned int VAR_13 ;
 scalar_t__ VAR_14 ;

uint64_t
FUNC_11(vm_object_t VAR_15, int VAR_16)
{
 unsigned int VAR_17 = 0, VAR_18 = 0;
 uint64_t VAR_19 = 0;
 boolean_t VAR_20 = VAR_2;

        FUNC_8(VAR_15);

 if (VAR_15->purgable == VAR_10)
  return 0;

 FUNC_4(VAR_15->copy == VAR_9);
 FUNC_4(VAR_15->copy_strategy == VAR_4);
 if (VAR_15->purgable == VAR_12) {
  unsigned int VAR_21;
  FUNC_4(VAR_15->resident_page_count >=
         VAR_15->wired_page_count);
  VAR_21 = (VAR_15->resident_page_count -
    VAR_15->wired_page_count);
  if (VAR_21 != 0) {
   FUNC_4(VAR_13 >=
          VAR_21);
   FUNC_2(-VAR_21,
        (SInt32 *)&VAR_13);
  }
  if (VAR_15->wired_page_count != 0) {
   FUNC_4(VAR_14 >=
          VAR_15->wired_page_count);
   FUNC_2(-VAR_15->wired_page_count,
        (SInt32 *)&VAR_14);
  }
  VAR_15->purgable = VAR_11;
 }
 FUNC_4(VAR_15->purgable == VAR_11);

 VAR_17 = VAR_15->resident_page_count;

 FUNC_10(VAR_15, VAR_6);

 if (VAR_15->resident_page_count >= VAR_17) {
  VAR_19 = 0;
 } else {
  VAR_19 = VAR_17 - VAR_15->resident_page_count;
 }

 if (VAR_15->pager != ((void*)0)) {

  FUNC_4(VAR_8);

  if (VAR_15->activity_in_progress == 0 &&
      VAR_15->paging_in_progress == 0) {
   VAR_18 = FUNC_6(VAR_15->pager);
   if (VAR_18) {
    VAR_18 = FUNC_7(VAR_15->pager, VAR_16);
    FUNC_5(VAR_15->pager,
         -VAR_18,
         VAR_2,
         VAR_15);
    FUNC_9(VAR_15,
          -VAR_18);
   }
   if ( !(VAR_16 & VAR_0)) {
    FUNC_4(FUNC_6(VAR_15->pager)
           == 0);
   }
  } else {
   VAR_20 = VAR_7;
  }
 }

 FUNC_8(VAR_15);

 VAR_19 += VAR_18;

 FUNC_0(VAR_3, (FUNC_1(VAR_1, VAR_5)),
         FUNC_3(VAR_15),
         VAR_17,
         VAR_19,
         VAR_20,
         0);

 return VAR_19;
}
