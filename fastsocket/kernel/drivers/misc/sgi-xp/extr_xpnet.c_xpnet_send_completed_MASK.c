
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpnet_pending_msg {TYPE_1__* skb; int use_count; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_2__ {scalar_t__ head; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,void*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct xpnet_pending_msg*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(enum xp_retval VAR_1, short VAR_2, int VAR_3,
       void *VAR_4)
{
 struct xpnet_pending_msg *VAR_5 = (struct xpnet_pending_msg *)VAR_4;

 FUNC_0(VAR_5 == ((void*)0));

 FUNC_2(VAR_0, "message to %d notified with reason %d\n",
  VAR_2, VAR_1);

 if (FUNC_1(&VAR_5->use_count) == 0) {
  FUNC_2(VAR_0, "all acks for skb->head=-x%p\n",
   (void *)VAR_5->skb->head);

  FUNC_3(VAR_5->skb);
  FUNC_4(VAR_5);
 }
}
