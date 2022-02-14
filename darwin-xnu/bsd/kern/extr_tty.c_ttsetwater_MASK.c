
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_ospeed; unsigned int t_lowat; int t_hiwat; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (unsigned int,int ) ;

void
FUNC_3(struct tty *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;

 FUNC_1(VAR_5);



 VAR_6 = VAR_5->t_ospeed / 10;
 VAR_5->t_lowat = VAR_7 = ((VAR_6 / 2) > VAR_2 ? VAR_2 : ((VAR_6 / 2) < VAR_4) ? VAR_4 : (VAR_6 / 2));
 VAR_7 += VAR_6;
 VAR_7 = ((VAR_7) > VAR_1 ? VAR_1 : ((VAR_7) < VAR_3) ? VAR_3 : (VAR_7));
 VAR_5->t_hiwat = FUNC_2(VAR_7, VAR_0);

}
