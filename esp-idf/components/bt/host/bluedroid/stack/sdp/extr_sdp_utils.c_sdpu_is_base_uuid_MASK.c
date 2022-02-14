
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef size_t UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;

BOOLEAN FUNC_0 (UINT8 *VAR_4)
{
    UINT16 VAR_5;

    for (VAR_5 = 4; VAR_5 < VAR_1; VAR_5++)
        if (VAR_4[VAR_5] != VAR_3[VAR_5]) {
            return (VAR_0);
        }


    return (VAR_2);
}
