
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {int flags; struct page* page; } ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 struct address_space* FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct address_space*,struct page*) ;
 int FUNC_6 (struct page*,int ) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static int FUNC_9(struct pipe_inode_info *VAR_2,
         struct pipe_buffer *VAR_3)
{
 struct page *VAR_4 = VAR_3->page;
 struct address_space *VAR_5;

 FUNC_2(VAR_4);

 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5) {
  FUNC_1(!FUNC_0(VAR_4));
  FUNC_8(VAR_4);

  if (FUNC_3(VAR_4) &&
      !FUNC_6(VAR_4, VAR_0))
   goto out_unlock;





  if (FUNC_5(VAR_5, VAR_4)) {
   VAR_3->flags |= VAR_1;
   return 0;
  }
 }





out_unlock:
 FUNC_7(VAR_4);
 return 1;
}
