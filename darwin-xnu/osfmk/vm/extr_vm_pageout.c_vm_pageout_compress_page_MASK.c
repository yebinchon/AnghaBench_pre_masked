
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef int vm_object_offset_t ;
typedef scalar_t__ memory_object_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_22__ {int vm_compressor_failed; } ;
struct TYPE_21__ {scalar_t__ pager; scalar_t__ activity_in_progress; scalar_t__ purgable; int * vo_owner; scalar_t__ vo_ledger_tag; scalar_t__ paging_offset; scalar_t__ pager_initialized; } ;
struct TYPE_20__ {scalar_t__ vmp_tabled; scalar_t__ vmp_offset; int vmp_laundry; int vmp_free_when_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,TYPE_2__*,scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int VAR_8 ;
 int FUNC_8 (scalar_t__,int,int ,TYPE_2__*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,int ,void**,char*,int*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 () ;
 int FUNC_18 (TYPE_1__*,int ) ;
 int FUNC_19 () ;
 int VAR_9 ;
 TYPE_3__ VAR_10 ;

kern_return_t
FUNC_20(void **VAR_11, char *VAR_12, vm_page_t VAR_13)
{
 vm_object_t VAR_14;
 memory_object_t VAR_15;
 int VAR_16;
 kern_return_t VAR_17;

 VAR_14 = FUNC_4(VAR_13);

 FUNC_7(!VAR_13->vmp_free_when_done);
 FUNC_7(!VAR_13->vmp_laundry);

 VAR_15 = VAR_14->pager;

 if (!VAR_14->pager_initialized || VAR_15 == VAR_5) {

  FUNC_0(0xe0400010 | VAR_1, VAR_14, VAR_15, 0, 0, 0);

  FUNC_13(VAR_14);






  if (!VAR_14->pager_initialized)
   FUNC_11(VAR_14, (vm_object_offset_t) 0, VAR_6);
  if (!VAR_14->pager_initialized)
   FUNC_12(VAR_14);

  VAR_15 = VAR_14->pager;

  if (!VAR_14->pager_initialized || VAR_15 == VAR_5) {
   FUNC_1(VAR_13);

   FUNC_17();
   FUNC_16(VAR_13);
   FUNC_2(VAR_9, 1);
   FUNC_19();




   FUNC_10(VAR_14);
   FUNC_15(VAR_14);

   return VAR_3;
  }
  FUNC_15(VAR_14);

  FUNC_0(0xe0400010 | VAR_0, VAR_14, VAR_15, 0, 0, 0);
 }
 FUNC_7(VAR_14->pager_initialized && VAR_15 != VAR_5);
 FUNC_7(VAR_14->activity_in_progress > 0);

 VAR_17 = FUNC_9(
  VAR_15,
  VAR_13->vmp_offset + VAR_14->paging_offset,
  FUNC_3(VAR_13),
  VAR_11,
  VAR_12,
  &VAR_16);

 FUNC_13(VAR_14);

 FUNC_7(VAR_14->activity_in_progress > 0);
 FUNC_7(FUNC_4(VAR_13) == VAR_14);
 FUNC_7( !FUNC_5(VAR_13));

 FUNC_8(VAR_15,
      VAR_16,
      VAR_2,
      VAR_14);

 if (VAR_17 == VAR_4) {







  if ((VAR_14->purgable != VAR_7 ||
       VAR_14->vo_ledger_tag) &&
      VAR_14->vo_owner != ((void*)0)) {

   FUNC_14(VAR_14,
         +1);
  }
  FUNC_6(VAR_8);

  if (VAR_13->vmp_tabled)
   FUNC_18(VAR_13, VAR_6);

 } else {
  FUNC_1(VAR_13);

  FUNC_17();

  FUNC_16(VAR_13);
  VAR_10.vm_compressor_failed++;

  FUNC_19();
 }
 FUNC_10(VAR_14);
 FUNC_15(VAR_14);

 return VAR_17;
}
