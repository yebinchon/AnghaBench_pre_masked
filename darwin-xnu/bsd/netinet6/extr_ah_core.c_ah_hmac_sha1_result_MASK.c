
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ah_algorithm_state {scalar_t__ foo; } ;
typedef int digest ;
typedef int * caddr_t ;
typedef int SHA1_CTX ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_1 ;
 int FUNC_4 (int *,void*,size_t) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(struct ah_algorithm_state *VAR_2, caddr_t VAR_3, size_t VAR_4)
{
 u_char VAR_5[VAR_1] __attribute__((aligned(4)));
 u_char *VAR_6;
 u_char *VAR_7;
 SHA1_CTX *VAR_8;

 if (!VAR_2 || !VAR_2->foo)
  FUNC_5("ah_hmac_sha1_result: what?");

 VAR_6 = (u_char *)VAR_2->foo;
 VAR_7 = (u_char *)(VAR_6 + 64);
 VAR_8 = (SHA1_CTX *)(void *)(VAR_7 + 64);

 FUNC_1((caddr_t)&VAR_5[0], VAR_8);

 FUNC_2(VAR_8);
 FUNC_3(VAR_8, VAR_7, 64);
 FUNC_3(VAR_8, (caddr_t)&VAR_5[0], sizeof(VAR_5));
 FUNC_1((caddr_t)&VAR_5[0], VAR_8);

 FUNC_4(&VAR_5[0], (void *)VAR_3, sizeof(VAR_5) > VAR_4 ? VAR_4 : sizeof(VAR_5));

 FUNC_0(VAR_2->foo, VAR_0);
}
