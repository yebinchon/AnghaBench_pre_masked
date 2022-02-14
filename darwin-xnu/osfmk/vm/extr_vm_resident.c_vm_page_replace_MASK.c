
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef void* vm_page_packed_t ;
struct TYPE_14__ {void* page_list; } ;
typedef TYPE_2__ vm_page_bucket_t ;
typedef int vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef int lck_spin_t ;
struct TYPE_13__ {scalar_t__ vmp_object; scalar_t__ vmp_offset; int vmp_hashed; void* vmp_next_m; scalar_t__ vmp_tabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (void*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,TYPE_1__*,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_11 (int ) ;
 int * VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (TYPE_1__*,int ,scalar_t__,int ,int ,int ,int ,int ,int *) ;
 int VAR_8 ;

void
FUNC_15(
 vm_page_t VAR_9,
 vm_object_t VAR_10,
 vm_object_offset_t VAR_11)
{
 vm_page_bucket_t *VAR_12;
 vm_page_t VAR_13 = VAR_5;
 lck_spin_t *VAR_14;
 int VAR_15;
 FUNC_11(VAR_10);






 FUNC_0(&VAR_8, VAR_2);

 FUNC_7(!FUNC_5(VAR_9));




 VAR_9->vmp_object = FUNC_3(VAR_10);
 VAR_9->vmp_offset = VAR_11;






 VAR_15 = FUNC_13(VAR_10, VAR_11);
 VAR_12 = &VAR_7[VAR_15];
 VAR_14 = &VAR_6[VAR_15 / VAR_0];

 FUNC_8(VAR_14);

 if (VAR_12->page_list) {
  vm_page_packed_t *VAR_16 = &VAR_12->page_list;
  vm_page_t VAR_17 = (vm_page_t)(FUNC_6(*VAR_16));

  do {



   if (VAR_17->vmp_object == VAR_9->vmp_object && VAR_17->vmp_offset == VAR_11) {



    *VAR_16 = VAR_17->vmp_next_m;
    VAR_17->vmp_hashed = VAR_1;
    VAR_17->vmp_next_m = FUNC_4(((void*)0));

    VAR_13 = VAR_17;
    break;
   }
   VAR_16 = &VAR_17->vmp_next_m;
  } while ((VAR_17 = (vm_page_t)(FUNC_6(*VAR_16))));

  VAR_9->vmp_next_m = VAR_12->page_list;
 } else {
  VAR_9->vmp_next_m = FUNC_4(((void*)0));
 }



 VAR_12->page_list = FUNC_4(VAR_9);
 VAR_9->vmp_hashed = VAR_3;

 FUNC_9(VAR_14);

 if (VAR_13) {





  FUNC_12(VAR_13, VAR_1);
 }
 FUNC_14(VAR_9, VAR_10, VAR_11, VAR_4, VAR_1, VAR_1, VAR_1, VAR_1, ((void*)0));
}
