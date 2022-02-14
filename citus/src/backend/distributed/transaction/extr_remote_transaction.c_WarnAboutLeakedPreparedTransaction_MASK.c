
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int preparedName; } ;
struct TYPE_9__ {int port; int hostname; TYPE_2__ remoteTransaction; } ;
struct TYPE_7__ {int data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ RemoteTransaction ;
typedef TYPE_3__ MultiConnection ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(MultiConnection *VAR_1, bool VAR_2)
{
 StringInfoData VAR_3;
 RemoteTransaction *VAR_4 = &VAR_1->remoteTransaction;

 FUNC_4(&VAR_3);

 if (VAR_2)
 {
  FUNC_0(&VAR_3, "COMMIT PREPARED %s",
       FUNC_5(VAR_4->preparedName));
 }
 else
 {
  FUNC_0(&VAR_3, "ROLLBACK PREPARED %s",
       FUNC_5(VAR_4->preparedName));
 }


 FUNC_1(VAR_0, (FUNC_3("failed to roll back prepared transaction '%s'",
        VAR_4->preparedName),
       FUNC_2("Run \"%s\" on %s:%u",
         VAR_3.data, VAR_1->hostname, VAR_1->port)));
}
