
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_11__ {int binary; } ;
struct TYPE_10__ {TYPE_2__* shardState; TYPE_1__* connectionState; } ;
struct TYPE_9__ {int shardId; } ;
struct TYPE_8__ {int * connection; } ;
typedef int MultiConnection ;
typedef TYPE_3__ CopyPlacementState ;
typedef TYPE_4__* CopyOutState ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(CopyPlacementState *VAR_0,
        CopyOutState VAR_1)
{
 MultiConnection *VAR_2 = VAR_0->connectionState->connection;
 uint64 VAR_3 = VAR_0->shardState->shardId;
 bool VAR_4 = VAR_1->binary;


 if (VAR_4)
 {
  FUNC_1(VAR_1, VAR_3, FUNC_2(VAR_2));
 }

 FUNC_0(VAR_3, FUNC_2(VAR_2));
}
