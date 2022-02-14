
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {scalar_t__ f_pos; TYPE_1__* private_data; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ buffer_len; } ;
typedef TYPE_1__ fnic_dbgfs_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static loff_t FUNC_0(struct file *VAR_1,
     loff_t VAR_2,
     int VAR_3)
{
 fnic_dbgfs_t *VAR_4 = VAR_1->private_data;
 loff_t VAR_5 = -1;

 switch (VAR_3) {
 case 0:
  VAR_5 = VAR_2;
  break;
 case 1:
  VAR_5 = VAR_1->f_pos + VAR_2;
  break;
 case 2:
  VAR_5 = VAR_4->buffer_len - VAR_2;
 }
 return (VAR_5 < 0 || VAR_5 > VAR_4->buffer_len) ?
     -VAR_0 : (VAR_1->f_pos = VAR_5);
}
