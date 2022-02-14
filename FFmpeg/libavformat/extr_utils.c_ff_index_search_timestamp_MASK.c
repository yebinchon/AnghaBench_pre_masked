
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ timestamp; int flags; } ;
typedef TYPE_1__ AVIndexEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(const AVIndexEntry *VAR_4, int VAR_5,
                              int64_t VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    int64_t VAR_11;

    VAR_8 = -1;
    VAR_9 = VAR_5;


    if (VAR_9 && VAR_4[VAR_9 - 1].timestamp < VAR_6)
        VAR_8 = VAR_9 - 1;

    while (VAR_9 - VAR_8 > 1) {
        VAR_10 = (VAR_8 + VAR_9) >> 1;


        while ((VAR_4[VAR_10].flags & VAR_0) && VAR_10 < VAR_9 && VAR_10 < VAR_5 - 1) {
            VAR_10++;
            if (VAR_10 == VAR_9 && VAR_4[VAR_10].timestamp >= VAR_6) {
                VAR_10 = VAR_9 - 1;
                break;
            }
        }

        VAR_11 = VAR_4[VAR_10].timestamp;
        if (VAR_11 >= VAR_6)
            VAR_9 = VAR_10;
        if (VAR_11 <= VAR_6)
            VAR_8 = VAR_10;
    }
    VAR_10 = (VAR_7 & VAR_3) ? VAR_8 : VAR_9;

    if (!(VAR_7 & VAR_2))
        while (VAR_10 >= 0 && VAR_10 < VAR_5 &&
               !(VAR_4[VAR_10].flags & VAR_1))
            VAR_10 += (VAR_7 & VAR_3) ? -1 : 1;

    if (VAR_10 == VAR_5)
        return -1;
    return VAR_10;
}
