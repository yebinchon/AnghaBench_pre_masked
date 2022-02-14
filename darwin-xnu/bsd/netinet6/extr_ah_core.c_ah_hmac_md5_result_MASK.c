
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ah_algorithm_state {scalar_t__ foo; } ;
typedef int digest ;
typedef scalar_t__ caddr_t ;
typedef int MD5_CTX ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_4 (int *,void*,size_t) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(struct ah_algorithm_state *VAR_1, caddr_t VAR_2, size_t VAR_3)
{
 u_char VAR_4[16] __attribute__((aligned(4)));
 u_char *VAR_5;
 u_char *VAR_6;
 MD5_CTX *VAR_7;

 if (!VAR_1 || !VAR_1->foo)
  FUNC_5("ah_hmac_md5_result: what?");

 VAR_5 = (u_char *)VAR_1->foo;
 VAR_6 = (u_char *)(VAR_5 + 64);
 VAR_7 = (MD5_CTX *)(void *)(VAR_6 + 64);

 FUNC_1(&VAR_4[0], VAR_7);

 FUNC_2(VAR_7);
 FUNC_3(VAR_7, VAR_6, 64);
 FUNC_3(VAR_7, &VAR_4[0], sizeof(VAR_4));
 FUNC_1(&VAR_4[0], VAR_7);

 FUNC_4(&VAR_4[0], (void *)VAR_2, sizeof(VAR_4) > VAR_3 ? VAR_3 : sizeof(VAR_4));

 FUNC_0(VAR_1->foo, VAR_0);
}
