
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct shash_desc {int dummy; } ;
struct sha1_state {int count; int * state; } ;
typedef int bits ;
typedef int __be64 ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sha1_state*,int ,int) ;
 int FUNC_3 (struct shash_desc*,int const*,int) ;
 struct sha1_state* FUNC_4 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_5(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct sha1_state *VAR_2 = FUNC_4(VAR_0);
 __be32 *VAR_3 = (__be32 *)VAR_1;
 u32 VAR_4, VAR_5, VAR_6;
 __be64 VAR_7;
 static const u8 VAR_8[64] = { 0x80, };

 VAR_7 = FUNC_1(VAR_2->count << 3);


 VAR_5 = VAR_2->count & 0x3f;
 VAR_6 = (VAR_5 < 56) ? (56 - VAR_5) : ((64+56) - VAR_5);
 FUNC_3(VAR_0, VAR_8, VAR_6);


 FUNC_3(VAR_0, (const u8 *)&VAR_7, sizeof(VAR_7));


 for (VAR_4 = 0; VAR_4 < 5; VAR_4++)
  VAR_3[VAR_4] = FUNC_0(VAR_2->state[VAR_4]);


 FUNC_2(VAR_2, 0, sizeof *VAR_2);

 return 0;
}
