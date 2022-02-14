
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_3__ {void* priv_data; void* priv_data_len; } ;
struct nes_cm_node {void** mpa_frame_buf; void* mpa_frame_size; TYPE_1__ mpa_frame; struct iw_cm_id* cm_id; struct nes_cm_core* cm_core; struct nes_cm_node* loopbackpartner; } ;
struct nes_cm_core {TYPE_2__* api; } ;
struct iw_cm_id {scalar_t__ provider_data; } ;
struct ietf_mpa_v2 {int dummy; } ;
struct TYPE_4__ {int (* reject ) (struct nes_cm_core*,struct nes_cm_node*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (void**,void const*,void*) ;
 int FUNC_2 (struct nes_cm_core*,struct nes_cm_node*) ;

int FUNC_3(struct iw_cm_id *VAR_3, const void *VAR_4, u8 VAR_5)
{
 struct nes_cm_node *VAR_6;
 struct nes_cm_node *VAR_7;
 struct nes_cm_core *VAR_8;
 u8 *VAR_9;

 FUNC_0(&VAR_2);
 VAR_6 = (struct nes_cm_node *)VAR_3->provider_data;
 VAR_7 = VAR_6->loopbackpartner;
 VAR_8 = VAR_6->cm_core;
 VAR_6->cm_id = VAR_3;

 if (VAR_5 + sizeof(struct ietf_mpa_v2) > VAR_1)
  return -VAR_0;

 if (VAR_7) {
  FUNC_1(&VAR_7->mpa_frame.priv_data, VAR_4, VAR_5);
  VAR_7->mpa_frame.priv_data_len = VAR_5;
  VAR_7->mpa_frame_size = VAR_5;
 } else {
  VAR_9 = &VAR_6->mpa_frame_buf[0] + sizeof(struct ietf_mpa_v2);
  VAR_6->mpa_frame_size = VAR_5;
  FUNC_1(VAR_9, VAR_4, VAR_5);
 }
 return VAR_8->api->reject(VAR_8, VAR_6);
}
