
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int* wpl_array_t ;
typedef int vm_tag_t ;
typedef TYPE_1__* vm_page_t ;
typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* upl_t ;
typedef TYPE_4__* upl_page_info_array_t ;
typedef int upl_control_flags_t ;
typedef scalar_t__ ppnum_t ;
typedef void* boolean_t ;
struct TYPE_15__ {void* mark; void* needed; void* cs_nx; void* cs_tainted; void* cs_validated; void* speculative; void* device; int precious; int free_when_done; int dirty; scalar_t__ absent; scalar_t__ phys_addr; } ;
struct TYPE_14__ {scalar_t__ highest_page; } ;
struct TYPE_13__ {scalar_t__ purgable; int resident_page_count; int memq; int * shadow; int * copy; int * pager; } ;
struct TYPE_12__ {scalar_t__ vmp_written_by_kernel; int vmp_offset; int vmp_listq; int vmp_precious; int vmp_free_when_done; int vmp_dirty; scalar_t__ vmp_absent; scalar_t__ vmp_reference; scalar_t__ vmp_laundry; scalar_t__ vmp_restart; scalar_t__ vmp_cleaning; scalar_t__ vmp_error; scalar_t__ vmp_fictitious; scalar_t__ vmp_busy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,void*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_1__*,int ,void*) ;

boolean_t
FUNC_10(vm_object_t VAR_9, upl_t VAR_10, upl_page_info_array_t VAR_11,
       wpl_array_t VAR_12, upl_control_flags_t VAR_13, vm_tag_t VAR_14)
{
 vm_page_t VAR_15;
 unsigned int VAR_16;
 int VAR_17;
 int VAR_18 = 0;
 boolean_t VAR_19 = VAR_2;
 ppnum_t VAR_20;

 FUNC_4(VAR_9);
 FUNC_2(VAR_9->purgable != VAR_7);
 FUNC_2(VAR_9->purgable != VAR_6);
 FUNC_2(VAR_9->pager == ((void*)0));
 FUNC_2(VAR_9->copy == ((void*)0));
 FUNC_2(VAR_9->shadow == ((void*)0));

 VAR_17 = VAR_9->resident_page_count;
 VAR_15 = (vm_page_t)FUNC_6(&VAR_9->memq);

 FUNC_5();

 while (VAR_17--) {

  if (VAR_15->vmp_busy ||
      VAR_15->vmp_fictitious ||
      VAR_15->vmp_absent ||
      VAR_15->vmp_error ||
      VAR_15->vmp_cleaning ||
      VAR_15->vmp_restart ||
      VAR_15->vmp_laundry) {
   VAR_19 = VAR_0;
   goto done;
  }
  if ((VAR_13 & VAR_4) && VAR_15->vmp_written_by_kernel == VAR_2) {
   VAR_19 = VAR_0;
   goto done;
  }
  VAR_15->vmp_reference = VAR_2;

  FUNC_9(VAR_15, VAR_14, VAR_0);

  if (!(VAR_13 & VAR_3)) {
   FUNC_0(VAR_15, VAR_0);
  }
  VAR_16 = (unsigned int)(VAR_15->vmp_offset / VAR_1);
  FUNC_2(VAR_16 >= 0 && VAR_16 < VAR_9->resident_page_count);
  VAR_12[VAR_16>>5] |= 1 << (VAR_16 & 31);

  VAR_20 = FUNC_1(VAR_15);

  if (VAR_20 > VAR_10->highest_page)
   VAR_10->highest_page = VAR_20;

  if (VAR_11) {
   VAR_11[VAR_16].phys_addr = VAR_20;
   VAR_11[VAR_16].absent = VAR_15->vmp_absent;
   VAR_11[VAR_16].dirty = VAR_15->vmp_dirty;
   VAR_11[VAR_16].free_when_done = VAR_15->vmp_free_when_done;
   VAR_11[VAR_16].precious = VAR_15->vmp_precious;
   VAR_11[VAR_16].device = VAR_0;
   VAR_11[VAR_16].speculative = VAR_0;
   VAR_11[VAR_16].cs_validated = VAR_0;
   VAR_11[VAR_16].cs_tainted = VAR_0;
   VAR_11[VAR_16].cs_nx = VAR_0;
   VAR_11[VAR_16].needed = VAR_0;
   VAR_11[VAR_16].mark = VAR_0;
  }
  if (VAR_18++ > 256) {
   VAR_18 = 0;
   FUNC_3(&VAR_8);

   VAR_5;
  }
  VAR_15 = (vm_page_t)FUNC_7(&VAR_15->vmp_listq);
 }
done:
 FUNC_8();

 VAR_5;

 return (VAR_19);
}
