
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {int index; struct address_space* mapping; } ;
struct inode {unsigned long long i_size; } ;
struct address_space {struct inode* host; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 unsigned long long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct page*) ;
 char* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int ,unsigned long long*,char*,int) ;

int FUNC_8(struct page *VAR_2, struct writeback_control *VAR_3)
{
 struct address_space *VAR_4 = VAR_2->mapping;
 struct inode *VAR_5 = VAR_4->host;
 char *VAR_6;
 unsigned long long VAR_7;
 int VAR_8 = VAR_1;
 int VAR_9 = VAR_5->i_size >> VAR_0;
 int VAR_10;

 if (VAR_2->index >= VAR_9)
  VAR_8 = VAR_5->i_size & (VAR_1-1);

 VAR_6 = FUNC_4(VAR_2);
 VAR_7 = ((unsigned long long) VAR_2->index) << VAR_0;

 VAR_10 = FUNC_7(FUNC_2(VAR_5)->fd, &VAR_7, VAR_6, VAR_8);
 if (VAR_10 != VAR_8) {
  FUNC_1(VAR_2);
  goto out;
 }

 if (VAR_7 > VAR_5->i_size)
  VAR_5->i_size = VAR_7;

 if (FUNC_3(VAR_2))
  FUNC_0(VAR_2);
 VAR_10 = 0;

 out:
 FUNC_5(VAR_2);

 FUNC_6(VAR_2);
 return VAR_10;
}
