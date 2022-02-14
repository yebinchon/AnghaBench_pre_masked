
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int) ;

void FUNC_6(void)
{
  int VAR_9;
  int VAR_10;
  int VAR_11;

  VAR_1 = 1;
  VAR_2 = 1;
  VAR_0;

  VAR_7 = 0;

  VAR_9 = FUNC_2(VAR_4);
  VAR_10 = FUNC_2(VAR_3);
  VAR_11 = FUNC_1(VAR_5);
  if(VAR_10 & 0x04)
  {
    FUNC_0("R*: Open for Reading...");
  }

  if(VAR_10 & 0x08)
  {
    FUNC_0("R*: Open for Writing...");
  }
  if(VAR_10 & 0x01)
  {

  }

}
