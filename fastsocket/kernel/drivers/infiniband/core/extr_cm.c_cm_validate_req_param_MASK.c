
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ib_cm_req_param {scalar_t__ qp_type; scalar_t__ private_data_len; TYPE_2__* primary_path; TYPE_1__* alternate_path; scalar_t__ private_data; scalar_t__ peer_to_peer; } ;
struct TYPE_4__ {scalar_t__ pkey; scalar_t__ mtu; } ;
struct TYPE_3__ {scalar_t__ pkey; scalar_t__ mtu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct ib_cm_req_param *VAR_5)
{

 if (VAR_5->peer_to_peer)
  return -VAR_0;

 if (!VAR_5->primary_path)
  return -VAR_0;

 if (VAR_5->qp_type != VAR_2 && VAR_5->qp_type != VAR_3 &&
     VAR_5->qp_type != VAR_4)
  return -VAR_0;

 if (VAR_5->private_data &&
     VAR_5->private_data_len > VAR_1)
  return -VAR_0;

 if (VAR_5->alternate_path &&
     (VAR_5->alternate_path->pkey != VAR_5->primary_path->pkey ||
      VAR_5->alternate_path->mtu != VAR_5->primary_path->mtu))
  return -VAR_0;

 return 0;
}
