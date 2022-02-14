
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ y; scalar_t__ x; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,scalar_t__,char*) ;
 int VAR_2 ;
 int FUNC_3 (int,int,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 char** VAR_6 ;

void FUNC_5(void)
{
    int VAR_7;

    FUNC_3 (72,28,0,FUNC_4("M_SAVEG",VAR_2));
    for (VAR_7 = 0;VAR_7 < VAR_3; VAR_7++)
    {
 FUNC_0(VAR_1.x,VAR_1.y+VAR_0*VAR_7);
 FUNC_2(VAR_1.x,VAR_1.y+VAR_0*VAR_7,VAR_6[VAR_7]);
    }

    if (VAR_5)
    {
 VAR_7 = FUNC_1(VAR_6[VAR_4]);
 FUNC_2(VAR_1.x + VAR_7,VAR_1.y+VAR_0*VAR_4,"_");
    }
}
