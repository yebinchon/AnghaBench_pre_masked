
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ah_algorithm_state {scalar_t__ foo; } ;
typedef int caddr_t ;
typedef int MD5_CTX ;


 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(struct ah_algorithm_state *VAR_0, caddr_t VAR_1, size_t VAR_2)
{
 if (!VAR_0)
  FUNC_1("ah_keyed_md5_loop: what?");

 FUNC_0((MD5_CTX *)VAR_0->foo, VAR_1, VAR_2);
}
