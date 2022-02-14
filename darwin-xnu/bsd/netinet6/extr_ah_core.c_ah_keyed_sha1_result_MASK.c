
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int ;
typedef int u_char ;
struct ah_algorithm_state {scalar_t__ foo; TYPE_1__* sav; } ;
typedef int digest ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int key_auth; } ;
typedef int SHA1_CTX ;


 int FUNC_0 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,void*,size_t) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(struct ah_algorithm_state *VAR_2, caddr_t VAR_3, size_t VAR_4)
{
 u_char VAR_5[VAR_1] __attribute__((aligned(4)));
 SHA1_CTX *VAR_6;

 if (!VAR_2 || !VAR_2->foo)
  FUNC_6("ah_keyed_sha1_result: what?");
 VAR_6 = (SHA1_CTX *)VAR_2->foo;

 if (VAR_2->sav) {
  FUNC_2(VAR_6, (u_int8_t *)FUNC_3(VAR_2->sav->key_auth),
   (u_int)FUNC_4(VAR_2->sav->key_auth));
 }
 FUNC_1((caddr_t)&VAR_5[0], VAR_6);
 FUNC_5(&VAR_5[0], (void *)VAR_3, sizeof(VAR_5) > VAR_4 ? VAR_4 : sizeof(VAR_5));

 FUNC_0(VAR_2->foo, VAR_0);
}
