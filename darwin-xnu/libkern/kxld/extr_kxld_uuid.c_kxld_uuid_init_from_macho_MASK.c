
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uuid_command {int has_uuid; int uuid; } ;
typedef struct uuid_command KXLDuuid ;


 int VAR_0 ;
 int FUNC_0 (struct uuid_command*) ;
 int FUNC_1 (int ,int ,int) ;

void
FUNC_2(KXLDuuid *VAR_1, struct uuid_command *VAR_2)
{
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);

    FUNC_1(VAR_1->uuid, VAR_2->uuid, sizeof(VAR_1->uuid));
    VAR_1->has_uuid = VAR_0;
}
