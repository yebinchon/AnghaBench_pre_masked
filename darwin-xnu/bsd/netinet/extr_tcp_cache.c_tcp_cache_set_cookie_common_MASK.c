
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
typedef int u_char ;
struct tcp_cache_key_src {int dummy; } ;
struct tcp_cache_head {int dummy; } ;
struct tcp_cache {scalar_t__ tc_tfo_cookie_len; int tc_tfo_cookie; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,scalar_t__) ;
 int FUNC_1 (struct tcp_cache_head*) ;
 struct tcp_cache* FUNC_2 (struct tcp_cache_key_src*,int,struct tcp_cache_head**) ;

__attribute__((used)) static void FUNC_3(struct tcp_cache_key_src *VAR_1, u_char *VAR_2, u_int8_t VAR_3)
{
 struct tcp_cache_head *VAR_4;
 struct tcp_cache *VAR_5;


 VAR_5 = FUNC_2(VAR_1, 1, &VAR_4);
 if (VAR_5 == ((void*)0))
  return;

 VAR_5->tc_tfo_cookie_len = VAR_3 > VAR_0 ?
  VAR_0 : VAR_3;
 FUNC_0(VAR_5->tc_tfo_cookie, VAR_2, VAR_5->tc_tfo_cookie_len);

 FUNC_1(VAR_4);
}
