
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ah_algorithm_state {scalar_t__ foo; } ;
typedef scalar_t__ caddr_t ;
typedef int SHA1_CTX ;


 int FUNC_0 (int *,scalar_t__,size_t) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct ah_algorithm_state *VAR_0, caddr_t VAR_1, size_t VAR_2)
{
 SHA1_CTX *VAR_3;

 if (!VAR_0 || !VAR_0->foo)
  FUNC_1("ah_keyed_sha1_loop: what?");
 VAR_3 = (SHA1_CTX *)VAR_0->foo;

 FUNC_0(VAR_3, (caddr_t)VAR_1, (size_t)VAR_2);
}
