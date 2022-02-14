
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd6_prproxy_soltgt {int soltgt_key; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static __inline int
FUNC_1(const struct nd6_prproxy_soltgt *VAR_0,
    const struct nd6_prproxy_soltgt *VAR_1)
{
 return (FUNC_0(&VAR_0->soltgt_key, &VAR_1->soltgt_key, sizeof (VAR_0->soltgt_key)));
}
