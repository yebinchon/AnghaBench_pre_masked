
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int den; int num; } ;
typedef TYPE_1__ AVRational ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,int,int) ;
 int FUNC_1 (char const*,char const**,int*) ;

__attribute__((used)) static AVRational FUNC_2(const char* VAR_1, int* VAR_2)
{
    int64_t VAR_3, VAR_4 = 1;
    AVRational VAR_5;
    VAR_3 = FUNC_1(VAR_1, &VAR_1, VAR_2);
    if (*VAR_1 == '.')
        VAR_1++;
    for (; *VAR_1>='0' && *VAR_1<='9'; VAR_1++) {

        if (VAR_3 > (VAR_0 - 9) / 10 || VAR_4 > VAR_0 / 10)
            break;
        VAR_3 = 10 * VAR_3 + *VAR_1 - '0';
        VAR_4 *= 10;
    }
    if (!VAR_3)
        *VAR_2 = -1;
    FUNC_0(&VAR_5.num, &VAR_5.den, VAR_3, VAR_4, 0x7FFFFFFF);
    return VAR_5;
}
