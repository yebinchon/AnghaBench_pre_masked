
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ah_algorithm_state {scalar_t__ foo; } ;
typedef scalar_t__ caddr_t ;
typedef int MD5_CTX ;


 int FUNC_0 (int *,scalar_t__,size_t) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct ah_algorithm_state *VAR_0, caddr_t VAR_1, size_t VAR_2)
{
 MD5_CTX *VAR_3;

 if (!VAR_0 || !VAR_0->foo)
  FUNC_1("ah_hmac_md5_loop: what?");
 VAR_3 = (MD5_CTX *)(void *)(((caddr_t)VAR_0->foo) + 128);
 FUNC_0(VAR_3, VAR_1, VAR_2);
}
