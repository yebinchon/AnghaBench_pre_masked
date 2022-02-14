
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int isdnloop_lock; TYPE_3__* c_timer; } ;
typedef TYPE_1__ isdnloop_card ;
struct TYPE_6__ {unsigned long data; int function; scalar_t__ expires; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(isdnloop_card * VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 FUNC_2(&VAR_4->isdnloop_lock, VAR_6);
 FUNC_1(&VAR_4->c_timer[VAR_5]);
 VAR_4->c_timer[VAR_5].expires = VAR_3 + VAR_0;
 if (VAR_5)
  VAR_4->c_timer[VAR_5].function = VAR_2;
 else
  VAR_4->c_timer[VAR_5].function = VAR_1;
 VAR_4->c_timer[VAR_5].data = (unsigned long) VAR_4;
 FUNC_0(&VAR_4->c_timer[VAR_5]);
 FUNC_3(&VAR_4->isdnloop_lock, VAR_6);
}
