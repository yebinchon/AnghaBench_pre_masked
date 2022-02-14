
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bqueues {int ** tqh_last; } ;
typedef TYPE_2__* buf_t ;
struct TYPE_5__ {int * tqe_next; } ;
struct TYPE_6__ {int b_whichq; scalar_t__ b_shadow_ref; scalar_t__ b_shadow; scalar_t__ b_timestamp; TYPE_1__ b_freelist; } ;


 int VAR_0 ;
 int FUNC_0 (struct bqueues*,TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct bqueues* VAR_3 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(buf_t VAR_4)
{
 struct bqueues *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_6 = VAR_4->b_whichq;

 if (VAR_6 == -1) {
  if (VAR_4->b_shadow_ref == 0)
   FUNC_1("bremfree_locked: %p not on freelist", VAR_4);





  return;
 }







 if (VAR_4->b_freelist.tqe_next == ((void*)0)) {
         VAR_5 = &VAR_3[VAR_6];

  if (VAR_5->tqh_last != &VAR_4->b_freelist.tqe_next)
   FUNC_1("bremfree: lost tail");
 }
 FUNC_0(VAR_5, VAR_4, VAR_1);

 if (VAR_6 == VAR_0)
         VAR_2--;

 VAR_4->b_whichq = -1;
 VAR_4->b_timestamp = 0;
 VAR_4->b_shadow = 0;
}
