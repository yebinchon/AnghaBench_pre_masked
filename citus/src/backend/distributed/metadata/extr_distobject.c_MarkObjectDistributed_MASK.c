
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int objectSubId; int objectId; int classId; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*) ;

void
FUNC_5(const ObjectAddress *VAR_3)
{
 int VAR_4 = 3;
 Oid VAR_5[3] = {
  VAR_2,
  VAR_2,
  VAR_1
 };
 Datum VAR_6[3] = {
  FUNC_2(VAR_3->classId),
  FUNC_2(VAR_3->objectId),
  FUNC_1(VAR_3->objectSubId)
 };
 int VAR_7 = 0;

 char *VAR_8 = "INSERT INTO citus.pg_dist_object (classid, objid, objsubid) "
      "VALUES ($1, $2, $3) ON CONFLICT DO NOTHING";

 VAR_7 = FUNC_0(VAR_8, VAR_4, VAR_5,
            VAR_6);
 if (VAR_7 < 0)
 {
  FUNC_3(VAR_0, (FUNC_4("failed to insert object into citus.pg_dist_object")));
 }
}
