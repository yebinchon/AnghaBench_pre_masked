
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct trim_list {int tl_offset; struct trim_list* tl_next; int tl_length; } ;
struct swapfile {int swp_flags; int swp_delayed_trim_count; struct trim_list* swp_delayed_trim_list_head; } ;
typedef int event_t ;
typedef scalar_t__ clock_sec_t ;
typedef int clock_nsec_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct swapfile*) ;
 int FUNC_1 (scalar_t__*,int *) ;
 scalar_t__ VAR_6 ;
 struct trim_list* FUNC_2 (int) ;
 int FUNC_3 (struct trim_list*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct swapfile*,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct swapfile* FUNC_8 (int) ;

void
FUNC_9(uint64_t VAR_13)
{
 struct swapfile *VAR_14 = ((void*)0);
 struct trim_list *VAR_15 = ((void*)0);
        clock_sec_t VAR_16;
        clock_nsec_t VAR_17;

 if (VAR_7 == VAR_5)
  VAR_15 = FUNC_2(sizeof(struct trim_list));

 FUNC_4(&VAR_8);

 VAR_14 = FUNC_8(VAR_13);

 if (VAR_14 && (VAR_14->swp_flags & (VAR_2 | VAR_3))) {

  if (VAR_7 == VAR_1 || (VAR_14->swp_flags & VAR_3)) {






   FUNC_7(VAR_14, VAR_13);

   VAR_10++;
   goto done;
  }
  VAR_15->tl_offset = VAR_13 & VAR_4;
  VAR_15->tl_length = VAR_0;

  VAR_15->tl_next = VAR_14->swp_delayed_trim_list_head;
  VAR_14->swp_delayed_trim_list_head = VAR_15;
  VAR_14->swp_delayed_trim_count++;
  VAR_15 = ((void*)0);

  if (FUNC_0(VAR_14) && !VAR_12) {
   FUNC_1(&VAR_16, &VAR_17);

   if (VAR_16 > VAR_6)
    FUNC_6((event_t) &VAR_11);
  }
  VAR_9++;
 }
done:
 FUNC_5(&VAR_8);

 if (VAR_15 != ((void*)0))
  FUNC_3(VAR_15, sizeof(struct trim_list));
}
