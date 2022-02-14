
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct shash_desc {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct shash_desc*,int const*,unsigned int) ;
 struct shash_desc* FUNC_1 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_2(struct shash_desc *VAR_1,
         const u8 *VAR_2, unsigned int VAR_3)
{
 struct shash_desc *VAR_4 = FUNC_1(VAR_1);

 VAR_4->flags = VAR_1->flags & VAR_0;

 return FUNC_0(VAR_4, VAR_2, VAR_3);
}
