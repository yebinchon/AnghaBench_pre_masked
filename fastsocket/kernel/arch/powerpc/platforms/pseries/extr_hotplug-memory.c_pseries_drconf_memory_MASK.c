
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_3(unsigned long *VAR_3, unsigned int VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1();
 if (!VAR_5)
   return -VAR_0;

 if (VAR_4 == VAR_1) {
  VAR_6 = FUNC_0(*VAR_3, VAR_5);
  VAR_6 = (VAR_6 < 0) ? -VAR_0 : 0;
 } else if (VAR_4 == VAR_2) {
  VAR_6 = FUNC_2(*VAR_3, VAR_5);
 } else {
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
