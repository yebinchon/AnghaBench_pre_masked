
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct page {int index; TYPE_1__* mapping; } ;
struct inode {int i_size; scalar_t__ i_ino; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct file*,struct page*,int ,int) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int
FUNC_6(struct file *VAR_3, struct page *VAR_4)
{
 struct inode *VAR_5 = VAR_4->mapping->host;
 u32 VAR_6;
 int VAR_7;

 FUNC_4("AFFS: read_page(%u, %ld)\n", (u32)VAR_5->i_ino, VAR_4->index);
 VAR_6 = VAR_2;
 if (((VAR_4->index + 1) << VAR_1) > VAR_5->i_size) {
  VAR_6 = VAR_5->i_size & ~VAR_0;
  FUNC_2(FUNC_3(VAR_4) + VAR_6, 0, VAR_2 - VAR_6);
 }

 VAR_7 = FUNC_1(VAR_3, VAR_4, 0, VAR_6);
 if (!VAR_7)
  FUNC_0(VAR_4);
 FUNC_5(VAR_4);
 return VAR_7;
}
