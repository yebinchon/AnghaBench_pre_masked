
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int table; } ;
typedef int GetBitContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,int *,unsigned int*,int**,int const*,int*) ;
 unsigned int FUNC_2 (int *,int ,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_3, GetBitContext *VAR_4,
                                 unsigned int VAR_5, int *VAR_6,
                                 const int *VAR_7)
{
    int VAR_8 = 0;
    unsigned int VAR_9 = 0;
    unsigned int VAR_10;
    for (;;) {
        VAR_10 = FUNC_2(VAR_4, VAR_2[VAR_8].table, 9, 2);
        VAR_9 += VAR_10;
        if (VAR_10 < 64) {
            *VAR_6++ = VAR_9;
            if (VAR_6 >= VAR_7) {
                FUNC_0(VAR_3, VAR_1, "Run overrun\n");
                return VAR_0;
            }
            if (VAR_5 <= VAR_9) {
                if (VAR_5 == VAR_9)
                    break;
                FUNC_0(VAR_3, VAR_1, "Run went out of bounds\n");
                return VAR_0;
            }
            VAR_5 -= VAR_9;
            VAR_9 = 0;
            VAR_8 = !VAR_8;
        } else if ((int)VAR_10 == -1) {
            if (FUNC_3(VAR_4, 12) == 15) {
                int VAR_11;
                FUNC_4(VAR_4, 12);
                VAR_11 = FUNC_1(VAR_3, VAR_4, &VAR_5, &VAR_6, VAR_7, &VAR_8);
                if (VAR_11 < 0) {
                    return VAR_11;
                } else if (VAR_11)
                    break;
            } else {
                FUNC_0(VAR_3, VAR_1, "Incorrect code\n");
                return VAR_0;
            }
        }
    }
    *VAR_6++ = 0;
    return 0;
}
