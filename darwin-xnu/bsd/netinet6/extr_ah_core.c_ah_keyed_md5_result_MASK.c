
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
typedef int MD5_CTX ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,void*,size_t) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(struct ah_algorithm_state *VAR_1, caddr_t VAR_2, size_t VAR_3)
{
 u_char VAR_4[16] __attribute__((aligned(4)));

 if (!VAR_1)
  FUNC_6("ah_keyed_md5_result: what?");

 if (VAR_1->sav) {
  FUNC_2((MD5_CTX *)VAR_1->foo,
   (u_int8_t *)FUNC_3(VAR_1->sav->key_auth),
   (u_int)FUNC_4(VAR_1->sav->key_auth));
 }
 FUNC_1(&VAR_4[0], (MD5_CTX *)VAR_1->foo);
 FUNC_0(VAR_1->foo, VAR_0);
 FUNC_5(&VAR_4[0], (void *)VAR_2, sizeof(VAR_4) > VAR_3 ? VAR_3 : sizeof(VAR_4));
}
