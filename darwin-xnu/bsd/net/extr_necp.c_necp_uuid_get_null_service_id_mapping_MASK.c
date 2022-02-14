
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct necp_uuid_id_mapping {int id; int uuid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static struct necp_uuid_id_mapping *
FUNC_1(void)
{
 static struct necp_uuid_id_mapping VAR_1;
 FUNC_0(VAR_1.uuid);
 VAR_1.id = VAR_0;

 return (&VAR_1);
}
