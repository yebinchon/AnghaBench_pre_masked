
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_channel_sn2 {int * remote_msgqueue; int remote_msgqueue_base; } ;
struct TYPE_2__ {struct xpc_channel_sn2 sn2; } ;
struct xpc_channel {int remote_nentries; int entry_size; int number; int partid; int lock; TYPE_1__ sn; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_4 (size_t,int ,int *) ;

__attribute__((used)) static enum xp_retval
FUNC_5(struct xpc_channel *VAR_4)
{
 struct xpc_channel_sn2 *VAR_5 = &VAR_4->sn.sn2;
 unsigned long VAR_6;
 int VAR_7;
 size_t VAR_8;

 FUNC_0(VAR_4->remote_nentries <= 0);

 for (VAR_7 = VAR_4->remote_nentries; VAR_7 > 0; VAR_7--) {

  VAR_8 = VAR_7 * VAR_4->entry_size;
  VAR_5->remote_msgqueue =
      FUNC_4(VAR_8, VAR_0, &VAR_5->
        remote_msgqueue_base);
  if (VAR_5->remote_msgqueue == ((void*)0))
   continue;

  FUNC_2(&VAR_4->lock, VAR_6);
  if (VAR_7 < VAR_4->remote_nentries) {
   FUNC_1(VAR_3, "nentries=%d remote_nentries=%d, "
    "partid=%d, channel=%d\n", VAR_7,
    VAR_4->remote_nentries, VAR_4->partid, VAR_4->number);

   VAR_4->remote_nentries = VAR_7;
  }
  FUNC_3(&VAR_4->lock, VAR_6);
  return VAR_2;
 }

 FUNC_1(VAR_3, "can't get memory for cached remote message queue, "
  "partid=%d, channel=%d\n", VAR_4->partid, VAR_4->number);
 return VAR_1;
}
