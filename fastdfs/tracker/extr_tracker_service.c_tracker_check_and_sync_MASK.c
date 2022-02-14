
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct fast_task_info {int length; char* data; scalar_t__ arg; } ;
struct TYPE_14__ {TYPE_8__* connections; } ;
typedef TYPE_4__ TrackerServerInfo ;
typedef int TrackerHeader ;
struct TYPE_11__ {scalar_t__ tracker_leader; } ;
struct TYPE_15__ {TYPE_3__* pGroup; TYPE_2__* pStorage; TYPE_1__ chg_count; } ;
typedef TYPE_5__ TrackerClientInfo ;
struct TYPE_19__ {int leader_index; TYPE_4__* servers; } ;
struct TYPE_18__ {char* ip_addr; int port; } ;
struct TYPE_17__ {int port; int ip_addr; int id; int status; } ;
struct TYPE_16__ {char* id; int status; } ;
struct TYPE_13__ {scalar_t__ trunk_chg_count; scalar_t__ chg_count; int count; int storage_port; TYPE_6__** sorted_servers; TYPE_6__* pTrunkServer; } ;
struct TYPE_12__ {scalar_t__ trunk_chg_count; scalar_t__ chg_count; } ;
typedef TYPE_6__ FDFSStorageDetail ;
typedef TYPE_7__ FDFSStorageBrief ;
typedef TYPE_8__ ConnectionInfo ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char* FUNC_0 (TYPE_6__*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_9__ VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_5(struct fast_task_info *VAR_8, const int VAR_9)

{
 FDFSStorageDetail **VAR_10;
 FDFSStorageDetail **VAR_11;
 FDFSStorageDetail *VAR_12;
 FDFSStorageBrief *VAR_13;
 TrackerClientInfo *VAR_14;
 char *VAR_15;
 char *VAR_16;

 VAR_14 = (TrackerClientInfo *)VAR_8->arg;
 if (VAR_9 != 0 || VAR_14->pGroup == ((void*)0))
 {
  VAR_8->length = sizeof(TrackerHeader);
  return VAR_9;
 }

 VAR_16 = VAR_8->data + sizeof(TrackerHeader);
 VAR_15 = VAR_16++;
 *VAR_15 = 0;
 if (VAR_5)
 {
 if (VAR_14->chg_count.tracker_leader != VAR_6)
 {
  int VAR_17;

  *VAR_15 |= VAR_1;

  VAR_13 = (FDFSStorageBrief *)VAR_16;
  FUNC_3(VAR_16, 0, sizeof(FDFSStorageBrief));

  VAR_17 = VAR_7.leader_index;
  if (VAR_17 >= 0)
  {
   TrackerServerInfo *VAR_18;
   ConnectionInfo *VAR_19;
   VAR_18 = VAR_7.servers + VAR_17;
            VAR_19 = VAR_18->connections;
   FUNC_4(VAR_13->id, VAR_3,
    "%s", VAR_19->ip_addr);
   FUNC_2(VAR_13->ip_addr, VAR_19->ip_addr,
    VAR_4);
   FUNC_1(VAR_19->port, VAR_13->port);
  }
  VAR_13++;

  VAR_14->chg_count.tracker_leader = VAR_6;

  VAR_16 = (char *)VAR_13;
 }

 if (VAR_14->pStorage->trunk_chg_count != VAR_14->pGroup->trunk_chg_count)

 {
  *VAR_15 |= VAR_2;

  VAR_13 = (FDFSStorageBrief *)VAR_16;
  FUNC_3(VAR_16, 0, sizeof(FDFSStorageBrief));

  VAR_12 = VAR_14->pGroup->pTrunkServer;
  if (VAR_12 != ((void*)0))
  {
   VAR_13->status = VAR_12->status;
   FUNC_2(VAR_13->id, VAR_12->id,
    VAR_3);
   FUNC_2(VAR_13->ip_addr, FUNC_0(VAR_12),
    VAR_4);
   FUNC_1(VAR_14->pGroup->storage_port,
    VAR_13->port);
  }
  VAR_13++;

  VAR_14->pStorage->trunk_chg_count = VAR_14->pGroup->trunk_chg_count;

  VAR_16 = (char *)VAR_13;
 }

 if (VAR_14->pStorage->chg_count != VAR_14->pGroup->chg_count)
 {
  *VAR_15 |= VAR_0;

  VAR_13 = (FDFSStorageBrief *)VAR_16;
  VAR_11 = VAR_14->pGroup->sorted_servers + VAR_14->pGroup->count;

  for (VAR_10=VAR_14->pGroup->sorted_servers; VAR_10<VAR_11; VAR_10++)

  {
   VAR_13->status = (*VAR_10)->status;
   FUNC_2(VAR_13->id, (*VAR_10)->id,
    VAR_3);
   FUNC_2(VAR_13->ip_addr, FUNC_0(*VAR_10),
    VAR_4);
   FUNC_1(VAR_14->pGroup->storage_port,
    VAR_13->port);
   VAR_13++;
  }

  VAR_14->pStorage->chg_count = VAR_14->pGroup->chg_count;

  VAR_16 = (char *)VAR_13;
 }
 }

 VAR_8->length = VAR_16 - VAR_8->data;
 return VAR_9;
}
