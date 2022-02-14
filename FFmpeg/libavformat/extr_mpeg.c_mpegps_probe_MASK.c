
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int buf_size; int* buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*,int*) ;

__attribute__((used)) static int FUNC_2(const AVProbeData *VAR_6)
{
    uint32_t VAR_7 = -1;
    int VAR_8;
    int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
    int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
    int VAR_16 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_6->buf_size; VAR_8++) {
        VAR_7 = (VAR_7 << 8) + VAR_6->buf[VAR_8];
        if ((VAR_7 & 0xffffff00) == 0x100) {
            int VAR_17 = VAR_6->buf[VAR_8 + 1] << 8 | VAR_6->buf[VAR_8 + 2];
            int VAR_18 = VAR_16 <= VAR_8 && FUNC_1(VAR_6->buf + VAR_8, VAR_6->buf + VAR_6->buf_size);
            int VAR_19 = FUNC_0(VAR_6->buf + VAR_8);

            if (VAR_7 == VAR_4)
                VAR_9++;
            else if (VAR_7 == VAR_2 && VAR_19)
                VAR_10++;
            else if ((VAR_7 & 0xf0) == VAR_5 && VAR_18) {
                VAR_16 = VAR_8 + VAR_17;
                VAR_12++;
            }


            else if ((VAR_7 & 0xe0) == VAR_0 && VAR_18) {VAR_13++; VAR_8+=VAR_17;}
            else if (VAR_7 == VAR_3 && VAR_18) {VAR_11++; VAR_8+=VAR_17;}
            else if (VAR_7 == 0x1fd && VAR_18) VAR_12++;

            else if ((VAR_7 & 0xf0) == VAR_5 && !VAR_18) VAR_14++;
            else if ((VAR_7 & 0xe0) == VAR_0 && !VAR_18) VAR_14++;
            else if (VAR_7 == VAR_3 && !VAR_18) VAR_14++;
        }
    }

    if (VAR_12 + VAR_13 > VAR_14 + 1)
        VAR_15 = VAR_1 / 2;




    if (VAR_9 > VAR_14 && VAR_9 * 9 <= VAR_10 * 10)
        return (VAR_13 > 12 || VAR_12 > 3 || VAR_10 > 2) ? VAR_1 + 2
                                                     : VAR_1 / 2 + 1;
    if (VAR_10 > VAR_14 && (VAR_11 + VAR_12 + VAR_13) * 10 >= VAR_10 * 9)
        return VAR_10 > 2 ? VAR_1 + 2
                          : VAR_1 / 2;
    if ((!!VAR_12 ^ !!VAR_13) && (VAR_13 > 4 || VAR_12 > 1) && !VAR_9 &&
        !VAR_10 && VAR_6->buf_size > 2048 && VAR_12 + VAR_13 > VAR_14)
        return (VAR_13 > 12 || VAR_12 > 6 + 2 * VAR_14) ? VAR_1 + 2
                                                     : VAR_1 / 2;




    return VAR_15;
}
