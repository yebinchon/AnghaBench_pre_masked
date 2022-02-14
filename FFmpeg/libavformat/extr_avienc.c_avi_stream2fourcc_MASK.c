
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char *FUNC_0(char *VAR_2, int VAR_3, enum AVMediaType VAR_4)
{
    VAR_2[0] = '0' + VAR_3 / 10;
    VAR_2[1] = '0' + VAR_3 % 10;
    if (VAR_4 == VAR_1) {
        VAR_2[2] = 'd';
        VAR_2[3] = 'c';
    } else if (VAR_4 == VAR_0) {

        VAR_2[2] = 's';
        VAR_2[3] = 'b';
    } else {
        VAR_2[2] = 'w';
        VAR_2[3] = 'b';
    }
    VAR_2[4] = '\0';
    return VAR_2;
}
