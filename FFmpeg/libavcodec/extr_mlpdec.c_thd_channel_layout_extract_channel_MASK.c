
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int* VAR_0 ;

__attribute__((used)) static uint64_t FUNC_2(uint64_t VAR_1,
                                                   int VAR_2)
{
    int VAR_3;

    if (FUNC_1(VAR_1) <= VAR_2)
        return 0;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
        if (VAR_1 & VAR_0[VAR_3] && !VAR_2--)
            return VAR_0[VAR_3];
    return 0;
}
