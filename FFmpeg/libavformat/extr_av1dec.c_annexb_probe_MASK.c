
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ error; scalar_t__ eof_reached; } ;
struct TYPE_7__ {int buf_size; int buf; } ;
typedef TYPE_1__ AVProbeData ;
typedef TYPE_2__ AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,int *,int *,int *,int *) ;
 int FUNC_3 (TYPE_2__*,scalar_t__*) ;
 int FUNC_4 (int ,int ,scalar_t__*,int*) ;

__attribute__((used)) static int FUNC_5(const AVProbeData *VAR_6)
{
    AVIOContext VAR_7;
    int64_t VAR_8;
    uint32_t VAR_9, VAR_10, VAR_11;
    int VAR_12 = 0, VAR_13 = 0;
    int VAR_14, VAR_15, VAR_16 = 0;

    FUNC_2(&VAR_7, VAR_6->buf, VAR_6->buf_size, 0,
                      ((void*)0), ((void*)0), ((void*)0), ((void*)0));

    VAR_14 = FUNC_3(&VAR_7, &VAR_9);
    if (VAR_14 < 0)
        return 0;
    VAR_16 += VAR_14;
    VAR_14 = FUNC_3(&VAR_7, &VAR_10);
    if (VAR_14 < 0 || ((int64_t)VAR_10 + VAR_14) > VAR_9)
        return 0;
    VAR_16 += VAR_14;
    VAR_9 -= VAR_14;
    VAR_14 = FUNC_3(&VAR_7, &VAR_11);
    if (VAR_14 < 0 || ((int64_t)VAR_11 + VAR_14) >= VAR_10)
        return 0;
    VAR_16 += VAR_14;

    VAR_9 -= VAR_11 + VAR_14;
    VAR_10 -= VAR_11 + VAR_14;

    FUNC_1(&VAR_7, VAR_11);
    if (VAR_7.eof_reached || VAR_7.error)
        return 0;


    VAR_14 = FUNC_4(VAR_6->buf + VAR_16, FUNC_0(VAR_6->buf_size - VAR_16, VAR_11), &VAR_8, &VAR_15);
    if (VAR_14 < 0 || VAR_15 != VAR_3 || VAR_8 > 0)
        return 0;
    VAR_16 += VAR_11;

    do {
        VAR_14 = FUNC_3(&VAR_7, &VAR_11);
        if (VAR_14 < 0 || ((int64_t)VAR_11 + VAR_14) > VAR_10)
            return 0;
        VAR_16 += VAR_14;

        FUNC_1(&VAR_7, VAR_11);
        if (VAR_7.eof_reached || VAR_7.error)
            return 0;

        VAR_14 = FUNC_4(VAR_6->buf + VAR_16, FUNC_0(VAR_6->buf_size - VAR_16, VAR_11), &VAR_8, &VAR_15);
        if (VAR_14 < 0)
            return 0;
        VAR_16 += VAR_11;

        if (VAR_15 == VAR_2)
            VAR_12 = 1;
        if (VAR_15 == VAR_0 || VAR_15 == VAR_1) {
            if (VAR_13 || !VAR_12)
                return 0;
            VAR_13 = 1;
            break;
        }
        if (VAR_15 == VAR_4 && !VAR_13)
            return 0;

        VAR_9 -= VAR_11 + VAR_14;
        VAR_10 -= VAR_11 + VAR_14;
    } while (!VAR_13 && VAR_10);

    return VAR_13 ? VAR_5 + 1 : 0;
}
