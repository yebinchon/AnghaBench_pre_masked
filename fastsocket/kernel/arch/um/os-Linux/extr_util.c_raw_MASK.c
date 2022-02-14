
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct termios*) ;
 int VAR_1 ;
 int FUNC_2 (int,struct termios*) ;
 int FUNC_3 (int,int ,struct termios*) ;

int FUNC_4(int VAR_2)
{
 struct termios VAR_3;
 int VAR_4;

 FUNC_0(VAR_4 = FUNC_2(VAR_2, &VAR_3));
 if (VAR_4 < 0)
  return -VAR_1;

 FUNC_1(&VAR_3);

 FUNC_0(VAR_4 = FUNC_3(VAR_2, VAR_0, &VAR_3));
 if (VAR_4 < 0)
  return -VAR_1;





 return 0;
}
