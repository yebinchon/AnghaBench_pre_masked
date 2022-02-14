
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t token_idx_t ;
typedef TYPE_1__* purgeable_q_t ;
struct TYPE_6__ {scalar_t__ count; size_t next; scalar_t__ prev; } ;
struct TYPE_5__ {size_t token_q_head; int debug_count_tokens; scalar_t__ token_q_tail; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(purgeable_q_t VAR_5)
{
 FUNC_0(&VAR_4, VAR_0);
 FUNC_1(VAR_5->token_q_head && VAR_3[VAR_5->token_q_head].count == 0);

 token_idx_t VAR_6 = VAR_3[VAR_5->token_q_head].next;
 VAR_3[VAR_5->token_q_head].next = VAR_2;
 VAR_3[VAR_5->token_q_head].prev = 0;
 VAR_2 = VAR_5->token_q_head;
 VAR_5->token_q_head = VAR_6;
 VAR_3[VAR_6].prev = 0;
 if (VAR_6 == 0)
  VAR_5->token_q_tail = 0;






 VAR_1--;
 FUNC_1(VAR_1 >= 0);
}
