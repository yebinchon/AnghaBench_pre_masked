
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_8__ {int extradata; } ;
struct TYPE_7__ {TYPE_5__* codecpar; } ;
struct TYPE_6__ {char subpkts_per_block; int block_size; int block_type; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVStream ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (int ,char const*,unsigned int) ;

__attribute__((used)) static int FUNC_7(PayloadContext *VAR_3, AVStream *VAR_4,
                             const uint8_t *VAR_5, const uint8_t *VAR_6)
{
    const uint8_t *VAR_7 = VAR_5;

    while (VAR_6 - VAR_7 >= 2) {
        unsigned int VAR_8 = VAR_7[0], VAR_9 = VAR_7[1];

        if (VAR_8 < 2 || VAR_6 - VAR_7 < VAR_8 || VAR_9 > 4)
            return VAR_0;

        switch (VAR_9) {
            case 0:
                return VAR_7 - VAR_5 + VAR_8;
            case 1:

                break;
            case 2:
                if (VAR_8 < 3)
                    return VAR_0;
                VAR_3->subpkts_per_block = VAR_7[2];
                break;
            case 3:
                if (VAR_8 < 4)
                    return VAR_0;
                VAR_3->block_type = FUNC_1(VAR_7 + 2);
                break;
            case 4:
                if (VAR_8 < 30)
                    return VAR_0;
                FUNC_4(&VAR_4->codecpar->extradata);
                if (FUNC_5(VAR_4->codecpar, 26 + VAR_8)) {
                    return FUNC_0(VAR_2);
                }
                FUNC_3(VAR_4->codecpar->extradata, 12);
                FUNC_6(VAR_4->codecpar->extradata + 4, "frma", 4);
                FUNC_6(VAR_4->codecpar->extradata + 8, "QDM2", 4);
                FUNC_3(VAR_4->codecpar->extradata + 12, 6 + VAR_8);
                FUNC_6(VAR_4->codecpar->extradata + 16, "QDCA", 4);
                FUNC_6(VAR_4->codecpar->extradata + 20, VAR_7 + 2, VAR_8 - 2);
                FUNC_3(VAR_4->codecpar->extradata + 18 + VAR_8, 8);
                FUNC_3(VAR_4->codecpar->extradata + 22 + VAR_8, 0);

                VAR_3->block_size = FUNC_2(VAR_7 + 26);
                break;
        }

        VAR_7 += VAR_8;
    }

    return FUNC_0(VAR_1);
}
