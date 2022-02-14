
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_channel {int number; int partid; int key; int (* func ) (int,int ,int ,int *,int ) ;} ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int ,char*,int,int ,int ) ;
 int FUNC_1 (int,int ,int ,int *,int ) ;
 int VAR_0 ;

void
FUNC_2(struct xpc_channel *VAR_1, enum xp_retval VAR_2)
{






 if (VAR_1->func != ((void*)0)) {
  FUNC_0(VAR_0, "ch->func() called, reason=%d, partid=%d, "
   "channel=%d\n", VAR_2, VAR_1->partid, VAR_1->number);

  VAR_1->func(VAR_2, VAR_1->partid, VAR_1->number, ((void*)0), VAR_1->key);

  FUNC_0(VAR_0, "ch->func() returned, reason=%d, partid=%d, "
   "channel=%d\n", VAR_2, VAR_1->partid, VAR_1->number);
 }
}
