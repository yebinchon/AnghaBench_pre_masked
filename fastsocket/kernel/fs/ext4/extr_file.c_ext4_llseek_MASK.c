
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_mutex; int i_size; TYPE_3__* i_sb; } ;
struct file {scalar_t__ f_pos; scalar_t__ f_version; TYPE_1__* f_mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {scalar_t__ s_maxbytes; } ;
struct TYPE_5__ {scalar_t__ s_bitmap_maxbytes; } ;
struct TYPE_4__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;


 int FUNC_1 (struct inode*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

loff_t FUNC_4(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_2->f_mapping->host;
 loff_t VAR_6;

 if (!(FUNC_1(VAR_5, VAR_1)))
  VAR_6 = FUNC_0(VAR_5->i_sb)->s_bitmap_maxbytes;
 else
  VAR_6 = VAR_5->i_sb->s_maxbytes;
 FUNC_2(&VAR_5->i_mutex);
 switch (VAR_4) {
 case 128:
  VAR_3 += VAR_5->i_size;
  break;
 case 129:
  if (VAR_3 == 0) {
   FUNC_3(&VAR_5->i_mutex);
   return VAR_2->f_pos;
  }
  VAR_3 += VAR_2->f_pos;
  break;
 }

 if (VAR_3 < 0 || VAR_3 > VAR_6) {
  FUNC_3(&VAR_5->i_mutex);
  return -VAR_0;
 }

 if (VAR_3 != VAR_2->f_pos) {
  VAR_2->f_pos = VAR_3;
  VAR_2->f_version = 0;
 }
 FUNC_3(&VAR_5->i_mutex);

 return VAR_3;
}
