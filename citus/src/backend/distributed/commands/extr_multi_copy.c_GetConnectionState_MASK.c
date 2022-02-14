
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int socket; int bufferedPlacementList; int * activePlacementState; TYPE_1__* connection; } ;
struct TYPE_5__ {int pgConn; } ;
typedef TYPE_1__ MultiConnection ;
typedef int HTAB ;
typedef TYPE_2__ CopyConnectionState ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int*,int ,int*) ;

__attribute__((used)) static CopyConnectionState *
FUNC_4(HTAB *VAR_1, MultiConnection *VAR_2)
{
 CopyConnectionState *VAR_3 = ((void*)0);
 bool VAR_4 = 0;

 int VAR_5 = FUNC_1(VAR_2->pgConn);
 FUNC_0(VAR_5 != -1);

 VAR_3 = (CopyConnectionState *) FUNC_3(VAR_1, &VAR_5,
                VAR_0, &VAR_4);
 if (!VAR_4)
 {
  VAR_3->socket = VAR_5;
  VAR_3->connection = VAR_2;
  VAR_3->activePlacementState = ((void*)0);
  FUNC_2(&VAR_3->bufferedPlacementList);
 }

 return VAR_3;
}
