
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool {int pool_md; TYPE_1__* ti; } ;
struct TYPE_2__ {int table; } ;


 int FUNC_0 (char*,int ,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pool *VAR_0, const char *VAR_1)
{
 FUNC_2(VAR_0->ti->table);
 FUNC_0("%s: switching pool to %s mode",
        FUNC_1(VAR_0->pool_md), VAR_1);
}
