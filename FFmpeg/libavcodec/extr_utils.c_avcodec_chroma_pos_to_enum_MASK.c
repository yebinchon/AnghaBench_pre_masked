
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVChromaLocation { ____Placeholder_AVChromaLocation } AVChromaLocation ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int*,int) ;

enum AVChromaLocation FUNC_1(int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;

    for (VAR_4 = VAR_1 + 1; VAR_4 < VAR_0; VAR_4++) {
        if (FUNC_0(&VAR_5, &VAR_6, VAR_4) == 0 && VAR_5 == VAR_2 && VAR_6 == VAR_3)
            return VAR_4;
    }
    return VAR_1;
}
