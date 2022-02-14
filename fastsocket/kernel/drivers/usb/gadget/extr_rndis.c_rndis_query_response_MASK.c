
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct rndis_params {int v; int (* resp_avail ) (int ) ;int dev; } ;
struct TYPE_7__ {scalar_t__ buf; } ;
typedef TYPE_1__ rndis_resp_t ;
struct TYPE_8__ {int InformationBufferLength; int InformationBufferOffset; int OID; int RequestID; } ;
typedef TYPE_2__ rndis_query_msg_type ;
struct TYPE_9__ {void* Status; void* InformationBufferOffset; void* InformationBufferLength; void* MessageLength; int RequestID; void* MessageType; } ;
typedef TYPE_3__ rndis_query_cmplt_type ;
typedef int oid_supported_list ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int,int *,int,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int,int) ;
 struct rndis_params* VAR_5 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5 (int VAR_6, rndis_query_msg_type *VAR_7)
{
 rndis_query_cmplt_type *VAR_8;
 rndis_resp_t *VAR_9;
 struct rndis_params *VAR_10 = VAR_5 + VAR_6;


 if (!VAR_10->dev)
  return -VAR_1;







 VAR_9 = FUNC_3 (VAR_6,
  sizeof (oid_supported_list) + sizeof(rndis_query_cmplt_type));
 if (!VAR_9)
  return -VAR_0;
 VAR_8 = (rndis_query_cmplt_type *) VAR_9->buf;

 VAR_8->MessageType = FUNC_0 (VAR_2);
 VAR_8->RequestID = VAR_7->RequestID;

 if (FUNC_1 (VAR_6, FUNC_2 (VAR_7->OID),
   FUNC_2(VAR_7->InformationBufferOffset)
     + 8 + (u8 *) VAR_7,
   FUNC_2(VAR_7->InformationBufferLength),
   VAR_9)) {

  VAR_8->Status = FUNC_0 (
    VAR_3);
  VAR_8->MessageLength = FUNC_0 (sizeof *VAR_8);
  VAR_8->InformationBufferLength = FUNC_0 (0);
  VAR_8->InformationBufferOffset = FUNC_0 (0);
 } else
  VAR_8->Status = FUNC_0 (VAR_4);

 VAR_10->resp_avail(VAR_10->v);
 return 0;
}
