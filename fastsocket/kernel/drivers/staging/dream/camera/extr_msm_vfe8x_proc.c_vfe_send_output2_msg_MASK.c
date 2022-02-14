
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfe_msg_output {int dummy; } ;
struct TYPE_4__ {int msgOutput2; } ;
struct vfe_message {TYPE_1__ _u; int _d; } ;
struct TYPE_5__ {void* ackPending; } ;
struct TYPE_6__ {scalar_t__ vstate; int vfeRequestedSnapShotCount; scalar_t__ vfeOperationMode; TYPE_2__ encPath; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (struct vfe_message*) ;
 struct vfe_message* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int ,struct vfe_message*,int) ;

__attribute__((used)) static void FUNC_4(
 struct vfe_msg_output *VAR_6)
{

 struct vfe_message *VAR_7;

 VAR_7 = FUNC_1(sizeof(struct vfe_message), VAR_0);
 if (!VAR_7)
  return;




 if (VAR_5->vstate != VAR_4) {
  FUNC_0(VAR_7);
  goto output2_msg_done;
 }

 VAR_7->_d = VAR_2;

 FUNC_2(&(VAR_7->_u.msgOutput2),
  (void *)VAR_6, sizeof(struct vfe_msg_output));

 FUNC_3(VAR_2,
  VAR_7, sizeof(struct vfe_message));

 VAR_5->encPath.ackPending = VAR_1;

 if (!(VAR_5->vfeRequestedSnapShotCount <= 3) &&
   (VAR_5->vfeOperationMode ==
    VAR_3))
  VAR_5->encPath.ackPending = VAR_1;

output2_msg_done:

 return;
}
