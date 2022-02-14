
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {char* data; } ;
typedef TYPE_1__* StringInfo ;
typedef int Oid ;


 int FUNC_0 (TYPE_1__*,char*,int ,int ) ;
 char* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (char*) ;

char *
FUNC_4(Oid VAR_0, uint32 VAR_1)
{
 StringInfo VAR_2 = FUNC_2();
 char *VAR_3 = FUNC_1(VAR_0);
 FUNC_0(VAR_2, "UPDATE pg_dist_partition "
         "SET colocationid = %d "
         "WHERE logicalrelid = %s::regclass",
      VAR_1, FUNC_3(VAR_3));

 return VAR_2->data;
}
