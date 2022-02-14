
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (short*) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 int FUNC_2 (short*,short*,int) ;

void
FUNC_3
( short* VAR_1,
  int VAR_2,
  int VAR_3 )
{
    int VAR_4;
    int VAR_5;
    short* VAR_6;

    VAR_6 = (short*) FUNC_1(VAR_2*VAR_3*2, VAR_0, 0);

    for(VAR_5=0;VAR_5<VAR_3;VAR_5++)
 for(VAR_4=0;VAR_4<VAR_2;VAR_4++)
     VAR_6[VAR_4*VAR_3+VAR_5] = VAR_1[VAR_5*VAR_2+VAR_4];

    FUNC_2(VAR_1, VAR_6, VAR_2*VAR_3*2);

    FUNC_0(VAR_6);

}
