
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct nd6_prproxy_soltgt {scalar_t__ soltgt_cnt; int soltgt_q; } ;
struct nd6_prproxy_solsrc {int dummy; } ;


 struct nd6_prproxy_solsrc* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct nd6_prproxy_solsrc*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nd6_prproxy_solsrc*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct nd6_prproxy_soltgt *VAR_1, u_int32_t VAR_2)
{
 while (VAR_1->soltgt_cnt >= VAR_2) {
  struct nd6_prproxy_solsrc *VAR_3;

  FUNC_2(VAR_1->soltgt_cnt != 0);
  --VAR_1->soltgt_cnt;
  VAR_3 = FUNC_0(&VAR_1->soltgt_q);
  FUNC_2(VAR_3 != ((void*)0));
  FUNC_1(&VAR_1->soltgt_q, VAR_3, VAR_0);
  FUNC_3(VAR_3);
 }
}
