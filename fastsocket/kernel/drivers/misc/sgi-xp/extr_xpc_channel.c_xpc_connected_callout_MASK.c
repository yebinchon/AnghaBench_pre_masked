
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct xpc_channel {int number; int partid; int key; scalar_t__ local_nentries; int (* func ) (int ,int ,int ,void*,int ) ;} ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2(struct xpc_channel *VAR_2)
{


 if (VAR_2->func != ((void*)0)) {
  FUNC_0(VAR_1, "ch->func() called, reason=xpConnected, "
   "partid=%d, channel=%d\n", VAR_2->partid, VAR_2->number);

  VAR_2->func(VAR_0, VAR_2->partid, VAR_2->number,
    (void *)(u64)VAR_2->local_nentries, VAR_2->key);

  FUNC_0(VAR_1, "ch->func() returned, reason=xpConnected, "
   "partid=%d, channel=%d\n", VAR_2->partid, VAR_2->number);
 }
}
