
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ VCOS_STATUS_T ;
typedef int VCOS_MSG_T ;
struct TYPE_4__ {int on_reply; } ;
struct TYPE_5__ {int blockpool; int magic; TYPE_1__ waiter; int sem; } ;
typedef TYPE_2__ VCOS_MSGQ_POOL_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,size_t,int,int ,int ,char const*) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,char const*,size_t) ;

VCOS_STATUS_T FUNC_3(VCOS_MSGQ_POOL_T *VAR_4,
                                    size_t VAR_5,
                                    size_t VAR_6,
                                    const char *VAR_7)
{
   VCOS_STATUS_T VAR_8;
   int VAR_9 = VAR_6 + sizeof(VCOS_MSG_T);
   VAR_8 = FUNC_0(&VAR_4->blockpool,
                                          VAR_5, VAR_9,
                                          VAR_1,
                                          0,
                                          VAR_7);
   if (VAR_8 != VAR_2)
      goto fail_pool;

   VAR_8 = FUNC_2(&VAR_4->sem, VAR_7, VAR_5);
   if (VAR_8 != VAR_2)
      goto fail_sem;

   VAR_4->waiter.on_reply = VAR_3;
   VAR_4->magic = VAR_0;
   return VAR_8;

fail_sem:
   FUNC_1(&VAR_4->blockpool);
fail_pool:
   return VAR_8;
}
