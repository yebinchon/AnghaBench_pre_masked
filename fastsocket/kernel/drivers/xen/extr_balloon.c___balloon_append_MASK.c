
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int lru; } ;
struct TYPE_2__ {int balloon_low; int balloon_high; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct page *VAR_2)
{

 if (FUNC_0(VAR_2)) {
  FUNC_2(&VAR_2->lru, &VAR_1);
  VAR_0.balloon_high++;
 } else {
  FUNC_1(&VAR_2->lru, &VAR_1);
  VAR_0.balloon_low++;
 }
}
