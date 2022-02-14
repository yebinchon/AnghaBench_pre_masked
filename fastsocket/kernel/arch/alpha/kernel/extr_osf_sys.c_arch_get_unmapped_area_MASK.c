
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_2__ {int personality; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_1 (int ,unsigned long,unsigned long) ;
 TYPE_1__* VAR_6 ;

unsigned long
FUNC_2(struct file *VAR_7, unsigned long VAR_8,
         unsigned long VAR_9, unsigned long VAR_10,
         unsigned long VAR_11)
{
 unsigned long VAR_12;


 if (VAR_6->personality & VAR_0)
  VAR_12 = 0x80000000;
 else
  VAR_12 = VAR_4;

 if (VAR_9 > VAR_12)
  return -VAR_1;

 if (VAR_11 & VAR_2)
  return VAR_8;
 if (VAR_8) {
  VAR_8 = FUNC_1 (FUNC_0(VAR_8), VAR_9, VAR_12);
  if (VAR_8 != (unsigned long) -VAR_1)
   return VAR_8;
 }


 VAR_8 = FUNC_1 (FUNC_0(VAR_5),
      VAR_9, VAR_12);
 if (VAR_8 != (unsigned long) -VAR_1)
  return VAR_8;


 VAR_8 = FUNC_1 (VAR_3, VAR_9, VAR_12);

 return VAR_8;
}
