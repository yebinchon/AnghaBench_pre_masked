
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int block ;
struct TYPE_4__ {int table; } ;
struct TYPE_3__ {int table; } ;
typedef int SHQContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int ,int *,int ,int ,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int*,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static inline int FUNC_6(const SHQContext *VAR_5, GetBitContext *VAR_6, uint8_t VAR_7[16], uint8_t *VAR_8, int VAR_9)
{
    uint8_t VAR_10[128];
    int VAR_11 = 0, VAR_12, VAR_13;

    FUNC_5(VAR_10, 0, sizeof(VAR_10));

    {
        FUNC_2(VAR_4, VAR_6);

        for ( ;; ) {
            int VAR_14, VAR_15;

            FUNC_3(VAR_4, VAR_6);
            FUNC_1(VAR_14, VAR_4, VAR_6, VAR_3.table, VAR_0, 2);

            if (VAR_14 < 0) break;
            VAR_11 += VAR_14;
            if (VAR_11 >= 128)
                return VAR_1;

            FUNC_3(VAR_4, VAR_6);
            FUNC_1(VAR_15, VAR_4, VAR_6, VAR_2.table, VAR_0, 2);
            VAR_10[VAR_11++] = VAR_15;
        }

        FUNC_0(VAR_4, VAR_6);
    }

    for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
        for (VAR_12 = 0; VAR_12 < 16; VAR_12++) {
            VAR_7[VAR_12] -= VAR_10[VAR_13 * 16 + VAR_12];
        }
        FUNC_4(VAR_8, VAR_7, 16);
        VAR_8 += VAR_9;
    }

    return 0;
}
