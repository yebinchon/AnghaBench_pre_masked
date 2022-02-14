
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct shash_desc {int dummy; } ;
struct rmd160_ctx {int byte_count; int * state; } ;
typedef int bits ;
typedef int __le64 ;
typedef int __le32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rmd160_ctx*,int ,int) ;
 int FUNC_3 (struct shash_desc*,int const*,int) ;
 struct rmd160_ctx* FUNC_4 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_5(struct shash_desc *VAR_0, u8 *VAR_1)
{
 struct rmd160_ctx *VAR_2 = FUNC_4(VAR_0);
 u32 VAR_3, VAR_4, VAR_5;
 __le64 VAR_6;
 __le32 *VAR_7 = (__le32 *)VAR_1;
 static const u8 VAR_8[64] = { 0x80, };

 VAR_6 = FUNC_1(VAR_2->byte_count << 3);


 VAR_4 = VAR_2->byte_count & 0x3f;
 VAR_5 = (VAR_4 < 56) ? (56 - VAR_4) : ((64+56) - VAR_4);
 FUNC_3(VAR_0, VAR_8, VAR_5);


 FUNC_3(VAR_0, (const u8 *)&VAR_6, sizeof(VAR_6));


 for (VAR_3 = 0; VAR_3 < 5; VAR_3++)
  VAR_7[VAR_3] = FUNC_0(&VAR_2->state[VAR_3]);


 FUNC_2(VAR_2, 0, sizeof(*VAR_2));

 return 0;
}
