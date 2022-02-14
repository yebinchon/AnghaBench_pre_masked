
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rndis_params {int v; int (* resp_avail ) (int ) ;} ;
struct TYPE_6__ {scalar_t__ buf; } ;
typedef TYPE_1__ rndis_resp_t ;
struct TYPE_7__ {int RequestID; } ;
typedef TYPE_2__ rndis_keepalive_msg_type ;
struct TYPE_8__ {void* Status; int RequestID; void* MessageLength; void* MessageType; } ;
typedef TYPE_3__ rndis_keepalive_cmplt_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 struct rndis_params* VAR_3 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (int VAR_4,
    rndis_keepalive_msg_type *VAR_5)
{
 rndis_keepalive_cmplt_type *VAR_6;
 rndis_resp_t *VAR_7;
 struct rndis_params *VAR_8 = VAR_3 + VAR_4;



 VAR_7 = FUNC_1 (VAR_4, sizeof (rndis_keepalive_cmplt_type));
 if (!VAR_7)
  return -VAR_0;
 VAR_6 = (rndis_keepalive_cmplt_type *) VAR_7->buf;

 VAR_6->MessageType = FUNC_0 (
   VAR_1);
 VAR_6->MessageLength = FUNC_0 (16);
 VAR_6->RequestID = VAR_5->RequestID;
 VAR_6->Status = FUNC_0 (VAR_2);

 VAR_8->resp_avail(VAR_8->v);
 return 0;
}
