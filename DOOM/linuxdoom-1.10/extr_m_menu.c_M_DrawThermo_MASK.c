
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int,int ,int ) ;
 int FUNC_1 (char*,int ) ;

void
FUNC_2
( int VAR_1,
  int VAR_2,
  int VAR_3,
  int VAR_4 )
{
    int VAR_5;
    int VAR_6;

    VAR_5 = VAR_1;
    FUNC_0 (VAR_5,VAR_2,0,FUNC_1("M_THERML",VAR_0));
    VAR_5 += 8;
    for (VAR_6=0;VAR_6<VAR_3;VAR_6++)
    {
 FUNC_0 (VAR_5,VAR_2,0,FUNC_1("M_THERMM",VAR_0));
 VAR_5 += 8;
    }
    FUNC_0 (VAR_5,VAR_2,0,FUNC_1("M_THERMR",VAR_0));

    FUNC_0 ((VAR_1+8) + VAR_4*8,VAR_2,
         0,FUNC_1("M_THERMO",VAR_0));
}
