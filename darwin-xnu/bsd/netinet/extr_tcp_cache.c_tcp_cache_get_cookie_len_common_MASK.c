
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_cache_key_src {int dummy; } ;
struct tcp_cache_head {int dummy; } ;
struct tcp_cache {unsigned int tc_tfo_cookie_len; } ;


 int FUNC_0 (struct tcp_cache_head*) ;
 struct tcp_cache* FUNC_1 (struct tcp_cache_key_src*,int,struct tcp_cache_head**) ;

__attribute__((used)) static unsigned int FUNC_2(struct tcp_cache_key_src *VAR_0)
{
 struct tcp_cache_head *VAR_1;
 struct tcp_cache *VAR_2;
 unsigned int VAR_3;


 VAR_2 = FUNC_1(VAR_0, 1, &VAR_1);
 if (VAR_2 == ((void*)0))
  return (0);

 VAR_3 = VAR_2->tc_tfo_cookie_len;

 FUNC_0(VAR_1);

 return VAR_3;
}
