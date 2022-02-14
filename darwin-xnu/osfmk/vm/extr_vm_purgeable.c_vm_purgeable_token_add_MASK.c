
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ wait_result_t ;
typedef int vm_size_t ;
typedef int vm_offset_t ;
typedef size_t token_idx_t ;
struct token {int next; scalar_t__ count; size_t prev; } ;
typedef TYPE_1__* purgeable_q_t ;
typedef scalar_t__ kern_return_t ;
typedef int int64_t ;
typedef int int32_t ;
typedef int event_t ;
typedef enum purgeable_q_type { ____Placeholder_purgeable_q_type } purgeable_q_type ;
struct TYPE_6__ {int new_pages; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ new_pages; size_t token_q_tail; size_t token_q_head; size_t token_q_unripe; int debug_count_tokens; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_4 (int ,int *,int,int ) ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (int ,int ,int,int *,int,int ) ;
 scalar_t__ FUNC_7 (int *,int ,int ,int ) ;
 TYPE_2__* VAR_18 ;
 int FUNC_8 (int ) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 struct token* VAR_25 ;
 int FUNC_9 () ;
 int VAR_26 ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_2__*) ;

kern_return_t
FUNC_12(purgeable_q_t VAR_27)
{
 FUNC_1(&VAR_26, VAR_4);


 token_idx_t VAR_28;
 enum purgeable_q_type VAR_29;

find_available_token:

 if (VAR_19) {
  VAR_28 = VAR_19;
  VAR_19 = VAR_25[VAR_19].next;
 } else if (VAR_20 < VAR_24) {
  VAR_28 = VAR_20;
  VAR_20++;
 } else {

  while(VAR_22) {
   wait_result_t VAR_30 = FUNC_7(&VAR_26,
         VAR_5,
         (event_t)&VAR_22,
         VAR_12);
   if(VAR_30 != VAR_11) return VAR_1;
  };


  if(VAR_20 < VAR_24)
   goto find_available_token;


  VAR_22 = 1;


  FUNC_10();

  struct token *VAR_31;
  vm_size_t VAR_32 = VAR_23 + VAR_6;
  kern_return_t VAR_33;

  if (VAR_32 / sizeof (struct token) > VAR_14) {
   VAR_33 = VAR_2;
  } else {
   if (VAR_23) {
    VAR_33 = FUNC_6(VAR_17,
            (vm_offset_t) VAR_25,
            VAR_23,
            (vm_offset_t *) &VAR_31,
            VAR_32, VAR_15);
   } else {
    VAR_33 = FUNC_4(VAR_17,
          (vm_offset_t *) &VAR_31,
          VAR_32, VAR_15);
   }
  }

  FUNC_9();

  if (VAR_33) {

   VAR_22 = 0;
   FUNC_8((event_t)&VAR_22);
   return VAR_33;
  }



  struct token *VAR_34=VAR_25;
  VAR_25=VAR_31;
  vm_size_t VAR_35=VAR_23;
  VAR_23=VAR_32;
  VAR_24 = (token_idx_t) (VAR_23 /
       sizeof(struct token));
  FUNC_3 (VAR_20 < VAR_24);

  if (VAR_35) {
   FUNC_10();

   FUNC_5(VAR_17, (vm_offset_t)VAR_34, VAR_35);
   FUNC_9();
  }


  VAR_22 = 0;
  FUNC_8((event_t)&VAR_22);

  goto find_available_token;
 }

 FUNC_3 (VAR_28);





 for (VAR_29 = VAR_7; VAR_29 < VAR_9; VAR_29++) {
  int64_t VAR_36 = VAR_18[VAR_29].new_pages += VAR_21;
  FUNC_3(VAR_36 >= 0);
  FUNC_3(VAR_36 <= VAR_14);
  VAR_18[VAR_29].new_pages = (int32_t) VAR_36;
  FUNC_3(VAR_18[VAR_29].new_pages == VAR_36);
 }
 VAR_21 = 0;


 if (VAR_27->type != VAR_10)
  VAR_25[VAR_28].count = VAR_27->new_pages;
 else
  VAR_25[VAR_28].count = 0;

 VAR_27->new_pages = 0;


 VAR_25[VAR_28].next = 0;
 if (VAR_27->token_q_tail == 0) {
  FUNC_3(VAR_27->token_q_head == 0 && VAR_27->token_q_unripe == 0);
  VAR_27->token_q_head = VAR_28;
  VAR_25[VAR_28].prev = 0;
 } else {
  VAR_25[VAR_27->token_q_tail].next = VAR_28;
  VAR_25[VAR_28].prev = VAR_27->token_q_tail;
 }
 if (VAR_27->token_q_unripe == 0) {

  if (VAR_25[VAR_28].count > 0)
   VAR_27->token_q_unripe = VAR_28;
  else
   VAR_16++;

 }
 VAR_27->token_q_tail = VAR_28;
 return VAR_3;
}
