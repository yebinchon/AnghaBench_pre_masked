
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int userOid; int databaseOid; } ;
typedef TYPE_1__ MaintenanceDaemonDBData ;


 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 MaintenanceDaemonDBData *VAR_1 = (MaintenanceDaemonDBData *) VAR_0;
 FUNC_0("Citus maintenance daemon for database %u user %u",
      VAR_1->databaseOid, VAR_1->userOid);
}
