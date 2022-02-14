
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd6_prproxy_soltgt {int soltgt_q; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nd6_prproxy_soltgt*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct nd6_prproxy_soltgt* FUNC_2 (int ) ;
 struct nd6_prproxy_soltgt* FUNC_3 (int ) ;

__attribute__((used)) static struct nd6_prproxy_soltgt *
FUNC_4(int VAR_3)
{
 struct nd6_prproxy_soltgt *VAR_4;

 VAR_4 = (VAR_3 == VAR_0) ? FUNC_2(VAR_2) :
     FUNC_3(VAR_2);
 if (VAR_4 != ((void*)0)) {
  FUNC_1(VAR_4, VAR_1);
  FUNC_0(&VAR_4->soltgt_q);
 }
 return (VAR_4);
}
