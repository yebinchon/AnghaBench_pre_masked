
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* RomSize; char* RamSize; char* CpuRev; char* BoardRev; char* NumPorts; int SerNumLength; int AssemblyNumLength; int OemAssyNumLength; char* UartType; char* IonPid; char* IonConfig; int OemAssyNumber; int AssemblyNumber; int SerialNumber; scalar_t__* DescDate; } ;
struct edgeport_serial {TYPE_2__ manuf_descriptor; TYPE_3__* serial; } ;
typedef int string ;
typedef int __u8 ;
typedef int __u16 ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_3__*,int,int ,int ,int *) ;
 int FUNC_3 (char*,int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct edgeport_serial *VAR_2)
{
 int VAR_3;

 FUNC_0("getting manufacturer descriptor");

 VAR_3 = FUNC_2(VAR_2->serial,
    (VAR_0 & 0xffff0000) >> 16,
    (__u16)(VAR_0 & 0x0000ffff),
    VAR_1,
    (__u8 *)(&VAR_2->manuf_descriptor));

 if (VAR_3 < 1)
  FUNC_1(&VAR_2->serial->dev->dev,
   "error in getting manufacturer descriptor\n");
 else {
  char VAR_4[30];
  FUNC_0("**Manufacturer Descriptor");
  FUNC_0("  RomSize:        %dK",
   VAR_2->manuf_descriptor.RomSize);
  FUNC_0("  RamSize:        %dK",
   VAR_2->manuf_descriptor.RamSize);
  FUNC_0("  CpuRev:         %d",
   VAR_2->manuf_descriptor.CpuRev);
  FUNC_0("  BoardRev:       %d",
   VAR_2->manuf_descriptor.BoardRev);
  FUNC_0("  NumPorts:       %d",
   VAR_2->manuf_descriptor.NumPorts);
  FUNC_0("  DescDate:       %d/%d/%d",
   VAR_2->manuf_descriptor.DescDate[0],
   VAR_2->manuf_descriptor.DescDate[1],
   VAR_2->manuf_descriptor.DescDate[2]+1900);
  FUNC_3(VAR_4, sizeof(VAR_4),
   VAR_2->manuf_descriptor.SerialNumber,
   VAR_2->manuf_descriptor.SerNumLength/2);
  FUNC_0("  SerialNumber: %s", VAR_4);
  FUNC_3(VAR_4, sizeof(VAR_4),
   VAR_2->manuf_descriptor.AssemblyNumber,
   VAR_2->manuf_descriptor.AssemblyNumLength/2);
  FUNC_0("  AssemblyNumber: %s", VAR_4);
  FUNC_3(VAR_4, sizeof(VAR_4),
      VAR_2->manuf_descriptor.OemAssyNumber,
      VAR_2->manuf_descriptor.OemAssyNumLength/2);
  FUNC_0("  OemAssyNumber:  %s", VAR_4);
  FUNC_0("  UartType:       %d",
   VAR_2->manuf_descriptor.UartType);
  FUNC_0("  IonPid:         %d",
   VAR_2->manuf_descriptor.IonPid);
  FUNC_0("  IonConfig:      %d",
   VAR_2->manuf_descriptor.IonConfig);
 }
}
