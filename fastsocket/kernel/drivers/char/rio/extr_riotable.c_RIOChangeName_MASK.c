
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int Error; } ;
struct rio_info {int RIONumHosts; TYPE_2__ RIOError; TYPE_1__* RIOHosts; } ;
struct Map {scalar_t__ HostUniqueNum; scalar_t__ RtaUniqueNum; int ID; char* Name; scalar_t__ SysPort; } ;
struct TYPE_3__ {scalar_t__ UniqueNum; int Flags; char* Name; struct Map* Mapping; } ;


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
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,char*,...) ;

int FUNC_2(struct rio_info *VAR_12, struct Map *VAR_13)
{
 int VAR_14;
 struct Map *VAR_15;
 char *VAR_16;

 FUNC_1(VAR_8, "Change name entry on host %x, rta %x, ID %d, Sysport %d\n", VAR_13->HostUniqueNum, VAR_13->RtaUniqueNum, VAR_13->ID, (int) VAR_13->SysPort);

 if (VAR_13->ID > VAR_6) {
  FUNC_1(VAR_8, "Bad ID in map entry!\n");
  VAR_12->RIOError.Error = VAR_4;
  return -VAR_1;
 }

 VAR_13->Name[VAR_5 - 1] = '\0';
 VAR_16 = VAR_13->Name;

 while (*VAR_16) {
  if (*VAR_16 < ' ' || *VAR_16 > '~') {
   FUNC_1(VAR_8, "Name entry contains non-printing characters!\n");
   VAR_12->RIOError.Error = VAR_0;
   return -VAR_1;
  }
  VAR_16++;
 }

 for (VAR_14 = 0; VAR_14 < VAR_12->RIONumHosts; VAR_14++) {
  if (VAR_13->HostUniqueNum == VAR_12->RIOHosts[VAR_14].UniqueNum) {
   if ((VAR_12->RIOHosts[VAR_14].Flags & VAR_10) != VAR_7) {
    VAR_12->RIOError.Error = VAR_3;
    return -VAR_2;
   }
   if (VAR_13->ID == 0) {
    FUNC_0(VAR_12->RIOHosts[VAR_14].Name, VAR_13->Name, VAR_5);
    return 0;
   }

   VAR_15 = &VAR_12->RIOHosts[VAR_14].Mapping[VAR_13->ID - 1];

   if (VAR_15->RtaUniqueNum != VAR_13->RtaUniqueNum) {
    VAR_12->RIOError.Error = VAR_9;
    return -VAR_2;
   }
   FUNC_0(VAR_15->Name, VAR_13->Name, VAR_5);
   return 0;
  }
 }
 VAR_12->RIOError.Error = VAR_11;
 FUNC_1(VAR_8, "Unknown host %x\n", VAR_13->HostUniqueNum);
 return -VAR_2;
}
