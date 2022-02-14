
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct swapout_io_completion {int swp_c_size; int swp_upl_ctx; scalar_t__ swp_io_done; scalar_t__ swp_io_error; struct swapfile* swp_swf; TYPE_1__* swp_c_seg; } ;
struct swapfile {unsigned int swp_free_hint; int swp_flags; unsigned int swp_nseginuse; unsigned int swp_nsegs; int* swp_bitmap; int swp_index; int swp_vp; int swp_queue; TYPE_1__** swp_csegs; int swp_io_count; } ;
typedef int queue_entry_t ;
typedef int kern_return_t ;
typedef int event_t ;
typedef int clock_sec_t ;
typedef int clock_nsec_t ;
typedef TYPE_1__* c_segment_t ;
typedef int boolean_t ;
struct TYPE_3__ {int c_busy_swapping; int c_busy; int c_on_minorcompact_q; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int VAR_14 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_11 (struct swapfile*,int*,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_12 (int ,int,int ,int,int ,void*) ;
 int VAR_20 ;

kern_return_t
FUNC_13(vm_offset_t VAR_21, uint64_t *VAR_22, uint32_t VAR_23, c_segment_t VAR_24, struct swapout_io_completion *VAR_25)
{
 unsigned int VAR_26 = 0;
 struct swapfile *VAR_27 = ((void*)0);
 uint64_t VAR_28 = 0;
 uint64_t VAR_29 = 0;
 unsigned int VAR_30 = 0;
 unsigned int VAR_31 = 0;
 boolean_t VAR_32 = VAR_1;
 boolean_t VAR_33 = VAR_1;
 boolean_t VAR_34 = VAR_1;
 int VAR_35 = 0;
 clock_sec_t VAR_36;
 clock_nsec_t VAR_37;
 void *VAR_38 = ((void*)0);

 if (VAR_21 == 0 || VAR_22 == ((void*)0)) {
  return VAR_2;
 }
retry:
 FUNC_4(&VAR_16);

 VAR_27 = (struct swapfile*) FUNC_7(&VAR_14);

 while(FUNC_6(&VAR_14, (queue_entry_t)VAR_27) == VAR_1) {

  VAR_26 = VAR_27->swp_free_hint;

  VAR_32 = (VAR_27->swp_flags & VAR_7) && (VAR_27->swp_nseginuse < VAR_27->swp_nsegs);

  if (VAR_32) {

   while(VAR_26 < VAR_27->swp_nsegs) {

    VAR_30 = VAR_26 >> 3;
    VAR_31 = VAR_26 % 8;

    if ((VAR_27->swp_bitmap)[VAR_30] & (1 << VAR_31)) {
     VAR_26++;
     continue;
    }

    (VAR_27->swp_bitmap)[VAR_30] |= (1 << VAR_31);

    VAR_28 = VAR_26 * VAR_0;
    VAR_27->swp_nseginuse++;
    VAR_27->swp_io_count++;
    VAR_27->swp_csegs[VAR_26] = VAR_24;

    VAR_29 = VAR_27->swp_index;
    VAR_20++;

    FUNC_3(&VAR_36, &VAR_37);

    if (FUNC_0(VAR_36) && !VAR_19)
     FUNC_10((event_t) &VAR_18);

    FUNC_5(&VAR_16);

    goto issue_io;
   }
  }
  VAR_27 = (struct swapfile*) FUNC_8(&VAR_27->swp_queue);
 }
 FUNC_1(FUNC_6(&VAR_14, (queue_entry_t) VAR_27));
 FUNC_3(&VAR_36, &VAR_37);

 if (FUNC_0(VAR_36) && !VAR_19)
  FUNC_10((event_t) &VAR_18);

 if (VAR_12 == VAR_1 || FUNC_0(VAR_36)) {
  VAR_33 = VAR_11;
  FUNC_2((event_t) &VAR_15, VAR_10, 1000, 1000*VAR_4);
 } else
  VAR_13 = VAR_11;

 FUNC_5(&VAR_16);

 if (VAR_33 == VAR_11) {
  FUNC_9(VAR_9);

  if (VAR_34 == VAR_1 && VAR_12 == VAR_11) {
   VAR_34 = VAR_11;
   goto retry;
  }
 }
 VAR_17++;

 return VAR_2;

issue_io:
 FUNC_1(VAR_24->c_busy_swapping);
 FUNC_1(VAR_24->c_busy);
 FUNC_1(!VAR_24->c_on_minorcompact_q);

 *VAR_22 = (VAR_29 << VAR_6) | VAR_28;

 if (VAR_25) {
  VAR_25->swp_c_seg = VAR_24;
  VAR_25->swp_c_size = VAR_23;

         VAR_25->swp_swf = VAR_27;

  VAR_25->swp_io_error = 0;
  VAR_25->swp_io_done = 0;

  VAR_38 = (void *)&VAR_25->swp_upl_ctx;
 }
 VAR_35 = FUNC_12(VAR_27->swp_vp, VAR_28, VAR_21, (int) (VAR_23 / VAR_5), VAR_8, VAR_38);

 if (VAR_35 || VAR_38 == ((void*)0))
  return (FUNC_11(VAR_27, VAR_22, VAR_35));

 return VAR_3;
}
