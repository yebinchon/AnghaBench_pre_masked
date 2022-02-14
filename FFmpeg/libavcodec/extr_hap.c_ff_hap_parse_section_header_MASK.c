
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum HapSectionType { ____Placeholder_HapSectionType } HapSectionType ;
typedef int GetByteContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(GetByteContext *VAR_1, int *VAR_2,
                                enum HapSectionType *VAR_3)
{
    if (FUNC_1(VAR_1) < 4)
        return VAR_0;

    *VAR_2 = FUNC_2(VAR_1);
    *VAR_3 = FUNC_0(VAR_1);

    if (*VAR_2 == 0) {
        if (FUNC_1(VAR_1) < 4)
            return VAR_0;

        *VAR_2 = FUNC_3(VAR_1);
    }

    if (*VAR_2 > FUNC_1(VAR_1) || *VAR_2 < 0)
        return VAR_0;
    else
        return 0;
}
