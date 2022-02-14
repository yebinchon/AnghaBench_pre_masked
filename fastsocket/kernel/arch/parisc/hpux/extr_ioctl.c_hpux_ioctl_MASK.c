
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int,unsigned long,unsigned long) ;
 int FUNC_2 (int,unsigned long,unsigned long) ;

int FUNC_3(int VAR_1, unsigned long VAR_2, unsigned long VAR_3)
{
 int VAR_4 = -VAR_0;
 int VAR_5 = FUNC_0(VAR_2);
 switch (VAR_5) {
 case 'T':

  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
  break;
 case 't':
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 }
 return VAR_4;
}
