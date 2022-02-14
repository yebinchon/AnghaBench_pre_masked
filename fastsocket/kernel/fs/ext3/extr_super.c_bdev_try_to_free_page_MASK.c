
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct page {int dummy; } ;
typedef int journal_t ;
typedef int gfp_t ;
struct TYPE_2__ {int * s_journal; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,struct page*,int) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_1, struct page *VAR_2,
     gfp_t VAR_3)
{
 journal_t *VAR_4 = FUNC_0(VAR_1)->s_journal;

 FUNC_2(FUNC_1(VAR_2));
 if (!FUNC_4(VAR_2))
  return 0;
 if (VAR_4)
  return FUNC_3(VAR_4, VAR_2,
         VAR_3 & ~VAR_0);
 return FUNC_5(VAR_2);
}
