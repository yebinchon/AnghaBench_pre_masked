
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nandsim {scalar_t__ held_cnt; struct page** held_pages; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {int host; } ;
typedef scalar_t__ pgoff_t ;
typedef size_t loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 struct page* FUNC_0 (struct address_space*,scalar_t__) ;
 struct page* FUNC_1 (struct address_space*,scalar_t__,int ) ;
 int FUNC_2 (struct nandsim*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct nandsim *VAR_5, struct file *VAR_6, size_t VAR_7, loff_t VAR_8)
{
 pgoff_t VAR_9, VAR_10, VAR_11;
 struct page *VAR_12;
 struct address_space *VAR_13 = VAR_6->f_mapping;

 VAR_10 = VAR_8 >> VAR_4;
 VAR_11 = (VAR_8 + VAR_7 - 1) >> VAR_4;
 if (VAR_11 - VAR_10 + 1 > VAR_3)
  return -VAR_0;
 VAR_5->held_cnt = 0;
 for (VAR_9 = VAR_10; VAR_9 <= VAR_11; VAR_9++) {
  VAR_12 = FUNC_0(VAR_13, VAR_9);
  if (VAR_12 == ((void*)0)) {
   VAR_12 = FUNC_1(VAR_13, VAR_9, VAR_2);
   if (VAR_12 == ((void*)0)) {
    FUNC_4(VAR_13->host, 1);
    VAR_12 = FUNC_1(VAR_13, VAR_9, VAR_2);
   }
   if (VAR_12 == ((void*)0)) {
    FUNC_2(VAR_5);
    return -VAR_1;
   }
   FUNC_3(VAR_12);
  }
  VAR_5->held_pages[VAR_5->held_cnt++] = VAR_12;
 }
 return 0;
}
