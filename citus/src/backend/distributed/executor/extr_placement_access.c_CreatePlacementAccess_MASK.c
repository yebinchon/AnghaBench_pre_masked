
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int accessType; int * placement; } ;
typedef int ShardPlacementAccessType ;
typedef TYPE_1__ ShardPlacementAccess ;
typedef int ShardPlacement ;


 scalar_t__ FUNC_0 (int) ;

ShardPlacementAccess *
FUNC_1(ShardPlacement *VAR_0, ShardPlacementAccessType VAR_1)
{
 ShardPlacementAccess *VAR_2 = ((void*)0);

 VAR_2 = (ShardPlacementAccess *) FUNC_0(sizeof(ShardPlacementAccess));
 VAR_2->placement = VAR_0;
 VAR_2->accessType = VAR_1;

 return VAR_2;
}
