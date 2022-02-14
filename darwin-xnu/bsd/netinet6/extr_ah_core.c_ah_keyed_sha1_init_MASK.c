
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int ;
struct secasvar {int key_auth; } ;
struct ah_algorithm_state {struct secasvar* sav; void* foo; } ;
typedef int buf ;
typedef int SHA1_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(struct ah_algorithm_state *VAR_3, struct secasvar *VAR_4)
{
 SHA1_CTX *VAR_5;
 size_t VAR_6;
 size_t VAR_7;
 u_int8_t VAR_8[32] __attribute__((aligned(4)));

 if (!VAR_3)
  FUNC_6("ah_keyed_sha1_init: what?");

 VAR_3->sav = VAR_4;
 VAR_3->foo = (void *)FUNC_4(sizeof(SHA1_CTX), VAR_2, VAR_1);
 if (!VAR_3->foo)
  return VAR_0;

 VAR_5 = (SHA1_CTX *)VAR_3->foo;
 FUNC_0(VAR_5);

 if (VAR_3->sav) {
  FUNC_1(VAR_5, (u_int8_t *)FUNC_2(VAR_3->sav->key_auth),
   (u_int)FUNC_3(VAR_3->sav->key_auth));




  if (FUNC_3(VAR_3->sav->key_auth) < 56)
   VAR_6 = 64 - 8 - FUNC_3(VAR_3->sav->key_auth);
  else
   VAR_6 = 64 + 64 - 8 - FUNC_3(VAR_3->sav->key_auth);
  VAR_7 = FUNC_3(VAR_3->sav->key_auth);
  VAR_7 *= 8;

  VAR_8[0] = 0x80;
  FUNC_1(VAR_5, &VAR_8[0], 1);
  VAR_6--;

  FUNC_5(VAR_8, sizeof(VAR_8));
  while (sizeof(VAR_8) < VAR_6) {
   FUNC_1(VAR_5, &VAR_8[0], sizeof(VAR_8));
   VAR_6 -= sizeof(VAR_8);
  }
  if (VAR_6) {
   FUNC_1(VAR_5, &VAR_8[0], VAR_6);
  }

  VAR_8[0] = (VAR_7 >> 0) & 0xff;
  VAR_8[1] = (VAR_7 >> 8) & 0xff;
  VAR_8[2] = (VAR_7 >> 16) & 0xff;
  VAR_8[3] = (VAR_7 >> 24) & 0xff;
  FUNC_1(VAR_5, VAR_8, 8);
 }

 return 0;
}
