
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct buffer_head {unsigned int b_size; struct buffer_head* b_this_page; } ;
struct TYPE_2__ {int host; } ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int ,int) ;
 struct buffer_head* FUNC_3 (struct page*) ;

__attribute__((used)) static void FUNC_4(struct page *VAR_0,
          unsigned long VAR_1)
{
 int VAR_2 = 0;
 struct buffer_head *VAR_3, *VAR_4;
 unsigned int VAR_5 = 0;

 VAR_3 = FUNC_3(VAR_0);
 VAR_4 = VAR_3;
 do {
  unsigned int VAR_6 = VAR_5 + VAR_4->b_size;

  if ((VAR_1 <= VAR_5) && (FUNC_0(VAR_4))) {
   VAR_2++;
   FUNC_1(VAR_4);
  }
  VAR_5 = VAR_6;
 } while ((VAR_4 = VAR_4->b_this_page) != VAR_3);
 FUNC_2(VAR_0->mapping->host, VAR_2);
}
