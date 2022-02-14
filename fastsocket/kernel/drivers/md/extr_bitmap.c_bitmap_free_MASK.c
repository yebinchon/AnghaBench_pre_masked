
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long pages; struct bitmap_page* bp; } ;
struct bitmap_page {struct bitmap_page* map; int hijacked; TYPE_1__ counts; int storage; int pending_writes; int write_wait; } ;
struct bitmap {struct bitmap* map; int hijacked; TYPE_1__ counts; int storage; int pending_writes; int write_wait; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bitmap_page*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct bitmap *VAR_0)
{
 unsigned long VAR_1, VAR_2;
 struct bitmap_page *VAR_3;

 if (!VAR_0)
  return;


 FUNC_3(VAR_0->write_wait,
     FUNC_0(&VAR_0->pending_writes) == 0);


 FUNC_1(&VAR_0->storage);

 VAR_3 = VAR_0->counts.bp;
 VAR_2 = VAR_0->counts.pages;



 if (VAR_3)
  for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
   if (VAR_3[VAR_1].map && !VAR_3[VAR_1].hijacked)
    FUNC_2(VAR_3[VAR_1].map);
 FUNC_2(VAR_3);
 FUNC_2(VAR_0);
}
