
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct buffer_head {unsigned int b_size; struct buffer_head* b_this_page; } ;


 scalar_t__ FUNC_0 (struct gfs2_inode*) ;
 int FUNC_1 (int ,struct buffer_head*) ;
 struct buffer_head* FUNC_2 (struct page*) ;
 int FUNC_3 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_4(struct gfs2_inode *VAR_0, struct page *VAR_1,
       unsigned int VAR_2, unsigned int VAR_3)
{
 struct buffer_head *VAR_4 = FUNC_2(VAR_1);
 unsigned int VAR_5 = VAR_4->b_size;
 struct buffer_head *VAR_6;
 unsigned int VAR_7, VAR_8;

 for (VAR_6 = VAR_4, VAR_7 = 0; VAR_6 != VAR_4 || !VAR_7;
      VAR_6 = VAR_6->b_this_page, VAR_7 = VAR_8) {
  VAR_8 = VAR_7 + VAR_5;
  if (VAR_8 <= VAR_2 || VAR_7 >= VAR_3)
   continue;
  if (FUNC_0(VAR_0))
   FUNC_3(VAR_6);
  FUNC_1(VAR_0->i_gl, VAR_6);
 }
}
