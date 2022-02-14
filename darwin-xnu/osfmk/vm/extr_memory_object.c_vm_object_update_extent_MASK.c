
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
struct vm_page_delayed_work {scalar_t__ dw_mask; } ;
typedef int memory_object_return_t ;
typedef int memory_object_lock_result_t ;
typedef scalar_t__ memory_object_cluster_size_t ;
typedef int boolean_t ;
struct TYPE_15__ {scalar_t__ pager; scalar_t__ resident_page_count; } ;
struct TYPE_14__ {int vmp_free_when_done; int vmp_dirty; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__,scalar_t__*,int*,int ) ;
 scalar_t__ VAR_2 ;




 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct vm_page_delayed_work*,TYPE_1__*,int) ;
 TYPE_1__* VAR_9 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_7 (int ,int,int ,int ) ;
 int FUNC_8 (TYPE_2__*,int ,struct vm_page_delayed_work*,int) ;
 TYPE_1__* FUNC_9 (TYPE_2__*,scalar_t__) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int
FUNC_11(
        vm_object_t VAR_10,
        vm_object_offset_t VAR_11,
 vm_object_offset_t VAR_12,
 vm_object_offset_t *VAR_13,
 int *VAR_14,
        boolean_t VAR_15,
 memory_object_return_t VAR_16,
        boolean_t VAR_17,
        vm_prot_t VAR_18)
{
        vm_page_t VAR_19;
        int VAR_20 = 0;
 vm_object_offset_t VAR_21 = 0;
 vm_object_offset_t VAR_22 = VAR_11;
        memory_object_lock_result_t VAR_23;
 memory_object_cluster_size_t VAR_24 = 0;
 struct vm_page_delayed_work VAR_25[VAR_0];
 struct vm_page_delayed_work *VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;

        VAR_26 = &VAR_25[0];
        VAR_27 = 0;
 VAR_28 = FUNC_0(VAR_0);
 VAR_29 = 0;

 for (;
      VAR_11 < VAR_12 && VAR_10->resident_page_count;
      VAR_11 += VAR_4) {





  if (VAR_24) {
   if ((VAR_24 >= VAR_2) || (VAR_22 != VAR_11)) {

    if (VAR_27) {
     FUNC_8(VAR_10, VAR_8, &VAR_25[0], VAR_27);
     VAR_26 = &VAR_25[0];
     VAR_27 = 0;
    }
    FUNC_1(VAR_10, VAR_24,
             VAR_21, VAR_13, VAR_14, VAR_17);
    VAR_24 = 0;
   }
  }
  while ((VAR_19 = FUNC_9(VAR_10, VAR_11)) != VAR_9) {

   VAR_26->dw_mask = 0;

   VAR_23 = FUNC_6(VAR_19, VAR_16, VAR_15, VAR_18);

   if (VAR_24 && VAR_23 != 128) {



    if (VAR_27) {
     FUNC_8(VAR_10, VAR_8, &VAR_25[0], VAR_27);
     VAR_26 = &VAR_25[0];
     VAR_27 = 0;
    }
    FUNC_1(VAR_10, VAR_24,
             VAR_21, VAR_13, VAR_14, VAR_17);





    VAR_24 = 0;
    continue;
   }

   switch (VAR_23) {

   case 131:
    break;

   case 129:
    if (VAR_19->vmp_dirty == VAR_7)
     VAR_29++;
    VAR_26->dw_mask |= VAR_1;
    break;

   case 130:
    FUNC_2(VAR_10, VAR_19, VAR_6);
    continue;

   case 128:
    if (VAR_24 == 0)
     VAR_21 = VAR_11;

    VAR_24 += VAR_3;
    VAR_22 = VAR_11 + VAR_4;






    if (!FUNC_4(VAR_19)) {

     if (VAR_15) {



      VAR_19->vmp_free_when_done = VAR_7;
     }
    }
    VAR_20 = 1;
    break;
   }
   if (VAR_26->dw_mask) {
    FUNC_3(VAR_26, VAR_19, VAR_27);

    if (VAR_27 >= VAR_28) {
     FUNC_8(VAR_10, VAR_8, &VAR_25[0], VAR_27);
     VAR_26 = &VAR_25[0];
     VAR_27 = 0;
    }
   }
   break;
  }
 }

 if (VAR_10->pager)
  FUNC_7(FUNC_5(), (VAR_29 * VAR_3), VAR_5, FUNC_10(VAR_10->pager));




 if (VAR_27)
  FUNC_8(VAR_10, VAR_8, &VAR_25[0], VAR_27);

 if (VAR_24) {
         FUNC_1(VAR_10, VAR_24,
           VAR_21, VAR_13, VAR_14, VAR_17);
 }
 return (VAR_20);
}
