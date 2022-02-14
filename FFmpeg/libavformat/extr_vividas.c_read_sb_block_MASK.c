
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint32_t ;
typedef int AVIOContext ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int *,char*,unsigned int) ;
 int FUNC_3 (char*,char*,unsigned int,int ,int *,int ) ;
 unsigned int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (char*,unsigned int) ;

__attribute__((used)) static uint8_t *FUNC_7(AVIOContext *VAR_0, unsigned *VAR_1,
                              uint32_t *VAR_2, unsigned VAR_3)
{
    uint8_t *VAR_4;
    uint8_t VAR_5[8], VAR_6[8];
    uint32_t VAR_7;
    unsigned VAR_8;

    if (FUNC_2(VAR_0, VAR_5, 8) < 8)
        return ((void*)0);

    VAR_7 = *VAR_2;
    FUNC_3(VAR_5, VAR_6, 8, *VAR_2, &VAR_7, 0);

    VAR_8 = FUNC_4(VAR_6+2, 6);

    if (VAR_6[0] != 'S' || VAR_6[1] != 'B' || (VAR_3>0 && VAR_8 != VAR_3)) {
        uint32_t VAR_9 = FUNC_6(VAR_5, VAR_3);
        VAR_7 = VAR_9;
        FUNC_3(VAR_5, VAR_6, 8, VAR_9, &VAR_7, 0);
        VAR_8 = FUNC_4(VAR_6+2, 6);
        if (VAR_6[0] != 'S' || VAR_6[1] != 'B' || VAR_3 != VAR_8)
            return ((void*)0);
        *VAR_2 = VAR_9;
    }

    if (VAR_8 < 8)
        return ((void*)0);

    VAR_4 = FUNC_1(VAR_8);
    if (!VAR_4)
        return ((void*)0);

    FUNC_5(VAR_4, VAR_6, 8);

    *VAR_1 = VAR_8;
    VAR_8 -= 8;

    if (FUNC_2(VAR_0, VAR_4+8, VAR_8) < VAR_8) {
        FUNC_0(VAR_4);
        return ((void*)0);
    }

    FUNC_3(VAR_4 + 8, VAR_4 + 8, VAR_8, *VAR_2, &VAR_7, 0);

    return VAR_4;
}
