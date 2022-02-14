
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int * f_mapping; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int *,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_1 (unsigned long,unsigned long) ;

unsigned long FUNC_2(struct file *VAR_5, unsigned long VAR_6,
  unsigned long VAR_7, unsigned long VAR_8, unsigned long VAR_9)
{
 if (VAR_7 > VAR_3)
  return -VAR_0;



 if (VAR_9 & VAR_1)
  return VAR_6;
 if (!VAR_6)
  VAR_6 = VAR_4;

 if (VAR_5) {
  VAR_6 = FUNC_0(VAR_5->f_mapping, VAR_6, VAR_7, VAR_8);
 } else if(VAR_9 & VAR_2) {
  VAR_6 = FUNC_0(((void*)0), VAR_6, VAR_7, VAR_8);
 } else {
  VAR_6 = FUNC_1(VAR_6, VAR_7);
 }
 return VAR_6;
}
