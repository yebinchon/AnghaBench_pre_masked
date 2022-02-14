
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct gfs2_sbd {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; scalar_t__ b_size; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 struct gfs2_sbd* FUNC_2 (int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct gfs2_sbd*,struct buffer_head*) ;
 struct buffer_head* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*,int ) ;

__attribute__((used)) static void FUNC_8(struct page *VAR_0, unsigned long VAR_1)
{
 struct gfs2_sbd *VAR_2 = FUNC_2(VAR_0->mapping->host);
 struct buffer_head *VAR_3, *VAR_4;
 unsigned long VAR_5 = 0;

 FUNC_0(!FUNC_3(VAR_0));
 if (VAR_1 == 0)
  FUNC_1(VAR_0);
 if (!FUNC_6(VAR_0))
  goto out;

 VAR_3 = VAR_4 = FUNC_5(VAR_0);
 do {
  if (VAR_1 <= VAR_5)
   FUNC_4(VAR_2, VAR_3);
  VAR_5 += VAR_3->b_size;
  VAR_3 = VAR_3->b_this_page;
 } while (VAR_3 != VAR_4);
out:
 if (VAR_1 == 0)
  FUNC_7(VAR_0, 0);
}
