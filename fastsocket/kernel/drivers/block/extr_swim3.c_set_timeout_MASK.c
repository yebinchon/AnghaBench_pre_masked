
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* function ) (unsigned long) ;unsigned long data; scalar_t__ expires; } ;
struct floppy_state {int timeout_pending; int lock; TYPE_1__ timeout; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct floppy_state *VAR_1, int VAR_2,
   void (*VAR_3)(unsigned long))
{
 unsigned long VAR_4;

 FUNC_2(&VAR_1->lock, VAR_4);
 if (VAR_1->timeout_pending)
  FUNC_1(&VAR_1->timeout);
 VAR_1->timeout.expires = VAR_0 + VAR_2;
 VAR_1->timeout.function = VAR_3;
 VAR_1->timeout.data = (unsigned long) VAR_1;
 FUNC_0(&VAR_1->timeout);
 VAR_1->timeout_pending = 1;
 FUNC_3(&VAR_1->lock, VAR_4);
}
