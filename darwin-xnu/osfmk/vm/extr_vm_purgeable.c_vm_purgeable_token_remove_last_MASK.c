
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int token_idx_t ;
typedef TYPE_1__* purgeable_q_t ;
struct TYPE_6__ {scalar_t__ next; int prev; int count; } ;
struct TYPE_5__ {int token_q_tail; int token_q_head; int token_q_unripe; int type; int debug_count_tokens; int new_pages; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static token_idx_t
FUNC_5(purgeable_q_t VAR_7)
{
 FUNC_1(&VAR_6, VAR_1);

 token_idx_t VAR_8;
 VAR_8 = VAR_7->token_q_tail;

 FUNC_3(VAR_8);

 if (VAR_8) {
  FUNC_3(VAR_7->token_q_head);

  if (VAR_7->token_q_tail == VAR_7->token_q_head)
   FUNC_3(VAR_5[VAR_8].next == 0);

  if (VAR_7->token_q_unripe == 0) {

   VAR_3--;
   FUNC_3(VAR_3 >= 0);
  } else if (VAR_7->token_q_unripe == VAR_8) {

   VAR_7->token_q_unripe = 0;
  }

  if (VAR_8 == VAR_7->token_q_head) {

   VAR_7->token_q_head = 0;
   VAR_7->token_q_tail = 0;
  } else {
   token_idx_t VAR_9;

   VAR_9 = VAR_5[VAR_8].prev;

   FUNC_3(VAR_9);
   FUNC_3(VAR_5[VAR_9].next == VAR_8);

   VAR_7->token_q_tail = VAR_9;
   VAR_5[VAR_9].next = 0;
  }

  VAR_7->new_pages += VAR_5[VAR_8].count;
 }
 return VAR_8;
}
