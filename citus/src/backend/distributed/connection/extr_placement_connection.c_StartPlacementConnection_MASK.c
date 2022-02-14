
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int accessType; int * placement; } ;
typedef TYPE_1__ ShardPlacementAccess ;
typedef int ShardPlacement ;
typedef int MultiConnection ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int,int ,char const*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int) ;

MultiConnection *
FUNC_3(uint32 VAR_5, ShardPlacement *VAR_6, const char *VAR_7)
{
 ShardPlacementAccess *VAR_8 =
  (ShardPlacementAccess *) FUNC_2(sizeof(ShardPlacementAccess));

 VAR_8->placement = VAR_6;

 if (VAR_5 & VAR_0)
 {
  VAR_8->accessType = VAR_2;
 }
 else if (VAR_5 & VAR_1)
 {
  VAR_8->accessType = VAR_3;
 }
 else
 {
  VAR_8->accessType = VAR_4;
 }

 return FUNC_0(VAR_5, FUNC_1(VAR_8), VAR_7);
}
