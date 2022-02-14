
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rndis_params {scalar_t__ state; int v; int (* resp_avail ) (int ) ;} ;
struct TYPE_4__ {scalar_t__ buf; } ;
typedef TYPE_1__ rndis_resp_t ;
struct TYPE_5__ {void* StatusBufferOffset; void* StatusBufferLength; void* Status; void* MessageLength; void* MessageType; } ;
typedef TYPE_2__ rndis_indicate_status_msg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 struct rndis_params* VAR_4 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (int VAR_5, u32 VAR_6)
{
 rndis_indicate_status_msg_type *VAR_7;
 rndis_resp_t *VAR_8;
 struct rndis_params *VAR_9 = VAR_4 + VAR_5;

 if (VAR_9->state == VAR_3)
  return -VAR_1;

 VAR_8 = FUNC_1 (VAR_5,
    sizeof (rndis_indicate_status_msg_type));
 if (!VAR_8)
  return -VAR_0;
 VAR_7 = (rndis_indicate_status_msg_type *) VAR_8->buf;

 VAR_7->MessageType = FUNC_0 (
   VAR_2);
 VAR_7->MessageLength = FUNC_0 (20);
 VAR_7->Status = FUNC_0 (VAR_6);
 VAR_7->StatusBufferLength = FUNC_0 (0);
 VAR_7->StatusBufferOffset = FUNC_0 (0);

 VAR_9->resp_avail(VAR_9->v);
 return 0;
}
