
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct buffer_head {unsigned long b_state; struct buffer_head* b_this_page; } ;
struct TYPE_2__ {int private_lock; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 struct buffer_head* FUNC_2 (struct page*,unsigned long,int) ;
 int FUNC_3 (struct page*,struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct page *VAR_0,
   unsigned long VAR_1, unsigned long VAR_2)
{
 struct buffer_head *VAR_3, *VAR_4, *VAR_5;

 VAR_4 = FUNC_2(VAR_0, VAR_1, 1);
 VAR_3 = VAR_4;
 do {
  VAR_3->b_state |= VAR_2;
  VAR_5 = VAR_3;
  VAR_3 = VAR_3->b_this_page;
 } while (VAR_3);
 VAR_5->b_this_page = VAR_4;

 FUNC_6(&VAR_0->mapping->private_lock);
 if (FUNC_1(VAR_0) || FUNC_0(VAR_0)) {
  VAR_3 = VAR_4;
  do {
   if (FUNC_0(VAR_0))
    FUNC_4(VAR_3);
   if (FUNC_1(VAR_0))
    FUNC_5(VAR_3);
   VAR_3 = VAR_3->b_this_page;
  } while (VAR_3 != VAR_4);
 }
 FUNC_3(VAR_0, VAR_4);
 FUNC_7(&VAR_0->mapping->private_lock);
}
