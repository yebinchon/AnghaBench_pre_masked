
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {long long f_pos; } ;
struct TYPE_2__ {long long read_size; } ;


 long long VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static long long
FUNC_2(struct file *VAR_2, long long VAR_3, int VAR_4)
{
 FUNC_0();
 switch (VAR_4) {
  case 0:
   VAR_2->f_pos = VAR_3;
   break;
  case 1:
   VAR_2->f_pos += VAR_3;
   if (VAR_2->f_pos > VAR_1.read_size)
    VAR_2->f_pos = VAR_1.read_size;
   break;
  case 2:
   VAR_2->f_pos = VAR_1.read_size;
   break;
  default:
   FUNC_1();
   return -VAR_0;
 }
 FUNC_1();
 return VAR_2->f_pos;
}
