
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int* UID ;
struct TYPE_3__ {size_t wrapping_indicator_pos; int wrapping_indicator_type; int * uid; } ;
typedef int MXFWrappingScheme ;
typedef TYPE_1__ MXFCodecUL ;


 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ,int**) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static MXFWrappingScheme FUNC_1(UID *VAR_6)
{
    int VAR_7;
    const MXFCodecUL *VAR_8;

    VAR_8 = FUNC_0(VAR_4, VAR_6);
    if (!VAR_8->uid[0])
        VAR_8 = FUNC_0(VAR_5, VAR_6);
    if (!VAR_8->uid[0])
        VAR_8 = FUNC_0(VAR_3, VAR_6);
    if (!VAR_8->uid[0] || !VAR_8->wrapping_indicator_pos)
        return VAR_2;

    VAR_7 = (*VAR_6)[VAR_8->wrapping_indicator_pos];
    switch (VAR_8->wrapping_indicator_type) {
        case 128:
            VAR_7 = VAR_7 % 4;
            break;
        case 129:
            if (VAR_7 == 0x03 || VAR_7 == 0x04)
                VAR_7 -= 0x02;
            break;
        case 130:
            if (VAR_7 == 0x02)
                VAR_7 = 0x01;
            break;
    }
    if (VAR_7 == 0x01)
        return VAR_1;
    if (VAR_7 == 0x02)
        return VAR_0;
    return VAR_2;
}
