
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_tty {unsigned int control_lines; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;

__attribute__((used)) static int FUNC_0(struct ipw_tty *VAR_10)
{
 unsigned int VAR_11 = VAR_10->control_lines;
 unsigned int VAR_12 = 0;

 if (VAR_11 & VAR_4)
  VAR_12 |= VAR_9;
 if (VAR_11 & VAR_3)
  VAR_12 |= VAR_8;
 if (VAR_11 & VAR_0)
  VAR_12 |= VAR_6;
 if (VAR_11 & VAR_2)
  VAR_12 |= VAR_7;
 if (VAR_11 & VAR_1)
  VAR_12 |= VAR_5;

 return VAR_12;
}
