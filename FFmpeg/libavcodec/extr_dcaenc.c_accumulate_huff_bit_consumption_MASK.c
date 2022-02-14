
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int int32_t ;


 int VAR_0 ;
 size_t* VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(int VAR_2, int32_t *VAR_3,
                                            uint32_t *VAR_4)
{
    uint8_t VAR_5, VAR_6 = VAR_2 - 1;
    for (VAR_5 = 0; VAR_5 < VAR_1[VAR_6]; VAR_5++)
        VAR_4[VAR_5] += FUNC_0(VAR_3, VAR_0,
                                                  VAR_5, VAR_6);
}
