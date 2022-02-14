
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {unsigned int len; } ;
struct TYPE_7__ {int const* buffer; } ;
struct TYPE_8__ {TYPE_1__ gb; } ;
typedef TYPE_2__ PNGDecContext ;
typedef int AVDictionary ;
typedef TYPE_3__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,char**) ;
 int FUNC_2 (int **,int const*,int const*,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (TYPE_3__*,int const*,int const*) ;
 int const* FUNC_5 (int const*,unsigned int) ;
 int const* FUNC_6 (int const*,int ,int) ;

__attribute__((used)) static int FUNC_7(PNGDecContext *VAR_4, uint32_t VAR_5, int VAR_6,
                             AVDictionary **VAR_7)
{
    int VAR_8, VAR_9;
    const uint8_t *VAR_10 = VAR_4->gb.buffer;
    const uint8_t *VAR_11 = VAR_10 + VAR_5;
    const uint8_t *VAR_12 = VAR_10;
    const uint8_t *VAR_13 = FUNC_6(VAR_12, 0, VAR_11 - VAR_12);
    uint8_t *VAR_14 = ((void*)0), *VAR_15, *VAR_16 = ((void*)0);
    unsigned VAR_17;
    AVBPrint VAR_18;

    if (!VAR_13)
        return VAR_0;
    VAR_10 = VAR_13 + 1;

    if (VAR_6) {
        if (VAR_10 == VAR_11)
            return VAR_0;
        VAR_9 = *(VAR_10++);
        if (VAR_9)
            return VAR_0;
        if ((VAR_8 = FUNC_4(&VAR_18, VAR_10, VAR_11)) < 0)
            return VAR_8;
        VAR_17 = VAR_18.len;
        VAR_8 = FUNC_1(&VAR_18, (char **)&VAR_15);
        if (VAR_8 < 0)
            return VAR_8;
    } else {
        VAR_15 = (uint8_t *)VAR_10;
        VAR_17 = VAR_11 - VAR_15;
    }

    VAR_14 = FUNC_5(VAR_12, VAR_13 - VAR_12);
    VAR_16 = FUNC_5(VAR_15, VAR_17);
    if (VAR_15 != VAR_10)
        FUNC_3(VAR_15);
    if (!(VAR_14 && VAR_16)) {
        FUNC_3(VAR_14);
        FUNC_3(VAR_16);
        return FUNC_0(VAR_3);
    }

    FUNC_2(VAR_7, VAR_14, VAR_16,
                VAR_1 | VAR_2);
    return 0;
}
