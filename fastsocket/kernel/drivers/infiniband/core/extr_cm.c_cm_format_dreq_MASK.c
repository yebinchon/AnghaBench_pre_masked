
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int remote_id; int local_id; } ;
struct cm_id_private {int remote_qpn; TYPE_1__ id; } ;
struct cm_dreq_msg {int private_data; int remote_comm_id; int local_comm_id; int hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cm_dreq_msg*,int ) ;
 int FUNC_1 (struct cm_id_private*,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,void const*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct cm_dreq_msg *VAR_2,
     struct cm_id_private *VAR_3,
     const void *VAR_4,
     u8 VAR_5)
{
 FUNC_2(&VAR_2->hdr, VAR_0,
     FUNC_1(VAR_3, VAR_1));
 VAR_2->local_comm_id = VAR_3->id.local_id;
 VAR_2->remote_comm_id = VAR_3->id.remote_id;
 FUNC_0(VAR_2, VAR_3->remote_qpn);

 if (VAR_4 && VAR_5)
  FUNC_3(VAR_2->private_data, VAR_4, VAR_5);
}
