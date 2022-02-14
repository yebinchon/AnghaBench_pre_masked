
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_5__ {int on_reply; } ;
struct TYPE_6__ {int sem; int lock; TYPE_1__ waiter; } ;
typedef TYPE_2__ VCOS_MSGQUEUE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 scalar_t__ FUNC_2 (int *,char const*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static VCOS_STATUS_T FUNC_4(VCOS_MSGQUEUE_T *VAR_2, const char *VAR_3)
{
   VCOS_STATUS_T VAR_4;

   FUNC_0(VAR_2, 0, sizeof(*VAR_2));

   VAR_2->waiter.on_reply = VAR_1;
   VAR_4 = FUNC_2(&VAR_2->sem, VAR_3, 0);
   if (VAR_4 != VAR_0)
      goto fail_sem;

   VAR_4 = FUNC_1(&VAR_2->lock, VAR_3);
   if (VAR_4 != VAR_0)
      goto fail_mtx;

   return VAR_4;

fail_mtx:
   FUNC_3(&VAR_2->sem);
fail_sem:
   return VAR_4;
}
