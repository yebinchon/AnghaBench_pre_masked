
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct secasvar {int key_auth; } ;
struct ah_algorithm_state {struct secasvar* sav; void* foo; } ;
typedef int SHA1_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int) ;
 int VAR_3 ;
 int* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int*,int*,size_t) ;
 int FUNC_7 (int*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(struct ah_algorithm_state *VAR_4, struct secasvar *VAR_5)
{
 u_char *VAR_6;
 u_char *VAR_7;
 SHA1_CTX *VAR_8;
 u_char VAR_9[VAR_3] __attribute__((aligned(4)));
 u_char *VAR_10;
 size_t VAR_11;
 size_t VAR_12;

 if (!VAR_4)
  FUNC_8("ah_hmac_sha1_init: what?");

 VAR_4->sav = VAR_5;
 VAR_4->foo = (void *)FUNC_5(64 + 64 + sizeof(SHA1_CTX),
   VAR_2, VAR_1);
 if (!VAR_4->foo)
  return VAR_0;

 VAR_6 = (u_char *)VAR_4->foo;
 VAR_7 = (u_char *)(VAR_6 + 64);
 VAR_8 = (SHA1_CTX *)(void *)(VAR_7 + 64);


 if (64 < FUNC_4(VAR_4->sav->key_auth)) {
  FUNC_1(VAR_8);
  FUNC_2(VAR_8, FUNC_3(VAR_4->sav->key_auth),
   FUNC_4(VAR_4->sav->key_auth));
  FUNC_0(&VAR_9[0], VAR_8);
  VAR_10 = &VAR_9[0];
  VAR_11 = VAR_3;
 } else {
  VAR_10 = (u_char *) FUNC_3(VAR_4->sav->key_auth);
  VAR_11 = FUNC_4(VAR_4->sav->key_auth);
 }

 FUNC_7(VAR_6, 64);
 FUNC_7(VAR_7, 64);
 FUNC_6(VAR_10, VAR_6, VAR_11);
 FUNC_6(VAR_10, VAR_7, VAR_11);
 for (VAR_12 = 0; VAR_12 < 64; VAR_12++) {
  VAR_6[VAR_12] ^= 0x36;
  VAR_7[VAR_12] ^= 0x5c;
 }

 FUNC_1(VAR_8);
 FUNC_2(VAR_8, VAR_6, 64);

 return 0;
}
