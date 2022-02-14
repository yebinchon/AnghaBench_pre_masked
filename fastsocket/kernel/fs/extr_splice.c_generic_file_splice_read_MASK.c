
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (struct file*,scalar_t__*,struct pipe_inode_info*,size_t,unsigned int) ;
 int FUNC_1 (struct file*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

ssize_t FUNC_4(struct file *VAR_0, loff_t *VAR_1,
     struct pipe_inode_info *VAR_2, size_t VAR_3,
     unsigned int VAR_4)
{
 loff_t VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_0->f_mapping->host);
 if (FUNC_3(*VAR_1 >= VAR_5))
  return 0;

 VAR_6 = VAR_5 - *VAR_1;
 if (FUNC_3(VAR_6 < VAR_3))
  VAR_3 = VAR_6;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_7 > 0) {
  *VAR_1 += VAR_7;
  FUNC_1(VAR_0);
 }

 return VAR_7;
}
