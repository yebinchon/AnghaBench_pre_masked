
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;
struct pipe_buffer {struct page* page; } ;
struct page {int mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static int FUNC_3(struct pipe_inode_info *VAR_2,
           struct pipe_buffer *VAR_3)
{
 struct page *VAR_4 = VAR_3->page;
 int VAR_5;

 if (!FUNC_0(VAR_4)) {
  FUNC_1(VAR_4);





  if (!VAR_4->mapping) {
   VAR_5 = -VAR_1;
   goto error;
  }




  if (!FUNC_0(VAR_4)) {
   VAR_5 = -VAR_0;
   goto error;
  }




  FUNC_2(VAR_4);
 }

 return 0;
error:
 FUNC_2(VAR_4);
 return VAR_5;
}
