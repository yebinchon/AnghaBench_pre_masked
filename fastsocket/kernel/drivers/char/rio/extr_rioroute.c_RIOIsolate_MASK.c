
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rio_info {scalar_t__ RIOPrintDisabled; } ;
struct Host {TYPE_2__* Mapping; } ;
struct TYPE_4__ {int Flags; TYPE_1__* Topology; int Name; } ;
struct TYPE_3__ {unsigned int Unit; int Link; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct rio_info *VAR_7, struct Host *VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10, VAR_11;

 VAR_9--;

 if (VAR_9 >= VAR_3)
  return (0);

 if (VAR_8->Mapping[VAR_9].Flags & VAR_0)
  return (0);

 VAR_8->Mapping[VAR_9].Flags |= VAR_0;

 if (VAR_7->RIOPrintDisabled == VAR_1)
  FUNC_0(VAR_5, "RIOMesgIsolated %s", VAR_8->Mapping[VAR_9].Name);

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_11 = VAR_8->Mapping[VAR_9].Topology[VAR_10].Unit;
  VAR_8->Mapping[VAR_9].Topology[VAR_10].Unit = VAR_6;
  VAR_8->Mapping[VAR_9].Topology[VAR_10].Link = VAR_4;
  FUNC_1(VAR_7, VAR_8, VAR_11);
 }
 VAR_8->Mapping[VAR_9].Flags &= ~VAR_0;
 return 1;
}
