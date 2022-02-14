
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__** VAR_5 ;
 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__*) ;

void FUNC_3(int VAR_6)
{

    VAR_4 = 1;

    VAR_3 = VAR_6;
    FUNC_1(VAR_2,VAR_5[VAR_6]);
    if (!FUNC_0(VAR_5[VAR_6],VAR_0))
 VAR_5[VAR_6][0] = 0;
    VAR_1 = FUNC_2(VAR_5[VAR_6]);
}
