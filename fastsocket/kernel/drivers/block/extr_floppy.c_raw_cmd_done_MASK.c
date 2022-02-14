
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int reply_count; int* reply; struct TYPE_2__* next; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long FUNC_0 () ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_12 ;
 int FUNC_5 (unsigned long) ;
 int* VAR_13 ;

__attribute__((used)) static void FUNC_6(int VAR_14)
{
 int VAR_15;

 if (!VAR_14) {
  VAR_12->flags |= VAR_1;
  VAR_12->flags |= VAR_2;
 } else {
  VAR_12->reply_count = VAR_11;
  if (VAR_12->reply_count > VAR_9)
   VAR_12->reply_count = 0;
  for (VAR_15 = 0; VAR_15 < VAR_12->reply_count; VAR_15++)
   VAR_12->reply[VAR_15] = VAR_13[VAR_15];

  if (VAR_12->flags & (VAR_4 | VAR_8)) {
   unsigned long VAR_16;
   VAR_16 = FUNC_0();
   VAR_12->length = FUNC_2();
   FUNC_5(VAR_16);
  }

  if ((VAR_12->flags & VAR_5) &&
      (!VAR_12->reply_count || (VAR_12->reply[0] & 0xc0)))
   VAR_12->flags |= VAR_1;

  if (FUNC_1(VAR_10))
   VAR_12->flags |= VAR_0;
  else
   VAR_12->flags &= ~VAR_0;
  if (VAR_12->flags & VAR_3)
   FUNC_4(VAR_10);

  if (VAR_12->next &&
      (!(VAR_12->flags & VAR_1) ||
       !(VAR_12->flags & VAR_6)) &&
      ((VAR_12->flags & VAR_1) ||
       !(VAR_12->flags & VAR_7))) {
   VAR_12 = VAR_12->next;
   return;
  }
 }
 FUNC_3(VAR_14);
}
