
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ceiling_t ;


 int VAR_0 ;
 int ** VAR_1 ;

void FUNC_0(ceiling_t* VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0;VAR_3++)
    {
 if (VAR_1[VAR_3] == ((void*)0))
 {
     VAR_1[VAR_3] = VAR_2;
     return;
 }
    }
}
