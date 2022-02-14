
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rndis_params {int v; int (* resp_avail ) (int ) ;TYPE_1__* dev; } ;
struct rndis_packet_msg_type {int dummy; } ;
struct ethhdr {int dummy; } ;
struct TYPE_8__ {scalar_t__ buf; } ;
typedef TYPE_2__ rndis_resp_t ;
struct TYPE_9__ {int RequestID; } ;
typedef TYPE_3__ rndis_init_msg_type ;
struct TYPE_10__ {void* AFListSize; void* AFListOffset; void* PacketAlignmentFactor; void* MaxTransferSize; void* MaxPacketsPerTransfer; void* Medium; void* DeviceFlags; void* MinorVersion; void* MajorVersion; void* Status; int RequestID; void* MessageLength; void* MessageType; } ;
typedef TYPE_4__ rndis_init_cmplt_type ;
struct TYPE_7__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int,int) ;
 struct rndis_params* VAR_8 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (int VAR_9, rndis_init_msg_type *VAR_10)
{
 rndis_init_cmplt_type *VAR_11;
 rndis_resp_t *VAR_12;
 struct rndis_params *VAR_13 = VAR_8 + VAR_9;

 if (!VAR_13->dev)
  return -VAR_1;

 VAR_12 = FUNC_1 (VAR_9, sizeof (rndis_init_cmplt_type));
 if (!VAR_12)
  return -VAR_0;
 VAR_11 = (rndis_init_cmplt_type *) VAR_12->buf;

 VAR_11->MessageType = FUNC_0 (
   VAR_2);
 VAR_11->MessageLength = FUNC_0 (52);
 VAR_11->RequestID = VAR_10->RequestID;
 VAR_11->Status = FUNC_0 (VAR_7);
 VAR_11->MajorVersion = FUNC_0 (VAR_4);
 VAR_11->MinorVersion = FUNC_0 (VAR_6);
 VAR_11->DeviceFlags = FUNC_0 (VAR_3);
 VAR_11->Medium = FUNC_0 (VAR_5);
 VAR_11->MaxPacketsPerTransfer = FUNC_0 (1);
 VAR_11->MaxTransferSize = FUNC_0 (
    VAR_13->dev->mtu
  + sizeof (struct ethhdr)
  + sizeof (struct rndis_packet_msg_type)
  + 22);
 VAR_11->PacketAlignmentFactor = FUNC_0 (0);
 VAR_11->AFListOffset = FUNC_0 (0);
 VAR_11->AFListSize = FUNC_0 (0);

 VAR_13->resp_avail(VAR_13->v);
 return 0;
}
