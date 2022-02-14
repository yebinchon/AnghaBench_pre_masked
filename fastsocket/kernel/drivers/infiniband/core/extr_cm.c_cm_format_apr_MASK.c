
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {int remote_id; int local_id; } ;
struct cm_id_private {TYPE_1__ id; int tid; } ;
struct cm_apr_msg {int private_data; int info; void* info_length; void* ap_status; int remote_comm_id; int local_comm_id; int hdr; } ;
typedef enum ib_cm_apr_status { ____Placeholder_ib_cm_apr_status } ib_cm_apr_status ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,void const*,void*) ;

__attribute__((used)) static void FUNC_2(struct cm_apr_msg *VAR_1,
     struct cm_id_private *VAR_2,
     enum ib_cm_apr_status VAR_3,
     void *VAR_4,
     u8 VAR_5,
     const void *VAR_6,
     u8 VAR_7)
{
 FUNC_0(&VAR_1->hdr, VAR_0, VAR_2->tid);
 VAR_1->local_comm_id = VAR_2->id.local_id;
 VAR_1->remote_comm_id = VAR_2->id.remote_id;
 VAR_1->ap_status = (u8) VAR_3;

 if (VAR_4 && VAR_5) {
  VAR_1->info_length = VAR_5;
  FUNC_1(VAR_1->info, VAR_4, VAR_5);
 }

 if (VAR_6 && VAR_7)
  FUNC_1(VAR_1->private_data, VAR_6, VAR_7);
}
