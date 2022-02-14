
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head {TYPE_2__* dev; TYPE_1__* raid_conf; } ;
struct page {int dummy; } ;
struct TYPE_4__ {struct page* page; } ;
struct TYPE_3__ {int pool_size; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct stripe_head *VAR_1)
{
 int VAR_2;
 int VAR_3 = VAR_1->raid_conf->pool_size;

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  struct page *VAR_4;

  if (!(VAR_4 = FUNC_0(VAR_0))) {
   return 1;
  }
  VAR_1->dev[VAR_2].page = VAR_4;
 }
 return 0;
}
