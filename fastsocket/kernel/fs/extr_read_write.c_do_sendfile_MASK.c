
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {TYPE_3__* i_sb; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {int f_mode; scalar_t__ f_pos; int f_flags; TYPE_2__ f_path; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {int s_maxbytes; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,size_t) ;
 int VAR_11 ;
 size_t FUNC_2 (struct file*,scalar_t__*,struct file*,size_t,int) ;
 struct file* FUNC_3 (int,int*) ;
 int FUNC_4 (struct file*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 size_t FUNC_8 (int ,struct file*,scalar_t__*,size_t) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static ssize_t FUNC_10(int VAR_12, int VAR_13, loff_t *VAR_14,
      size_t VAR_15, loff_t VAR_16)
{
 struct file * VAR_17, * VAR_18;
 struct inode * VAR_19, * VAR_20;
 loff_t VAR_21;
 ssize_t VAR_22;
 int VAR_23, VAR_24, VAR_25;




 VAR_22 = -VAR_0;
 VAR_17 = FUNC_3(VAR_13, &VAR_23);
 if (!VAR_17)
  goto out;
 if (!(VAR_17->f_mode & VAR_5))
  goto fput_in;
 VAR_22 = -VAR_3;
 if (!VAR_14)
  VAR_14 = &VAR_17->f_pos;
 else
  if (!(VAR_17->f_mode & VAR_4))
   goto fput_in;
 VAR_22 = FUNC_8(VAR_8, VAR_17, VAR_14, VAR_15);
 if (VAR_22 < 0)
  goto fput_in;
 VAR_15 = VAR_22;




 VAR_22 = -VAR_0;
 VAR_18 = FUNC_3(VAR_12, &VAR_24);
 if (!VAR_18)
  goto fput_in;
 if (!(VAR_18->f_mode & VAR_6))
  goto fput_out;
 VAR_22 = -VAR_1;
 VAR_19 = VAR_17->f_path.dentry->d_inode;
 VAR_20 = VAR_18->f_path.dentry->d_inode;
 VAR_22 = FUNC_8(VAR_10, VAR_18, &VAR_18->f_pos, VAR_15);
 if (VAR_22 < 0)
  goto fput_out;
 VAR_15 = VAR_22;

 if (!VAR_16)
  VAR_16 = FUNC_7(VAR_19->i_sb->s_maxbytes, VAR_20->i_sb->s_maxbytes);

 VAR_21 = *VAR_14;
 if (FUNC_9(VAR_21 + VAR_15 > VAR_16)) {
  VAR_22 = -VAR_2;
  if (VAR_21 >= VAR_16)
   goto fput_out;
  VAR_15 = VAR_16 - VAR_21;
 }

 VAR_25 = 0;
 VAR_22 = FUNC_2(VAR_17, VAR_14, VAR_18, VAR_15, VAR_25);

 if (VAR_22 > 0) {
  FUNC_0(VAR_11, VAR_22);
  FUNC_1(VAR_11, VAR_22);
 }

 FUNC_5(VAR_11);
 FUNC_6(VAR_11);
 if (*VAR_14 > VAR_16)
  VAR_22 = -VAR_2;

fput_out:
 FUNC_4(VAR_18, VAR_24);
fput_in:
 FUNC_4(VAR_17, VAR_23);
out:
 return VAR_22;
}
