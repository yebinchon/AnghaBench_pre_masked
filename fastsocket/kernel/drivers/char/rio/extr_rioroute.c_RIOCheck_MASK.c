
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct Host {TYPE_2__* Mapping; } ;
struct TYPE_4__ {int Flags; TYPE_1__* Topology; } ;
struct TYPE_3__ {unsigned int Unit; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct Host *VAR_5, unsigned int VAR_6)
{
 unsigned char VAR_7;


 FUNC_0(VAR_4, "RIOCheck : UnitID = %d\n", VAR_6);

 if (VAR_6 == VAR_1) {

  return 1;
 }

 VAR_6--;

 if (VAR_6 >= VAR_3) {

  return 0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_5->Mapping[VAR_6].Topology[VAR_7].Unit == VAR_1) {


   return 1;
  }
 }

 if (VAR_5->Mapping[VAR_6].Flags & VAR_0) {

  return 0;
 }

 VAR_5->Mapping[VAR_6].Flags |= VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {

  if (FUNC_1(VAR_5, VAR_5->Mapping[VAR_6].Topology[VAR_7].Unit)) {

   VAR_5->Mapping[VAR_6].Flags &= ~VAR_0;
   return 1;
  }
 }

 VAR_5->Mapping[VAR_6].Flags &= ~VAR_0;



 return 0;
}
