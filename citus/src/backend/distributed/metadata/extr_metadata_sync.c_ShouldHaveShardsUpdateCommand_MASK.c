
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {char* data; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (TYPE_1__*,char*,char*,int ) ;
 TYPE_1__* FUNC_1 () ;

char *
FUNC_2(uint32 VAR_0, bool VAR_1)
{
 StringInfo VAR_2 = FUNC_1();
 char *VAR_3 = VAR_1 ? "TRUE" : "FALSE";

 FUNC_0(VAR_2,
      "UPDATE pg_catalog.pg_dist_node SET shouldhaveshards = %s "
      "WHERE nodeid = %u", VAR_3, VAR_0);

 return VAR_2->data;
}
