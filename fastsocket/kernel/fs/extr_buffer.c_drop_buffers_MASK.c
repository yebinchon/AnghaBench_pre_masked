
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct buffer_head {scalar_t__ b_assoc_map; struct buffer_head* b_this_page; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 struct buffer_head* FUNC_4 (struct page*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int
FUNC_6(struct page *VAR_1, struct buffer_head **VAR_2)
{
 struct buffer_head *VAR_3 = FUNC_4(VAR_1);
 struct buffer_head *VAR_4;

 VAR_4 = VAR_3;
 do {
  if (FUNC_3(VAR_4) && VAR_1->mapping)
   FUNC_5(VAR_0, &VAR_1->mapping->flags);
  if (FUNC_2(VAR_4))
   goto failed;
  VAR_4 = VAR_4->b_this_page;
 } while (VAR_4 != VAR_3);

 do {
  struct buffer_head *VAR_5 = VAR_4->b_this_page;

  if (VAR_4->b_assoc_map)
   FUNC_1(VAR_4);
  VAR_4 = VAR_5;
 } while (VAR_4 != VAR_3);
 *VAR_2 = VAR_3;
 FUNC_0(VAR_1);
 return 1;
failed:
 return 0;
}
