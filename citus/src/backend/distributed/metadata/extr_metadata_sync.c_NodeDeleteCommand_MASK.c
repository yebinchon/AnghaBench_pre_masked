
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {char* data; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_1 () ;

char *
FUNC_2(uint32 VAR_0)
{
 StringInfo VAR_1 = FUNC_1();

 FUNC_0(VAR_1,
      "DELETE FROM pg_dist_node "
      "WHERE nodeid = %u", VAR_0);

 return VAR_1->data;
}
