
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,int,int,int,int) ;
 unsigned int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(unsigned int VAR_5)
{
  int VAR_6;
  int VAR_7;

  VAR_6 = VAR_5 - VAR_1;
  VAR_3 += FUNC_0(VAR_6);
  VAR_7 = VAR_3 - VAR_4;
  VAR_1 = VAR_5;

  FUNC_3(VAR_2);

  FUNC_1(VAR_0, "z80 sync %i (%u|%u -> %u|%u)", VAR_7,
    VAR_4, VAR_4 / 288,
    VAR_3, VAR_3 / 288);

  if (VAR_7 > 0)
    VAR_4 += FUNC_4(VAR_7);

  FUNC_2(VAR_2);
}
