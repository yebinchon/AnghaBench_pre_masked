
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_info {struct Map* RIOConnectTable; struct Host* RIOHosts; } ;
struct Map {int Flags; int Name; int * Topology; int SysPort; scalar_t__ ID; scalar_t__ RtaUniqueNum; int HostUniqueNum; } ;
struct Host {int Flags; int HostLock; struct Map* Mapping; int Name; int * Topology; int UniqueNum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct Map*,int ,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

int FUNC_5(struct rio_info *VAR_12)
{
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16 = 0;
 struct Map *VAR_17;
 struct Host *VAR_18;
 unsigned long VAR_19;

 FUNC_2(VAR_5, "Generating a table to return to config.rio\n");

 FUNC_1(&VAR_12->RIOConnectTable[0], 0, sizeof(struct Map) * VAR_11);

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  FUNC_2(VAR_5, "Processing host %d\n", VAR_13);
  VAR_18 = &VAR_12->RIOHosts[VAR_13];
  FUNC_3(&VAR_18->HostLock, VAR_19);

  VAR_17 = &VAR_12->RIOConnectTable[VAR_16++];
  VAR_17->HostUniqueNum = VAR_18->UniqueNum;
  if ((VAR_18->Flags & VAR_8) != VAR_4) {
   FUNC_4(&VAR_18->HostLock, VAR_19);
   continue;
  }
  VAR_17->RtaUniqueNum = 0;
  VAR_17->ID = 0;
  VAR_17->Flags = VAR_9;
  VAR_17->SysPort = VAR_3;
  for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++)
   VAR_17->Topology[VAR_14] = VAR_18->Topology[VAR_14];
  FUNC_0(VAR_17->Name, VAR_18->Name, VAR_1);
  for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++) {
   if (VAR_18->Mapping[VAR_15].Flags & (VAR_9 | VAR_10)) {
    VAR_12->RIOConnectTable[VAR_16] = VAR_18->Mapping[VAR_15];
    if (VAR_18->Mapping[VAR_15].Flags & VAR_9)
     VAR_12->RIOConnectTable[VAR_16].Flags |= VAR_9;
    if (VAR_18->Mapping[VAR_15].Flags & VAR_10)
     VAR_12->RIOConnectTable[VAR_16].Flags |= VAR_10;
    if (VAR_18->Mapping[VAR_15].Flags & VAR_7)
     VAR_12->RIOConnectTable[VAR_16].Flags |= VAR_7;
    VAR_16++;
   }
  }
  FUNC_4(&VAR_18->HostLock, VAR_19);
 }
 return 0;
}
