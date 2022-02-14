
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ y; int x; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_2 (int,int,int ,int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_3 ;
 int * VAR_4 ;

void FUNC_4(void)
{
    int VAR_5;

    FUNC_2 (72,28,0,FUNC_3("M_LOADG",VAR_2));
    for (VAR_5 = 0;VAR_5 < VAR_3; VAR_5++)
    {
 FUNC_0(VAR_1.x,VAR_1.y+VAR_0*VAR_5);
 FUNC_1(VAR_1.x,VAR_1.y+VAR_0*VAR_5,VAR_4[VAR_5]);
    }
}
