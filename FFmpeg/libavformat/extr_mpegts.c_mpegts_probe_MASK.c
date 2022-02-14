
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_size; scalar_t__ buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int) ;
 int VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,int const,int const,int) ;
 int FUNC_4 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_5(const AVProbeData *VAR_6)
{
    const int VAR_7 = VAR_6->buf_size;
    int VAR_8 = 0;
    int VAR_9 = 0;
    int VAR_10;
    int VAR_11 = VAR_7 / VAR_4;



    if (!VAR_11)
        return 0;

    for (VAR_10 = 0; VAR_10<VAR_11; VAR_10+=100) {
        int VAR_12 = FUNC_2(VAR_11 - VAR_10, 100);
        int VAR_13 = FUNC_3(VAR_6->buf + VAR_5 *VAR_10, VAR_5 *VAR_12, VAR_5 , 1);
        int VAR_14 = FUNC_3(VAR_6->buf + VAR_3*VAR_10, VAR_3*VAR_12, VAR_3, 1);
        int VAR_15 = FUNC_3(VAR_6->buf + VAR_4 *VAR_10, VAR_4 *VAR_12, VAR_4 , 1);
        VAR_13 = FUNC_1(VAR_13, VAR_14, VAR_15);
        VAR_9 += VAR_13;
        VAR_8 = FUNC_0(VAR_8, VAR_13);
    }

    VAR_9 = VAR_9 * 10 / VAR_11;
    VAR_8 = VAR_8 * 10 / 100;

    FUNC_4(0, "TS score: %d %d\n", VAR_9, VAR_8);

    if (VAR_11 > 10 && VAR_9 > 6) {
        return VAR_0 + VAR_9 - 10;
    } else if (VAR_11 >= 10 && VAR_9 > 6) {
        return VAR_0/2 + VAR_9 - 10;
    } else if (VAR_11 >= 10 && VAR_8 > 6) {
        return VAR_0/2 + VAR_9 - 10;
    } else if (VAR_9 > 6) {
        return 2;
    } else {
        return 0;
    }
}
