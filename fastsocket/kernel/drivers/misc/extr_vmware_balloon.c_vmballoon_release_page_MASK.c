
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int free; } ;
struct vmballoon {int size; TYPE_1__ stats; } ;
struct page {int lru; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct vmballoon*,int ) ;

__attribute__((used)) static int FUNC_5(struct vmballoon *VAR_1, struct page *VAR_2)
{
 if (!FUNC_4(VAR_1, FUNC_3(VAR_2)))
  return -VAR_0;

 FUNC_2(&VAR_2->lru);


 FUNC_1(VAR_2);
 FUNC_0(VAR_1->stats.free);


 VAR_1->size--;

 return 0;
}
