
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int token_idx_t ;
typedef int purgeable_q_t ;
struct TYPE_2__ {int next; scalar_t__ prev; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

void
FUNC_2(purgeable_q_t VAR_4)
{
 FUNC_0(&VAR_3, VAR_0);
 token_idx_t VAR_5 = FUNC_1(VAR_4);

 if (VAR_5) {

  VAR_2[VAR_5].next = VAR_1;
  VAR_2[VAR_5].prev = 0;
  VAR_1 = VAR_5;
 }
}
