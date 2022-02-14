
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_14__ {int binary; } ;
struct TYPE_13__ {TYPE_1__* shardState; TYPE_2__* connectionState; } ;
struct TYPE_12__ {int data; } ;
struct TYPE_11__ {int * connection; } ;
struct TYPE_10__ {int shardId; } ;
typedef TYPE_3__* StringInfo ;
typedef int PGresult ;
typedef int MultiConnection ;
typedef int CopyStmt ;
typedef TYPE_4__ CopyPlacementState ;
typedef TYPE_5__* CopyOutState ;


 TYPE_3__* FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (TYPE_5__*,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(CopyPlacementState *VAR_2,
          CopyStmt *VAR_3, CopyOutState VAR_4)
{
 StringInfo VAR_5 = ((void*)0);
 PGresult *VAR_6 = ((void*)0);
 MultiConnection *VAR_7 = VAR_2->connectionState->connection;
 uint64 VAR_8 = VAR_2->shardState->shardId;
 bool VAR_9 = 1;
 bool VAR_10 = VAR_4->binary;

 VAR_5 = FUNC_0(VAR_3, VAR_8, VAR_10);

 if (!FUNC_7(VAR_7, VAR_5->data))
 {
  FUNC_4(VAR_7, VAR_0);
 }

 VAR_6 = FUNC_1(VAR_7, VAR_9);
 if (FUNC_3(VAR_6) != VAR_1)
 {
  FUNC_5(VAR_7, VAR_6, VAR_0);
 }

 FUNC_2(VAR_6);

 if (VAR_10)
 {
  FUNC_6(VAR_4, VAR_8, FUNC_8(VAR_7));
 }
}
