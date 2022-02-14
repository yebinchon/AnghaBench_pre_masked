
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned long data; int function; scalar_t__ expires; } ;
struct raw3215_info {int flags; TYPE_2__ timer; TYPE_1__* queued_write; int * queued_read; } ;
struct TYPE_5__ {scalar_t__ delayable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct raw3215_info*) ;
 int VAR_6 ;

__attribute__((used)) static inline void FUNC_4(struct raw3215_info *VAR_7)
{
 if (!(VAR_7->flags & VAR_0) || (VAR_7->flags & VAR_2))
  return;
 if (VAR_7->queued_read != ((void*)0))
  FUNC_3(VAR_7);
 else if (VAR_7->queued_write != ((void*)0)) {
  if ((VAR_7->queued_write->delayable == 0) ||
      (VAR_7->flags & VAR_1)) {

   FUNC_3(VAR_7);
   if (VAR_7->flags & VAR_4) {
    FUNC_1(&VAR_7->timer);
    VAR_7->flags &= ~VAR_4;
   }
  } else if (!(VAR_7->flags & VAR_4)) {

   FUNC_2(&VAR_7->timer);
   VAR_7->timer.expires = VAR_3 + VAR_5;
   VAR_7->timer.data = (unsigned long) VAR_7;
   VAR_7->timer.function = VAR_6;
   FUNC_0(&VAR_7->timer);
   VAR_7->flags |= VAR_4;
  }
 }
}
