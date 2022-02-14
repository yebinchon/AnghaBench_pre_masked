
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef TYPE_2__* upl_t ;
typedef int upl_size_t ;
typedef char uint64_t ;
typedef TYPE_3__* thread_t ;
struct upl_page_info {int dummy; } ;
struct upl {int dummy; } ;
struct TYPE_9__ {int * decmp_upl; } ;
struct TYPE_7__ {scalar_t__ prev; scalar_t__ next; } ;
struct TYPE_8__ {int flags; int ref_count; char* upl_reprio_info; char* upl_commit_records; int * upl_create_retaddr; scalar_t__ upl_commit_index; scalar_t__ upl_state; scalar_t__ ubc_alias2; scalar_t__ ubc_alias1; TYPE_1__ uplq; void* upl_creator; scalar_t__ decmp_io_upl; int upl_priority; int * upl_iodone; int * associated_upl; int * vector_upl; scalar_t__ highest_page; scalar_t__ ext_ref_count; int * map_object; scalar_t__ size; scalar_t__ kaddr; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 void* FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static upl_t
FUNC_9(int VAR_11, int VAR_12, upl_size_t VAR_13)
{
 upl_t VAR_14;
 vm_size_t VAR_15 = 0;
 int VAR_16 = 0;
 vm_size_t VAR_17 = sizeof(struct upl);

 VAR_13 = FUNC_6(VAR_13);

 if (VAR_11 & VAR_4) {
  VAR_15 = (FUNC_1(VAR_13) + 7) >> 3;
  VAR_15 = (VAR_15 + 3) & 0xFFFFFFFC;

  VAR_16 |= VAR_8;
 }
 if (VAR_11 & VAR_2) {
  VAR_17 += sizeof(struct upl_page_info) * FUNC_1(VAR_13);

  VAR_16 |= VAR_7;
 }
 VAR_14 = (upl_t)FUNC_4(VAR_17 + VAR_15);

 if (VAR_15)
         FUNC_2((char *)VAR_14 + VAR_17, VAR_15);

 VAR_14->flags = VAR_16 | VAR_12;
 VAR_14->kaddr = (vm_offset_t)0;
 VAR_14->size = 0;
 VAR_14->map_object = ((void*)0);
 VAR_14->ref_count = 1;
 VAR_14->ext_ref_count = 0;
 VAR_14->highest_page = 0;
 FUNC_7(VAR_14);
 VAR_14->vector_upl = ((void*)0);
 VAR_14->associated_upl = ((void*)0);
 VAR_14->upl_iodone = ((void*)0);
 return(VAR_14);
}
