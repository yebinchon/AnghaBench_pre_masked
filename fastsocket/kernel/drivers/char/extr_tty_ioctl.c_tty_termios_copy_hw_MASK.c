
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ktermios {int c_cflag; int c_ospeed; int c_ispeed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(struct ktermios *VAR_3, struct ktermios *VAR_4)
{


 VAR_3->c_cflag &= VAR_2 | VAR_1 | VAR_0;
 VAR_3->c_cflag |= VAR_4->c_cflag & ~(VAR_2 | VAR_1 | VAR_0);
 VAR_3->c_ispeed = VAR_4->c_ispeed;
 VAR_3->c_ospeed = VAR_4->c_ospeed;
}
