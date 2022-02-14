
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_4__ {char* data; } ;
typedef TYPE_1__* StringInfo ;


 int FUNC_0 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static char *
FUNC_2(int32 VAR_0)
{
 StringInfo VAR_1 = FUNC_1();

 FUNC_0(VAR_1, "UPDATE pg_dist_local_group SET groupid = %d",
      VAR_0);

 return VAR_1->data;
}
