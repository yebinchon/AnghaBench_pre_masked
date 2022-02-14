
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ hostdata; } ;
struct BusLogic_HostAdapter {char const* FullModelName; } ;



__attribute__((used)) static const char *FUNC_0(struct Scsi_Host *VAR_0)
{
 struct BusLogic_HostAdapter *VAR_1 = (struct BusLogic_HostAdapter *) VAR_0->hostdata;
 return VAR_1->FullModelName;
}
