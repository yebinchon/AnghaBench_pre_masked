
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
typedef int journal_t ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (struct page*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,struct page*,unsigned long) ;
 int FUNC_3 (struct page*,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct page *VAR_0, unsigned long VAR_1)
{
 journal_t *VAR_2 = FUNC_1(VAR_0->mapping->host);

 FUNC_3(VAR_0, VAR_1);




 if (VAR_1 == 0)
  FUNC_0(VAR_0);

 FUNC_2(VAR_2, VAR_0, VAR_1);
}
