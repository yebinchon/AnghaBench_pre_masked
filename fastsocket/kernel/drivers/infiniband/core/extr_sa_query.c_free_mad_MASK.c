
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_sa_query {TYPE_1__* sm_ah; int mad_buf; } ;
struct TYPE_2__ {int ref; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct ib_sa_query *VAR_1)
{
 FUNC_0(VAR_1->mad_buf);
 FUNC_1(&VAR_1->sm_ah->ref, VAR_0);
}
