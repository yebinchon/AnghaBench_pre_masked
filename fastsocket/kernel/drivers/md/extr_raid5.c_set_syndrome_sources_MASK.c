
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int disks; TYPE_1__* dev; scalar_t__ ddf_layout; } ;
struct page {int dummy; } ;
struct TYPE_2__ {struct page* page; } ;


 int FUNC_0 (struct stripe_head*) ;
 int FUNC_1 (int,struct stripe_head*,int*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct page **VAR_0, struct stripe_head *VAR_1)
{
 int VAR_2 = VAR_1->disks;
 int VAR_3 = VAR_1->ddf_layout ? VAR_2 : (VAR_2 - 2);
 int VAR_4 = FUNC_0(VAR_1);
 int VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  VAR_0[VAR_6] = ((void*)0);

 VAR_5 = 0;
 VAR_6 = VAR_4;
 do {
  int VAR_7 = FUNC_1(VAR_6, VAR_1, &VAR_5, VAR_3);

  VAR_0[VAR_7] = VAR_1->dev[VAR_6].page;
  VAR_6 = FUNC_2(VAR_6, VAR_2);
 } while (VAR_6 != VAR_4);

 return VAR_3;
}
