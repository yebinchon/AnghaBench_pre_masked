
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct file* file; } ;
struct splice_desc {size_t total_len; unsigned int flags; int pos; int num_spliced; TYPE_1__ u; } ;
struct pipe_inode_info {int dummy; } ;
struct inode {int i_sb; int i_mutex; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {struct inode* host; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct address_space*,unsigned long) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct file*,int,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pipe_inode_info*) ;
 int VAR_3 ;
 int FUNC_7 (struct pipe_inode_info*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct splice_desc*) ;
 int FUNC_11 (struct pipe_inode_info*,struct splice_desc*) ;
 int FUNC_12 (struct pipe_inode_info*,struct splice_desc*,int ) ;
 int FUNC_13 (struct pipe_inode_info*,struct splice_desc*) ;

ssize_t
FUNC_14(struct pipe_inode_info *VAR_4, struct file *VAR_5,
     loff_t *VAR_6, size_t VAR_7, unsigned int VAR_8)
{
 struct address_space *VAR_9 = VAR_5->f_mapping;
 struct inode *VAR_10 = VAR_9->host;
 struct splice_desc VAR_11 = {
  .total_len = VAR_7,
  .flags = VAR_8,
  .pos = *VAR_6,
  .u.file = VAR_5,
 };
 ssize_t VAR_12;

 FUNC_9(VAR_10->i_sb);

 FUNC_6(VAR_4);

 FUNC_10(&VAR_11);
 do {
  VAR_12 = FUNC_13(VAR_4, &VAR_11);
  if (VAR_12 <= 0)
   break;

  FUNC_4(&VAR_10->i_mutex, VAR_0);
  VAR_12 = FUNC_1(VAR_5);
  if (!VAR_12) {
   FUNC_2(VAR_5);
   VAR_12 = FUNC_12(VAR_4, &VAR_11, VAR_3);
  }
  FUNC_5(&VAR_10->i_mutex);
 } while (VAR_12 > 0);
 FUNC_11(VAR_4, &VAR_11);

 FUNC_7(VAR_4);

 if (VAR_11.num_spliced)
  VAR_12 = VAR_11.num_spliced;

 if (VAR_12 > 0) {
  unsigned long VAR_13;
  int VAR_14;

  VAR_13 = (VAR_12 + VAR_2 - 1) >> VAR_1;

  VAR_14 = FUNC_3(VAR_5, *VAR_6, VAR_12);
  if (VAR_14)
   VAR_12 = VAR_14;
  else
   *VAR_6 += VAR_12;
  FUNC_0(VAR_9, VAR_13);
 }
 FUNC_8(VAR_10->i_sb);

 return VAR_12;
}
