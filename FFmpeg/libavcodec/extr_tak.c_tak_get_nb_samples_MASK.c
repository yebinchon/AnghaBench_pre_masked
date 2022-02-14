
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum TAKFrameSizeType { ____Placeholder_TAKFrameSizeType } TAKFrameSizeType ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_1(int VAR_4, enum TAKFrameSizeType VAR_5)
{
    int VAR_6, VAR_7;

    if (VAR_5 <= VAR_2) {
        VAR_6 = VAR_4 * VAR_3[VAR_5] >>
                         VAR_1;
        VAR_7 = 16384;
    } else if (VAR_5 < FUNC_0(VAR_3)) {
        VAR_6 = VAR_3[VAR_5];
        VAR_7 = VAR_4 *
                         VAR_3[VAR_2] >>
                         VAR_1;
    } else {
        return VAR_0;
    }

    if (VAR_6 <= 0 || VAR_6 > VAR_7)
        return VAR_0;

    return VAR_6;
}
