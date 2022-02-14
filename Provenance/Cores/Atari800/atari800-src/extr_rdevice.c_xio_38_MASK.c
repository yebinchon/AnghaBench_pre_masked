
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,struct termios*) ;
 int FUNC_3 (int ,int ,struct termios*) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_4(void)
{
  int VAR_11;




  VAR_1 = 1;
  VAR_2 = 1;
  VAR_0;

  VAR_11 = FUNC_1(VAR_3);
  if(VAR_11 & 0x20)
  {
    FUNC_0("R*: No ATASCII/ASCII TRANSLATION");
    VAR_10 = 0;
  }
  else
  {
    VAR_10 = 1;
  }

  if(VAR_11 & 0x40)
  {
    FUNC_0("R*: Append Line Feeds");
    VAR_8 = 1;
  }
  else
  {
    VAR_8 = 0;
  }

}
