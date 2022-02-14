
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
typedef int info ;
struct TYPE_4__ {int keysize; int entrysize; void* hcxt; void* hash; int match; } ;
typedef TYPE_1__ HASHCTL ;
typedef int ConnectionShardHashKey ;
typedef int ConnectionShardHashEntry ;
typedef int ConnectionPlacementHashKey ;
typedef int ConnectionPlacementHashEntry ;
typedef int ColocatedPlacementsHashKey ;
typedef int ColocatedPlacementsHashEntry ;


 int FUNC_0 () ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_1 (char*,int,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 void* VAR_11 ;

void
FUNC_3(void)
{
 HASHCTL VAR_12;
 uint32 VAR_13 = 0;


 FUNC_2(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.keysize = sizeof(ConnectionPlacementHashKey);
 VAR_12.entrysize = sizeof(ConnectionPlacementHashEntry);
 VAR_12.hash = VAR_11;
 VAR_12.hcxt = VAR_3;
 VAR_13 = (VAR_9 | VAR_6 | VAR_8);

 VAR_4 = FUNC_1("citus connection cache (placementid)",
            64, &VAR_12, VAR_13);


 FUNC_2(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.keysize = sizeof(ColocatedPlacementsHashKey);
 VAR_12.entrysize = sizeof(ColocatedPlacementsHashEntry);
 VAR_12.hash = VAR_2;
 VAR_12.match = VAR_1;
 VAR_12.hcxt = VAR_3;
 VAR_13 = (VAR_9 | VAR_10 | VAR_8 | VAR_7);

 VAR_0 = FUNC_1("citus connection cache (colocated placements)",
            64, &VAR_12, VAR_13);


 FUNC_2(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.keysize = sizeof(ConnectionShardHashKey);
 VAR_12.entrysize = sizeof(ConnectionShardHashEntry);
 VAR_12.hash = VAR_11;
 VAR_12.hcxt = VAR_3;
 VAR_13 = (VAR_9 | VAR_6 | VAR_8);

 VAR_5 = FUNC_1("citus connection cache (shardid)",
           64, &VAR_12, VAR_13);


 FUNC_0();
}
