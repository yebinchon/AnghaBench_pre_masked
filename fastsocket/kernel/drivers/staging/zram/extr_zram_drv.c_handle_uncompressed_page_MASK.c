
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct zram {TYPE_1__* table; } ;
struct page {int dummy; } ;
struct bio_vec {int bv_offset; int bv_len; struct page* bv_page; } ;
struct TYPE_2__ {struct page* page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 unsigned char* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (unsigned char*,int ) ;
 int FUNC_3 (unsigned char*,unsigned char*,int ) ;

__attribute__((used)) static void FUNC_4(struct zram *VAR_2, struct bio_vec *VAR_3,
         u32 VAR_4, int VAR_5)
{
 struct page *VAR_6 = VAR_3->bv_page;
 unsigned char *VAR_7, *VAR_8;

 VAR_7 = FUNC_1(VAR_6, VAR_0);
 VAR_8 = FUNC_1(VAR_2->table[VAR_4].page, VAR_1);

 FUNC_3(VAR_7 + VAR_3->bv_offset, VAR_8 + VAR_5, VAR_3->bv_len);
 FUNC_2(VAR_8, VAR_1);
 FUNC_2(VAR_7, VAR_0);

 FUNC_0(VAR_6);
}
