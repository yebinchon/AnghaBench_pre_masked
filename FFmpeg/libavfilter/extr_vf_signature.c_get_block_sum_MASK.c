
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {int x; int y; } ;
struct TYPE_5__ {int x; int y; } ;
struct TYPE_7__ {TYPE_2__ to; TYPE_1__ up; } ;
typedef int StreamContext ;
typedef TYPE_3__ Block ;



__attribute__((used)) static uint64_t FUNC_0(StreamContext *VAR_0, uint64_t VAR_1[32][32], const Block *VAR_2)
{
    uint64_t VAR_3 = 0;

    int VAR_4, VAR_5, VAR_6, VAR_7;

    VAR_4 = VAR_2->up.x;
    VAR_5 = VAR_2->up.y;
    VAR_6 = VAR_2->to.x;
    VAR_7 = VAR_2->to.y;

    if (VAR_4-1 >= 0 && VAR_5-1 >= 0) {
        VAR_3 = VAR_1[VAR_7][VAR_6] + VAR_1[VAR_5-1][VAR_4-1] - VAR_1[VAR_7][VAR_4-1] - VAR_1[VAR_5-1][VAR_6];
    } else if (VAR_4-1 >= 0) {
        VAR_3 = VAR_1[VAR_7][VAR_6] - VAR_1[VAR_7][VAR_4-1];
    } else if (VAR_5-1 >= 0) {
        VAR_3 = VAR_1[VAR_7][VAR_6] - VAR_1[VAR_5-1][VAR_6];
    } else {
        VAR_3 = VAR_1[VAR_7][VAR_6];
    }
    return VAR_3;
}
