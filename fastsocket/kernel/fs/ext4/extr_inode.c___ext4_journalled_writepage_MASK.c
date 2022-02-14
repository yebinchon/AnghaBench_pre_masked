
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct page {struct address_space* mapping; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;
 struct buffer_head* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int *,struct buffer_head*,int ,unsigned int,int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(struct page *VAR_5,
           struct writeback_control *VAR_6,
           unsigned int VAR_7)
{
 struct address_space *VAR_8 = VAR_5->mapping;
 struct inode *VAR_9 = VAR_8->host;
 struct buffer_head *VAR_10;
 handle_t *VAR_11 = ((void*)0);
 int VAR_12 = 0;
 int VAR_13;

 VAR_10 = FUNC_7(VAR_5);
 FUNC_0(!VAR_10);
 FUNC_9(VAR_11, VAR_10, 0, VAR_7, ((void*)0), VAR_1);


 FUNC_8(VAR_5);

 VAR_11 = FUNC_3(VAR_9, FUNC_6(VAR_9));
 if (FUNC_1(VAR_11)) {
  VAR_12 = FUNC_2(VAR_11);
  goto out;
 }

 VAR_12 = FUNC_9(VAR_11, VAR_10, 0, VAR_7, ((void*)0),
    VAR_3);

 VAR_13 = FUNC_9(VAR_11, VAR_10, 0, VAR_7, ((void*)0),
    VAR_4);
 if (VAR_12 == 0)
  VAR_12 = VAR_13;
 VAR_13 = FUNC_4(VAR_11);
 if (!VAR_12)
  VAR_12 = VAR_13;

 FUNC_9(VAR_11, VAR_10, 0, VAR_7, ((void*)0), VAR_2);
 FUNC_5(VAR_9, VAR_0);
out:
 return VAR_12;
}
