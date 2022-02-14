
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xpc_msg_sn2 {scalar_t__ number; int flags; int payload; } ;
struct TYPE_6__ {scalar_t__ get; } ;
struct TYPE_5__ {scalar_t__ put; } ;
struct xpc_channel_sn2 {TYPE_3__ w_local_GP; TYPE_2__ w_remote_GP; } ;
struct TYPE_4__ {struct xpc_channel_sn2 sn2; } ;
struct xpc_channel {int flags; int number; int partid; TYPE_1__ sn; } ;
typedef scalar_t__ s64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,char*,scalar_t__,int ,int ) ;
 int FUNC_3 () ;
 int VAR_3 ;
 struct xpc_msg_sn2* FUNC_4 (struct xpc_channel*,scalar_t__) ;

__attribute__((used)) static void *
FUNC_5(struct xpc_channel *VAR_4)
{
 struct xpc_channel_sn2 *VAR_5 = &VAR_4->sn.sn2;
 struct xpc_msg_sn2 *VAR_6;
 void *VAR_7 = ((void*)0);
 s64 VAR_8;

 do {
  if (VAR_4->flags & VAR_0)
   break;

  VAR_8 = VAR_5->w_local_GP.get;
  FUNC_3();
  if (VAR_8 == VAR_5->w_remote_GP.put)
   break;
  if (FUNC_1(&VAR_5->w_local_GP.get, VAR_8, VAR_8 + 1) == VAR_8) {


   FUNC_2(VAR_3, "w_local_GP.get changed to %lld, "
    "partid=%d, channel=%d\n", VAR_8 + 1,
    VAR_4->partid, VAR_4->number);



   VAR_6 = FUNC_4(VAR_4, VAR_8);

   if (VAR_6 != ((void*)0)) {
    FUNC_0(VAR_6->number != VAR_8);
    FUNC_0(VAR_6->flags & VAR_1);
    FUNC_0(!(VAR_6->flags & VAR_2));

    VAR_7 = &VAR_6->payload;
   }
   break;
  }

 } while (1);

 return VAR_7;
}
