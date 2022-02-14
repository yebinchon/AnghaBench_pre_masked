
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_3__ {int den; int num; } ;
typedef TYPE_1__ AVRational ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;

uint32_t FUNC_3(AVRational VAR_0) {
    int64_t VAR_1;
    int VAR_2;
    int VAR_3 = 0;

    if (VAR_0.den < 0) {
        VAR_0.den *= -1;
        VAR_0.num *= -1;
    }
    if (VAR_0.num < 0) {
        VAR_0.num *= -1;
        VAR_3 = 1;
    }

    if (!VAR_0.num && !VAR_0.den) return 0xFFC00000;
    if (!VAR_0.num) return 0;
    if (!VAR_0.den) return 0x7F800000 | (VAR_0.num & 0x80000000);

    VAR_2 = 23 + FUNC_1(VAR_0.den) - FUNC_1(VAR_0.num);
    if (VAR_2 >= 0) VAR_1 = FUNC_2(VAR_0.num, 1LL<<VAR_2, VAR_0.den);
    else VAR_1 = FUNC_2(VAR_0.num, 1, ((int64_t)VAR_0.den) << -VAR_2);

    VAR_2 -= VAR_1 >= (1<<24);
    VAR_2 += VAR_1 < (1<<23);

    if (VAR_2 >= 0) VAR_1 = FUNC_2(VAR_0.num, 1LL<<VAR_2, VAR_0.den);
    else VAR_1 = FUNC_2(VAR_0.num, 1, ((int64_t)VAR_0.den) << -VAR_2);

    FUNC_0(VAR_1 < (1<<24));
    FUNC_0(VAR_1 >= (1<<23));

    return VAR_3<<31 | (150-VAR_2)<<23 | (VAR_1 - (1<<23));
}
