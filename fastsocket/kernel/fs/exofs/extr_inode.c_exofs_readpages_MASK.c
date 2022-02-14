
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_collect {int dummy; } ;
struct list_head {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int host; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct page_collect*,unsigned int,int ) ;
 int FUNC_2 (struct address_space*,struct list_head*,int ,struct page_collect*) ;
 int FUNC_3 (struct page_collect*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, struct address_space *VAR_2,
      struct list_head *VAR_3, unsigned VAR_4)
{
 struct page_collect VAR_5;
 int VAR_6;

 FUNC_1(&VAR_5, VAR_4, VAR_2->host);

 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_0, &VAR_5);
 if (VAR_6) {
  FUNC_0("read_cache_pages => %d\n", VAR_6);
  return VAR_6;
 }

 return FUNC_3(&VAR_5, 0);
}
