
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
typedef int u_char ;
struct tcp_cache_key_src {int dummy; } ;
struct tcp_cache_head {int dummy; } ;
struct tcp_cache {scalar_t__ tc_tfo_cookie_len; int tc_tfo_cookie; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (struct tcp_cache_head*) ;
 struct tcp_cache* FUNC_3 (struct tcp_cache_key_src*,int,struct tcp_cache_head**) ;

__attribute__((used)) static int FUNC_4(struct tcp_cache_key_src *VAR_0, u_char *VAR_1, u_int8_t *VAR_2)
{
 struct tcp_cache_head *VAR_3;
 struct tcp_cache *VAR_4;


 VAR_4 = FUNC_3(VAR_0, 1, &VAR_3);
 if (VAR_4 == ((void*)0)) {
  return (0);
 }

 if (VAR_4->tc_tfo_cookie_len == 0) {
  FUNC_2(VAR_3);
  return (0);
 }





 FUNC_0(VAR_4->tc_tfo_cookie_len <= *VAR_2);

 FUNC_1(VAR_1, VAR_4->tc_tfo_cookie, VAR_4->tc_tfo_cookie_len);
 *VAR_2 = VAR_4->tc_tfo_cookie_len;

 FUNC_2(VAR_3);

 return (1);
}
