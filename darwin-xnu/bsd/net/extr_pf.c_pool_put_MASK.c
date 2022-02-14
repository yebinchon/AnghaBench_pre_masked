
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {scalar_t__ pool_count; int pool_zone; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,void*) ;

void
FUNC_3(struct pool *VAR_2, void *VAR_3)
{
 FUNC_0(VAR_1, VAR_0);

 FUNC_2(VAR_2->pool_zone, VAR_3);
 FUNC_1(VAR_2->pool_count != 0);
 VAR_2->pool_count--;
}
