
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct cm_mra_msg {int private_data; int remote_comm_id; int local_comm_id; int hdr; } ;
struct TYPE_2__ {int remote_id; int local_id; } ;
struct cm_id_private {TYPE_1__ id; int tid; } ;
typedef enum cm_msg_response { ____Placeholder_cm_msg_response } cm_msg_response ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct cm_mra_msg*,int) ;
 int FUNC_2 (struct cm_mra_msg*,scalar_t__) ;
 int FUNC_3 (int ,void const*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct cm_mra_msg *VAR_1,
     struct cm_id_private *VAR_2,
     enum cm_msg_response VAR_3, u8 VAR_4,
     const void *VAR_5, u8 VAR_6)
{
 FUNC_0(&VAR_1->hdr, VAR_0, VAR_2->tid);
 FUNC_1(VAR_1, VAR_3);
 VAR_1->local_comm_id = VAR_2->id.local_id;
 VAR_1->remote_comm_id = VAR_2->id.remote_id;
 FUNC_2(VAR_1, VAR_4);

 if (VAR_5 && VAR_6)
  FUNC_3(VAR_1->private_data, VAR_5, VAR_6);
}
