
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_blkbits; } ;
struct file {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef unsigned int pgoff_t ;
typedef unsigned int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct address_space*) ;
 int FUNC_2 (struct file*,struct address_space*,unsigned int,unsigned int,int ,struct page**,void**) ;
 int FUNC_3 (struct file*,struct address_space*,unsigned int,unsigned int,unsigned int,struct page*,void*) ;
 int FUNC_4 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, struct address_space *VAR_5,
       loff_t VAR_6, loff_t *VAR_7)
{
 struct inode *VAR_8 = VAR_5->host;
 unsigned VAR_9 = 1 << VAR_8->i_blkbits;
 struct page *VAR_10;
 void *VAR_11;
 pgoff_t VAR_12, VAR_13;
 loff_t VAR_14;
 unsigned VAR_15, VAR_16, VAR_17;
 int VAR_18 = 0;

 VAR_12 = VAR_6 >> VAR_2;
 VAR_16 = VAR_6 & ~VAR_1;

 while (VAR_12 > (VAR_13 = (VAR_14 = *VAR_7)>>VAR_2)) {
  VAR_15 = VAR_14 & ~VAR_1;
  if (VAR_15 & (VAR_9-1)) {
   *VAR_7 |= (VAR_9-1);
   (*VAR_7)++;
  }
  VAR_17 = VAR_3 - VAR_15;

  VAR_18 = FUNC_2(VAR_4, VAR_5, VAR_14, VAR_17,
      VAR_0,
      &VAR_10, &VAR_11);
  if (VAR_18)
   goto out;
  FUNC_4(VAR_10, VAR_15, VAR_17);
  VAR_18 = FUNC_3(VAR_4, VAR_5, VAR_14, VAR_17, VAR_17,
      VAR_10, VAR_11);
  if (VAR_18 < 0)
   goto out;
  FUNC_0(VAR_18 != VAR_17);
  VAR_18 = 0;

  FUNC_1(VAR_5);
 }


 if (VAR_12 == VAR_13) {
  VAR_15 = VAR_14 & ~VAR_1;

  if (VAR_16 <= VAR_15) {
   goto out;
  }
  if (VAR_15 & (VAR_9-1)) {
   *VAR_7 |= (VAR_9-1);
   (*VAR_7)++;
  }
  VAR_17 = VAR_16 - VAR_15;

  VAR_18 = FUNC_2(VAR_4, VAR_5, VAR_14, VAR_17,
      VAR_0,
      &VAR_10, &VAR_11);
  if (VAR_18)
   goto out;
  FUNC_4(VAR_10, VAR_15, VAR_17);
  VAR_18 = FUNC_3(VAR_4, VAR_5, VAR_14, VAR_17, VAR_17,
      VAR_10, VAR_11);
  if (VAR_18 < 0)
   goto out;
  FUNC_0(VAR_18 != VAR_17);
  VAR_18 = 0;
 }
out:
 return VAR_18;
}
