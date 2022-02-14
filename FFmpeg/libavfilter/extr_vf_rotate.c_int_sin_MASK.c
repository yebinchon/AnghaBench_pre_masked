
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int64_t FUNC_0(int64_t VAR_2)
{
    int64_t VAR_3, VAR_4 = 0;
    int VAR_5;
    if (VAR_2 < 0) VAR_2 = VAR_1-VAR_2;
    VAR_2 %= 2 * VAR_1;

    if (VAR_2 >= VAR_1*3/2) VAR_2 -= 2*VAR_1;
    if (VAR_2 >= VAR_1/2 ) VAR_2 = VAR_1 - VAR_2;


    VAR_3 = (VAR_2*VAR_2)/(VAR_0);
    for (VAR_5 = 2; VAR_5 < 11; VAR_5 += 2) {
        VAR_4 += VAR_2;
        VAR_2 = -VAR_2*VAR_3 / (VAR_0*VAR_5*(VAR_5+1));
    }
    return (VAR_4 + 8)>>4;
}
