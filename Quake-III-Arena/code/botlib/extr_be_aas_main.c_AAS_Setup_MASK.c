
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int aas_entity_t ;
struct TYPE_2__ {int maxclients; int maxentities; scalar_t__ numframes; int * entities; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

int FUNC_5(void)
{
 VAR_1.maxclients = (int) FUNC_4("maxclients", "128");
 VAR_1.maxentities = (int) FUNC_4("maxentities", "1024");

 VAR_2 = FUNC_3("saveroutingcache", "0");

 if (VAR_1.entities) FUNC_1(VAR_1.entities);
 VAR_1.entities = (aas_entity_t *) FUNC_2(VAR_1.maxentities * sizeof(aas_entity_t));

 FUNC_0();



 VAR_1.numframes = 0;
 return VAR_0;
}
