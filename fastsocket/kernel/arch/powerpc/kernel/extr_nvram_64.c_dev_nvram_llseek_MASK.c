
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {scalar_t__ f_pos; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int (* nvram_size ) () ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static loff_t FUNC_1(struct file *VAR_3, loff_t VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_2.nvram_size == ((void*)0))
  return -VAR_1;
 VAR_6 = VAR_2.nvram_size();

 switch (VAR_5) {
 case 1:
  VAR_4 += VAR_3->f_pos;
  break;
 case 2:
  VAR_4 += VAR_6;
  break;
 }
 if (VAR_4 < 0)
  return -VAR_0;
 VAR_3->f_pos = VAR_4;
 return VAR_3->f_pos;
}
