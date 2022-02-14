
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct cm_rej_msg {int private_data; int ari; int reason; int local_comm_id; int remote_comm_id; int hdr; } ;
struct TYPE_2__ {int state; int local_id; int remote_id; } ;
struct cm_id_private {TYPE_1__ id; int tid; } ;
typedef enum ib_cm_rej_reason { ____Placeholder_ib_cm_rej_reason } ib_cm_rej_reason ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct cm_rej_msg*,int ) ;
 int FUNC_2 (struct cm_rej_msg*,scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,void const*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct cm_rej_msg *VAR_4,
     struct cm_id_private *VAR_5,
     enum ib_cm_rej_reason VAR_6,
     void *VAR_7,
     u8 VAR_8,
     const void *VAR_9,
     u8 VAR_10)
{
 FUNC_0(&VAR_4->hdr, VAR_3, VAR_5->tid);
 VAR_4->remote_comm_id = VAR_5->id.remote_id;

 switch(VAR_5->id.state) {
 case 128:
  VAR_4->local_comm_id = 0;
  FUNC_1(VAR_4, VAR_2);
  break;
 case 130:
  VAR_4->local_comm_id = VAR_5->id.local_id;
  FUNC_1(VAR_4, VAR_2);
  break;
 case 129:
 case 131:
  VAR_4->local_comm_id = VAR_5->id.local_id;
  FUNC_1(VAR_4, VAR_1);
  break;
 default:
  VAR_4->local_comm_id = VAR_5->id.local_id;
  FUNC_1(VAR_4, VAR_0);
  break;
 }

 VAR_4->reason = FUNC_3(VAR_6);
 if (VAR_7 && VAR_8) {
  FUNC_2(VAR_4, VAR_8);
  FUNC_4(VAR_4->ari, VAR_7, VAR_8);
 }

 if (VAR_9 && VAR_10)
  FUNC_4(VAR_4->private_data, VAR_9, VAR_10);
}
