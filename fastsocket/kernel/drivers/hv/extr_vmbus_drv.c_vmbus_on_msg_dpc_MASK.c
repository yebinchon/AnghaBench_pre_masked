
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct onmessage_work_context {int work; int msg; } ;
struct TYPE_5__ {scalar_t__ msg_pending; } ;
struct TYPE_6__ {scalar_t__ message_type; TYPE_1__ message_flags; } ;
struct hv_message {TYPE_2__ header; } ;
struct TYPE_8__ {void** synic_message_page; } ;
struct TYPE_7__ {int work_queue; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 struct onmessage_work_context* FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,struct hv_message*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_7)
{
 int VAR_8 = FUNC_5();
 void *VAR_9 = VAR_4.synic_message_page[VAR_8];
 struct hv_message *VAR_10 = (struct hv_message *)VAR_9 +
      VAR_3;
 struct onmessage_work_context *VAR_11;

 while (1) {
  if (VAR_10->header.message_type == VAR_1) {

   break;
  } else {
   VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_0);
   if (VAR_11 == ((void*)0))
    continue;
   FUNC_0(&VAR_11->work, VAR_6);
   FUNC_3(&VAR_11->msg, VAR_10, sizeof(*VAR_10));
   FUNC_4(VAR_5.work_queue, &VAR_11->work);
  }

  VAR_10->header.message_type = VAR_1;
  FUNC_2();

  if (VAR_10->header.message_flags.msg_pending) {





   FUNC_6(VAR_2, 0);
  }
 }
}
