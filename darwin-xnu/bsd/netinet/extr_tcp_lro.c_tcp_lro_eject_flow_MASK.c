
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct lro_flow {int dummy; } ;
struct TYPE_3__ {size_t lr_hash_map; struct mbuf* lr_mhead; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static struct mbuf *
FUNC_2(int VAR_3)
{
 struct mbuf *VAR_4 = ((void*)0);

 VAR_4 = VAR_1[VAR_3].lr_mhead;
 FUNC_0(VAR_2[VAR_1[VAR_3].lr_hash_map] == VAR_3);
 VAR_2[VAR_1[VAR_3].lr_hash_map] = VAR_0;
 FUNC_1(&VAR_1[VAR_3], sizeof(struct lro_flow));

 return VAR_4;
}
