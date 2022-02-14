
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct cookie_state {size_t pte_idx; unsigned long mte_base; scalar_t__ prev_cookie; int nc; TYPE_2__* cookies; TYPE_1__* page_table; } ;
struct TYPE_4__ {unsigned long cookie_size; scalar_t__ cookie_addr; } ;
struct TYPE_3__ {unsigned long mte; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (size_t,int ,unsigned long) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct cookie_state *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3, unsigned long VAR_4)
{
 do {
  unsigned long VAR_5, VAR_6 = VAR_2 + VAR_0;
  u64 VAR_7;

  VAR_1->page_table[VAR_1->pte_idx].mte = VAR_1->mte_base | VAR_2;

  VAR_5 = VAR_0;
  if (VAR_3)
   VAR_5 = VAR_0 - VAR_3;
  if (VAR_5 > VAR_4)
   VAR_5 = VAR_4;

  VAR_7 = FUNC_0(VAR_1->pte_idx,
       FUNC_1(), VAR_3);

  VAR_3 = 0;

  if (VAR_7 == VAR_1->prev_cookie) {
   VAR_1->cookies[VAR_1->nc - 1].cookie_size += VAR_5;
  } else {
   VAR_1->cookies[VAR_1->nc].cookie_addr = VAR_7;
   VAR_1->cookies[VAR_1->nc].cookie_size = VAR_5;
   VAR_1->nc++;
  }
  VAR_1->prev_cookie = VAR_7 + VAR_5;

  VAR_1->pte_idx++;

  VAR_4 -= VAR_5;
  VAR_2 = VAR_6;
 } while (VAR_4 > 0);
}
