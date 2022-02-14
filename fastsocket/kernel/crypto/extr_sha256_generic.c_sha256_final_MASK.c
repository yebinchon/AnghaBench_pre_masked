
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct sha256_state {int count; int * state; } ;
typedef int bits ;
typedef int __be64 ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sha256_state*,int ,int) ;
 int FUNC_3 (struct shash_desc*,int const*,int) ;
 struct sha256_state* FUNC_4 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_5(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct sha256_state *VAR_2 = FUNC_4(VAR_0);
 __be32 *VAR_3 = (__be32 *)VAR_1;
 __be64 VAR_4;
 unsigned int VAR_5, VAR_6;
 int VAR_7;
 static const u8 VAR_8[64] = { 0x80, };


 VAR_4 = FUNC_1(VAR_2->count << 3);


 VAR_5 = VAR_2->count & 0x3f;
 VAR_6 = (VAR_5 < 56) ? (56 - VAR_5) : ((64+56) - VAR_5);
 FUNC_3(VAR_0, VAR_8, VAR_6);


 FUNC_3(VAR_0, (const u8 *)&VAR_4, sizeof(VAR_4));


 for (VAR_7 = 0; VAR_7 < 8; VAR_7++)
  VAR_3[VAR_7] = FUNC_0(VAR_2->state[VAR_7]);


 FUNC_2(VAR_2, 0, sizeof(*VAR_2));

 return 0;
}
