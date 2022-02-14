
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfe_msg_output {int dummy; } ;
struct vfe_message {int _u; int _d; } ;
struct TYPE_3__ {void* ackPending; } ;
struct TYPE_4__ {scalar_t__ vstate; int vfeRequestedSnapShotCount; scalar_t__ vfeOperationMode; TYPE_1__ viewPath; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* VAR_5 ;
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
  goto output1_msg_done;
 }

 VAR_7->_d = VAR_2;
 FUNC_2(&(VAR_7->_u),
  (void *)VAR_6, sizeof(struct vfe_msg_output));

 FUNC_3(VAR_2,
  VAR_7, sizeof(struct vfe_message));

 VAR_5->viewPath.ackPending = VAR_1;

 if (!(VAR_5->vfeRequestedSnapShotCount <= 3) &&
   (VAR_5->vfeOperationMode ==
    VAR_3))
  VAR_5->viewPath.ackPending = VAR_1;

output1_msg_done:

 return;
}
