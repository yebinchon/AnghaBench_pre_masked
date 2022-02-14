
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int dummy; } ;
struct sha512_state {int* count; int* state; } ;
typedef int bits ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sha512_state*,int ,int) ;
 int FUNC_2 (struct shash_desc*,int const*,int) ;
 struct sha512_state* FUNC_3 (struct shash_desc*) ;

__attribute__((used)) static int
FUNC_4(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct sha512_state *VAR_2 = FUNC_3(VAR_0);
        static u8 VAR_3[128] = { 0x80, };
 __be64 *VAR_4 = (__be64 *)VAR_1;
 __be64 VAR_5[2];
 unsigned int VAR_6, VAR_7;
 int VAR_8;


 VAR_5[1] = FUNC_0(VAR_2->count[0] << 3);
 VAR_5[0] = FUNC_0(VAR_2->count[1] << 3 | VAR_2->count[0] >> 61);


 VAR_6 = VAR_2->count[0] & 0x7f;
 VAR_7 = (VAR_6 < 112) ? (112 - VAR_6) : ((128+112) - VAR_6);
 FUNC_2(VAR_0, VAR_3, VAR_7);


 FUNC_2(VAR_0, (const u8 *)VAR_5, sizeof(VAR_5));


 for (VAR_8 = 0; VAR_8 < 8; VAR_8++)
  VAR_4[VAR_8] = FUNC_0(VAR_2->state[VAR_8]);


 FUNC_1(VAR_2, 0, sizeof(struct sha512_state));

 return 0;
}
