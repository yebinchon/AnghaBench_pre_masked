
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long itm_delta; scalar_t__ itm_next; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 () ;

void
FUNC_5 (void)
{
 int VAR_2 = FUNC_4();
 unsigned long VAR_3 = 0, VAR_4;


 FUNC_3(VAR_0);

 VAR_4 = VAR_1->itm_delta;




 if (VAR_2) {
  unsigned long VAR_5 = 1UL << FUNC_0(VAR_2);
  VAR_3 = (2*(VAR_2 - VAR_5) + 1) * VAR_4/VAR_5/2;
 }
 VAR_1->itm_next = FUNC_1() + VAR_4 + VAR_3;
 FUNC_2(VAR_1->itm_next);
}
