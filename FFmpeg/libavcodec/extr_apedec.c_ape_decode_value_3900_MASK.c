
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int fileversion; int avctx; } ;
struct TYPE_8__ {int k; } ;
typedef TYPE_1__ APERice ;
typedef TYPE_2__ APEContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int) ;
 unsigned int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static inline int FUNC_4(APEContext *VAR_5, APERice *VAR_6)
{
    unsigned int VAR_7, VAR_8;
    int VAR_9;

    VAR_8 = FUNC_2(VAR_5, VAR_3, VAR_4);

    if (VAR_8 == (VAR_2 - 1)) {
        VAR_9 = FUNC_1(VAR_5, 5);
        VAR_8 = 0;
    } else
        VAR_9 = (VAR_6->k < 1) ? 0 : VAR_6->k - 1;

    if (VAR_9 <= 16 || VAR_5->fileversion < 3910) {
        if (VAR_9 > 23) {
            FUNC_0(VAR_5->avctx, VAR_1, "Too many bits: %d\n", VAR_9);
            return VAR_0;
        }
        VAR_7 = FUNC_1(VAR_5, VAR_9);
    } else if (VAR_9 <= 31) {
        VAR_7 = FUNC_1(VAR_5, 16);
        VAR_7 |= (FUNC_1(VAR_5, VAR_9 - 16) << 16);
    } else {
        FUNC_0(VAR_5->avctx, VAR_1, "Too many bits: %d\n", VAR_9);
        return VAR_0;
    }
    VAR_7 += VAR_8 << VAR_9;

    FUNC_3(VAR_6, VAR_7);


    return ((VAR_7 >> 1) ^ ((VAR_7 & 1) - 1)) + 1;
}
