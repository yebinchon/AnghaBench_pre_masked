
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong_t ;
struct rio_info {int dummy; } ;
struct Map {int dummy; } ;
struct Host {TYPE_2__* Mapping; } ;
struct TYPE_5__ {int ID2; TYPE_1__* Topology; } ;
struct TYPE_4__ {scalar_t__ Unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rio_info*,TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int FUNC_5(struct rio_info *VAR_8, struct Host *VAR_9, int VAR_10)
{
 int VAR_11;


 FUNC_4(VAR_2, "RIOFreeDisconnect unit %d\n", VAR_10);





 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (VAR_9->Mapping[VAR_10].Topology[VAR_11].Unit != VAR_3)
   break;
 }




 if (VAR_11 < VAR_1)
  return 1;
 if (VAR_9->Mapping[VAR_10].ID2 != 0) {
  int VAR_12 = (VAR_9->Mapping[VAR_10].ID2) - 1;

  FUNC_4(VAR_2, "RioFreedis second slot %d.\n", VAR_12);
  FUNC_3(&VAR_9->Mapping[VAR_12], 0, sizeof(struct Map));
 }
 FUNC_0(VAR_8, &VAR_9->Mapping[VAR_10]);

 return 0;
}
