
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int* c_cc; int c_lflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,struct termios*) ;
 int FUNC_1 (int ,int ,struct termios*) ;

void FUNC_2(int VAR_4)
{
   struct termios VAR_5;


    FUNC_0(VAR_1, &VAR_5);

    if (VAR_4)
    {

        VAR_5.c_lflag &= ~VAR_0;

        VAR_5.c_cc[VAR_3] = 1;
    }
    else
    {

        VAR_5.c_lflag |= VAR_0;
    }


    FUNC_1(VAR_1, VAR_2, &VAR_5);
}
