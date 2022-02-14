
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef struct vm_map_entry* vm_map_entry_t ;
struct vm_map_entry {scalar_t__ vme_start; int in_transition; scalar_t__ vme_end; scalar_t__ wired_count; scalar_t__ user_wired_count; int needs_wakeup; struct vm_map_entry* vme_next; void* zero_wired_pages; scalar_t__ use_pmap; scalar_t__ is_sub_map; scalar_t__ superpage_size; } ;
typedef int * pmap_t ;
typedef void* kern_return_t ;
typedef void* boolean_t ;
struct TYPE_16__ {unsigned int timestamp; int * pmap; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (struct vm_map_entry*) ;
 TYPE_1__* FUNC_1 (struct vm_map_entry*) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_1__*,struct vm_map_entry*,void*) ;
 int FUNC_9 (TYPE_1__*,struct vm_map_entry*,void*,int *,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,struct vm_map_entry*,scalar_t__) ;
 int FUNC_11 (TYPE_1__*,struct vm_map_entry*,scalar_t__) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*,scalar_t__,struct vm_map_entry**) ;
 int FUNC_15 (TYPE_1__*,scalar_t__,scalar_t__) ;
 struct vm_map_entry* FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static kern_return_t
FUNC_18(
 vm_map_t VAR_4,
 vm_map_offset_t VAR_5,
 vm_map_offset_t VAR_6,
 boolean_t VAR_7,
 pmap_t VAR_8,
 vm_map_offset_t VAR_9)
{
 vm_map_entry_t VAR_10;
 struct vm_map_entry *VAR_11, VAR_12;
 boolean_t VAR_13;
 boolean_t VAR_14 = VAR_0;
 unsigned int VAR_15;

 FUNC_13(VAR_4);
 if(VAR_8 == ((void*)0))
  VAR_14 = VAR_3;
 VAR_15 = VAR_4->timestamp;

 FUNC_4(VAR_4, VAR_5, VAR_6);
 FUNC_5(FUNC_6(VAR_5));
 FUNC_5(FUNC_6(VAR_6));
 FUNC_5(FUNC_2(VAR_5, FUNC_3(VAR_4)));
 FUNC_5(FUNC_2(VAR_6, FUNC_3(VAR_4)));

 if (VAR_5 == VAR_6) {

  FUNC_17(VAR_4);
  return VAR_2;
 }

 if (FUNC_14(VAR_4, VAR_5, &VAR_11)) {
  VAR_10 = VAR_11;




 }
 else {
  if (!VAR_7) {
   FUNC_7("vm_map_unwire: start not found");
  }

  FUNC_17(VAR_4);
  return(VAR_1);
 }

 if (VAR_10->superpage_size) {

  FUNC_17(VAR_4);
  return VAR_1;
 }

 VAR_13 = VAR_0;
 while ((VAR_10 != FUNC_16(VAR_4)) && (VAR_10->vme_start < VAR_6)) {
  if (VAR_10->in_transition) {
   if (!VAR_7) {
    FUNC_7("vm_map_unwire: in_transition entry");
   }

   VAR_10 = VAR_10->vme_next;
   continue;
  }

  if (VAR_10->is_sub_map) {
   vm_map_offset_t VAR_16;
   vm_map_offset_t VAR_17;
   vm_map_offset_t VAR_18;
   pmap_t VAR_19;

   FUNC_11(VAR_4, VAR_10, VAR_5);
   FUNC_10(VAR_4, VAR_10, VAR_6);

   VAR_16 = FUNC_0(VAR_10);
   VAR_17 = VAR_10->vme_end - VAR_10->vme_start;
   VAR_17 += FUNC_0(VAR_10);
   VAR_18 = VAR_10->vme_end;
   if(VAR_8 == ((void*)0)) {
    if(VAR_10->use_pmap) {
     VAR_19 = FUNC_1(VAR_10)->pmap;
     VAR_9 = VAR_16;
    } else {
     VAR_19 = VAR_4->pmap;
     VAR_9 = VAR_5;
    }
    if (VAR_10->wired_count == 0 ||
        (VAR_7 && VAR_10->user_wired_count == 0)) {
     if (!VAR_7)
      FUNC_7("vm_map_unwire: entry is unwired");
     VAR_10 = VAR_10->vme_next;
     continue;
    }






    if (((VAR_10->vme_end < VAR_6) &&
         ((VAR_10->vme_next == FUNC_16(VAR_4)) ||
          (VAR_10->vme_next->vme_start
           > VAR_10->vme_end)))) {
     if (!VAR_7)
      FUNC_7("vm_map_unwire: non-contiguous region");




    }

    FUNC_8(VAR_4, VAR_10, VAR_7);

    if (VAR_10->wired_count != 0) {
     VAR_10 = VAR_10->vme_next;
     continue;
    }

    VAR_10->in_transition = VAR_3;
    VAR_12 = *VAR_10;





    FUNC_17(VAR_4);
    FUNC_18(FUNC_1(VAR_10),
           VAR_16, VAR_17, VAR_7, VAR_19, VAR_9);
    FUNC_13(VAR_4);

    if (VAR_15+1 != VAR_4->timestamp) {




     if (!FUNC_14(VAR_4,
         VAR_12.vme_start,
         &VAR_11)) {
      if (!VAR_7)
       FUNC_7("vm_map_unwire: re-lookup failed");
      VAR_10 = VAR_11->vme_next;
     } else
      VAR_10 = VAR_11;
    }
    VAR_15 = VAR_4->timestamp;






    while ((VAR_10 != FUNC_16(VAR_4)) &&
           (VAR_10->vme_start < VAR_12.vme_end)) {
     FUNC_5(VAR_10->in_transition);
     VAR_10->in_transition = VAR_0;
     if (VAR_10->needs_wakeup) {
      VAR_10->needs_wakeup = VAR_0;
      VAR_13 = VAR_3;
     }
     VAR_10 = VAR_10->vme_next;
    }
    continue;
   } else {
    FUNC_17(VAR_4);
    FUNC_18(FUNC_1(VAR_10),
           VAR_16, VAR_17, VAR_7, VAR_8,
           VAR_9);
    FUNC_13(VAR_4);

    if (VAR_15+1 != VAR_4->timestamp) {




     if (!FUNC_14(VAR_4,
         VAR_12.vme_start,
         &VAR_11)) {
      if (!VAR_7)
       FUNC_7("vm_map_unwire: re-lookup failed");
      VAR_10 = VAR_11->vme_next;
     } else
      VAR_10 = VAR_11;
    }
    VAR_15 = VAR_4->timestamp;
   }
  }


  if ((VAR_10->wired_count == 0) ||
      (VAR_7 && VAR_10->user_wired_count == 0)) {
   if (!VAR_7)
    FUNC_7("vm_map_unwire: entry is unwired");

   VAR_10 = VAR_10->vme_next;
   continue;
  }

  FUNC_5(VAR_10->wired_count > 0 &&
         (!VAR_7 || VAR_10->user_wired_count > 0));

  FUNC_11(VAR_4, VAR_10, VAR_5);
  FUNC_10(VAR_4, VAR_10, VAR_6);






  if (((VAR_10->vme_end < VAR_6) &&
       ((VAR_10->vme_next == FUNC_16(VAR_4)) ||
        (VAR_10->vme_next->vme_start > VAR_10->vme_end)))) {

   if (!VAR_7)
    FUNC_7("vm_map_unwire: non-contiguous region");
   VAR_10 = VAR_10->vme_next;
   continue;
  }

  FUNC_8(VAR_4, VAR_10, VAR_7);

  if (VAR_10->wired_count != 0) {
   VAR_10 = VAR_10->vme_next;
   continue;
  }

  if(VAR_10->zero_wired_pages) {
   VAR_10->zero_wired_pages = VAR_0;
  }

  VAR_10->in_transition = VAR_3;
  VAR_12 = *VAR_10;





  FUNC_17(VAR_4);
  if(VAR_8) {
   FUNC_9(VAR_4,
     &VAR_12, VAR_0, VAR_8, VAR_9);
  } else {
   FUNC_9(VAR_4,
     &VAR_12, VAR_0, VAR_4->pmap,
     VAR_12.vme_start);
  }
  FUNC_13(VAR_4);

  if (VAR_15+1 != VAR_4->timestamp) {




   if (!FUNC_14(VAR_4, VAR_12.vme_start,
       &VAR_11)) {
    if (!VAR_7)
     FUNC_7("vm_map_unwire: re-lookup failed");
    VAR_10 = VAR_11->vme_next;
   } else
    VAR_10 = VAR_11;
  }
  VAR_15 = VAR_4->timestamp;






  while ((VAR_10 != FUNC_16(VAR_4)) &&
         (VAR_10->vme_start < VAR_12.vme_end)) {
   FUNC_5(VAR_10->in_transition);
   VAR_10->in_transition = VAR_0;
   if (VAR_10->needs_wakeup) {
    VAR_10->needs_wakeup = VAR_0;
    VAR_13 = VAR_3;
   }
   VAR_10 = VAR_10->vme_next;
  }
 }
 FUNC_15(VAR_4, VAR_5, VAR_6);

 FUNC_17(VAR_4);



 if (VAR_13)
  FUNC_12(VAR_4);
 return(VAR_2);

}
