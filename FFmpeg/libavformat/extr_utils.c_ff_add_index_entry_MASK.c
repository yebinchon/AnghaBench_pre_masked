
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ timestamp; scalar_t__ pos; int min_distance; int size; int flags; } ;
typedef TYPE_1__ AVIndexEntry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,unsigned int*,int) ;
 int FUNC_3 (TYPE_1__*,int,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,int) ;

int FUNC_6(AVIndexEntry **VAR_5,
                       int *VAR_6,
                       unsigned int *VAR_7,
                       int64_t VAR_8, int64_t VAR_9,
                       int VAR_10, int VAR_11, int VAR_12)
{
    AVIndexEntry *VAR_13, *VAR_14;
    int VAR_15;

    if ((unsigned) *VAR_6 + 1 >= VAR_4 / sizeof(AVIndexEntry))
        return -1;

    if (VAR_9 == VAR_1)
        return FUNC_0(VAR_2);

    if (VAR_10 < 0 || VAR_10 > 0x3FFFFFFF)
        return FUNC_0(VAR_2);

    if (FUNC_4(VAR_9))
        VAR_9 -= VAR_3;

    VAR_13 = FUNC_2(*VAR_5,
                              VAR_7,
                              (*VAR_6 + 1) *
                              sizeof(AVIndexEntry));
    if (!VAR_13)
        return -1;

    *VAR_5 = VAR_13;

    VAR_15 = FUNC_3(*VAR_5, *VAR_6,
                                      VAR_9, VAR_0);

    if (VAR_15 < 0) {
        VAR_15 = (*VAR_6)++;
        VAR_14 = &VAR_13[VAR_15];
        FUNC_1(VAR_15 == 0 || VAR_14[-1].timestamp < VAR_9);
    } else {
        VAR_14 = &VAR_13[VAR_15];
        if (VAR_14->timestamp != VAR_9) {
            if (VAR_14->timestamp <= VAR_9)
                return -1;
            FUNC_5(VAR_13 + VAR_15 + 1, VAR_13 + VAR_15,
                    sizeof(AVIndexEntry) * (*VAR_6 - VAR_15));
            (*VAR_6)++;
        } else if (VAR_14->pos == VAR_8 && VAR_11 < VAR_14->min_distance)

            VAR_11 = VAR_14->min_distance;
    }

    VAR_14->pos = VAR_8;
    VAR_14->timestamp = VAR_9;
    VAR_14->min_distance = VAR_11;
    VAR_14->size = VAR_10;
    VAR_14->flags = VAR_12;

    return VAR_15;
}
