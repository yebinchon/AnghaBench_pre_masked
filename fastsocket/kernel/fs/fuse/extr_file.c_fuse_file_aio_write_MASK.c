
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {size_t ki_pos; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct iov_iter {int dummy; } ;
struct inode {int i_sb; int i_mutex; int i_mode; } ;
struct file {int f_flags; struct address_space* f_mapping; } ;
struct address_space {int * backing_dev_info; struct inode* host; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;
struct TYPE_2__ {int * backing_dev_info; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_3 ;
 size_t FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*) ;
 size_t FUNC_4 (struct address_space*,size_t,size_t) ;
 size_t FUNC_5 (struct file*,struct address_space*,struct iov_iter*,size_t) ;
 size_t FUNC_6 (struct kiocb*,struct iovec const*,unsigned long*,size_t,size_t*,size_t,size_t) ;
 size_t FUNC_7 (struct iovec const*,unsigned long*,size_t*,int ) ;
 size_t FUNC_8 (struct file*,size_t*,size_t*,int ) ;
 int FUNC_9 (struct address_space*,size_t,size_t) ;
 int FUNC_10 (struct iov_iter*,struct iovec const*,unsigned long,size_t,size_t) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static ssize_t FUNC_15(struct kiocb *VAR_4, const struct iovec *VAR_5,
       unsigned long VAR_6, loff_t VAR_7)
{
 struct file *VAR_8 = VAR_4->ki_filp;
 struct address_space *VAR_9 = VAR_8->f_mapping;
 size_t VAR_10 = 0;
 size_t VAR_11 = 0;
 ssize_t VAR_12 = 0;
 ssize_t VAR_13 = 0;
 struct inode *VAR_14 = VAR_9->host;
 ssize_t VAR_15;
 struct iov_iter VAR_16;
 loff_t VAR_17 = 0;

 FUNC_1(VAR_4->ki_pos != VAR_7);

 VAR_11 = 0;
 VAR_15 = FUNC_7(VAR_5, &VAR_6, &VAR_11, VAR_2);
 if (VAR_15)
  return VAR_15;

 VAR_10 = VAR_11;
 FUNC_14(VAR_14->i_sb);
 FUNC_11(&VAR_14->i_mutex);


 VAR_3->backing_dev_info = VAR_9->backing_dev_info;

 VAR_15 = FUNC_8(VAR_8, &VAR_7, &VAR_10, FUNC_0(VAR_14->i_mode));
 if (VAR_15)
  goto out;

 if (VAR_10 == 0)
  goto out;

 VAR_15 = FUNC_2(VAR_8);
 if (VAR_15)
  goto out;

 FUNC_3(VAR_8);

 if (VAR_8->f_flags & VAR_0) {
  VAR_12 = FUNC_6(VAR_4, VAR_5, &VAR_6,
          VAR_7, &VAR_4->ki_pos,
          VAR_10, VAR_11);
  if (VAR_12 < 0 || VAR_12 == VAR_10)
   goto out;

  VAR_7 += VAR_12;
  VAR_10 -= VAR_12;

  FUNC_10(&VAR_16, VAR_5, VAR_6, VAR_10, VAR_12);
  VAR_13 = FUNC_5(VAR_8, VAR_9, &VAR_16, VAR_7);
  if (VAR_13 < 0) {
   VAR_15 = VAR_13;
   goto out;
  }
  VAR_17 = VAR_7 + VAR_13 - 1;

  VAR_15 = FUNC_4(VAR_8->f_mapping, VAR_7,
         VAR_17);
  if (VAR_15)
   goto out;

  FUNC_9(VAR_8->f_mapping,
      VAR_7 >> VAR_1,
      VAR_17 >> VAR_1);

  VAR_12 += VAR_13;
  VAR_4->ki_pos = VAR_7 + VAR_13;
 } else {
  FUNC_10(&VAR_16, VAR_5, VAR_6, VAR_10, 0);
  VAR_12 = FUNC_5(VAR_8, VAR_9, &VAR_16, VAR_7);
  if (VAR_12 >= 0)
   VAR_4->ki_pos = VAR_7 + VAR_12;
 }
out:
 VAR_3->backing_dev_info = ((void*)0);
 FUNC_12(&VAR_14->i_mutex);
 FUNC_13(VAR_14->i_sb);

 return VAR_12 ? VAR_12 : VAR_15;
}
