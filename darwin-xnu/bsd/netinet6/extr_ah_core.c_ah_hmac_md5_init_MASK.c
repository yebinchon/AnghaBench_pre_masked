
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct secasvar {int key_auth; } ;
struct ah_algorithm_state {struct secasvar* sav; void* foo; } ;
typedef int MD5_CTX ;


 int VAR_0 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int*,int*,size_t) ;
 int FUNC_7 (int*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int
FUNC_9(struct ah_algorithm_state *VAR_3, struct secasvar *VAR_4)
{
 u_char *VAR_5;
 u_char *VAR_6;
 u_char VAR_7[16] __attribute__((aligned(4)));
 u_char *VAR_8;
 size_t VAR_9;
 size_t VAR_10;
 MD5_CTX *VAR_11;

 if (!VAR_3)
  FUNC_8("ah_hmac_md5_init: what?");

 VAR_3->sav = VAR_4;
 VAR_3->foo = (void *)FUNC_5(64 + 64 + sizeof(MD5_CTX), VAR_2, VAR_1);
 if (!VAR_3->foo)
  return VAR_0;

 VAR_5 = (u_char *)VAR_3->foo;
 VAR_6 = (u_char *)(VAR_5 + 64);
 VAR_11 = (MD5_CTX *)(void *)(VAR_6 + 64);


 if (64 < FUNC_4(VAR_3->sav->key_auth)) {
  FUNC_1(VAR_11);
  FUNC_2(VAR_11, FUNC_3(VAR_3->sav->key_auth),
   FUNC_4(VAR_3->sav->key_auth));
  FUNC_0(&VAR_7[0], VAR_11);
  VAR_8 = &VAR_7[0];
  VAR_9 = 16;
 } else {
  VAR_8 = (u_char *) FUNC_3(VAR_3->sav->key_auth);
  VAR_9 = FUNC_4(VAR_3->sav->key_auth);
 }

 FUNC_7(VAR_5, 64);
 FUNC_7(VAR_6, 64);
 FUNC_6(VAR_8, VAR_5, VAR_9);
 FUNC_6(VAR_8, VAR_6, VAR_9);
 for (VAR_10 = 0; VAR_10 < 64; VAR_10++) {
  VAR_5[VAR_10] ^= 0x36;
  VAR_6[VAR_10] ^= 0x5c;
 }

 FUNC_1(VAR_11);
 FUNC_2(VAR_11, VAR_5, 64);

 return 0;
}
