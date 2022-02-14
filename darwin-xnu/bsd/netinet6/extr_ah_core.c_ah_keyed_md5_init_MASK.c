
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int ;
struct secasvar {int key_auth; } ;
struct ah_algorithm_state {int * foo; struct secasvar* sav; } ;
typedef int buf ;
typedef int MD5_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(struct ah_algorithm_state *VAR_3, struct secasvar *VAR_4)
{
 size_t VAR_5;
 size_t VAR_6;
 u_int8_t VAR_7[32] __attribute__((aligned(4)));

 if (!VAR_3)
  FUNC_6("ah_keyed_md5_init: what?");

 VAR_3->sav = VAR_4;
 VAR_3->foo = (void *)FUNC_4(sizeof(MD5_CTX), VAR_2, VAR_1);
 if (VAR_3->foo == ((void*)0))
  return VAR_0;

 FUNC_0((MD5_CTX *)VAR_3->foo);
 if (VAR_3->sav) {
  FUNC_1((MD5_CTX *)VAR_3->foo,
   (u_int8_t *)FUNC_2(VAR_3->sav->key_auth),
   (u_int)FUNC_3(VAR_3->sav->key_auth));






  if (FUNC_3(VAR_3->sav->key_auth) < 56)
   VAR_5 = 64 - 8 - FUNC_3(VAR_3->sav->key_auth);
  else
   VAR_5 = 64 + 64 - 8 - FUNC_3(VAR_3->sav->key_auth);
  VAR_6 = FUNC_3(VAR_3->sav->key_auth);
  VAR_6 *= 8;

  VAR_7[0] = 0x80;
  FUNC_1((MD5_CTX *)VAR_3->foo, &VAR_7[0], 1);
  VAR_5--;

  FUNC_5(VAR_7, sizeof(VAR_7));
  while (sizeof(VAR_7) < VAR_5) {
   FUNC_1((MD5_CTX *)VAR_3->foo, &VAR_7[0], sizeof(VAR_7));
   VAR_5 -= sizeof(VAR_7);
  }
  if (VAR_5) {
   FUNC_1((MD5_CTX *)VAR_3->foo, &VAR_7[0], VAR_5);
  }

  VAR_7[0] = (VAR_6 >> 0) & 0xff;
  VAR_7[1] = (VAR_6 >> 8) & 0xff;
  VAR_7[2] = (VAR_6 >> 16) & 0xff;
  VAR_7[3] = (VAR_6 >> 24) & 0xff;
  FUNC_1((MD5_CTX *)VAR_3->foo, VAR_7, 8);
 }

 return 0;
}
