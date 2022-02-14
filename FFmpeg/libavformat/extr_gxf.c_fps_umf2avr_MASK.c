
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int member_0; int member_1; } ;
typedef TYPE_1__ const AVRational ;


 int FUNC_0 (int) ;

__attribute__((used)) static AVRational FUNC_1(uint32_t VAR_0) {
    static const AVRational VAR_1[] = {{50, 1}, {60000, 1001}, {24, 1},
        {25, 1}, {30000, 1001}};
    int VAR_2 = FUNC_0((VAR_0 & 0x7c0) >> 6);
    return VAR_1[VAR_2];
}
