
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct vmbuspipe_hdr {int dummy; } ;
struct vmbus_channel {int dummy; } ;
struct shutdown_msg_data {int flags; } ;
struct icmsg_negotiate {int dummy; } ;
struct icmsg_hdr {scalar_t__ icmsgtype; int icflags; int status; } ;
struct TYPE_2__ {int* recv_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int FUNC_2 (struct icmsg_hdr*,struct icmsg_negotiate*,int*,int ,int ) ;
 int FUNC_3 (struct vmbus_channel*,int*,int ,scalar_t__*,int *) ;
 int FUNC_4 (struct vmbus_channel*,int*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_11)
{
 struct vmbus_channel *VAR_12 = VAR_11;
 u32 VAR_13;
 u64 VAR_14;
 u8 VAR_15 = 0;
 u8 *VAR_16 = VAR_10.recv_buffer;

 struct shutdown_msg_data *VAR_17;

 struct icmsg_hdr *VAR_18;
 struct icmsg_negotiate *VAR_19 = ((void*)0);

 FUNC_3(VAR_12, VAR_16,
    VAR_5, &VAR_13, &VAR_14);

 if (VAR_13 > 0) {
  VAR_18 = (struct icmsg_hdr *)&VAR_16[
   sizeof(struct vmbuspipe_hdr)];

  if (VAR_18->icmsgtype == VAR_4) {
   FUNC_2(VAR_18, VAR_19,
     VAR_16, VAR_9,
     VAR_7);
  } else {
   VAR_17 =
    (struct shutdown_msg_data *)&VAR_16[
     sizeof(struct vmbuspipe_hdr) +
     sizeof(struct icmsg_hdr)];

   switch (VAR_17->flags) {
   case 0:
   case 1:
    VAR_18->status = VAR_1;
    VAR_15 = 1;

    FUNC_0("Shutdown request received -"
         " graceful shutdown initiated\n");
    break;
   default:
    VAR_18->status = VAR_0;
    VAR_15 = 0;

    FUNC_0("Shutdown request received -"
         " Invalid request\n");
    break;
   }
  }

  VAR_18->icflags = VAR_3
   | VAR_2;

  FUNC_4(VAR_12, VAR_16,
           VAR_13, VAR_14,
           VAR_6, 0);
 }

 if (VAR_15 == 1)
  FUNC_1(&VAR_8);
}
