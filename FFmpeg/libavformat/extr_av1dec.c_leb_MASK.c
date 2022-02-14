
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef unsigned int uint32_t ;
struct TYPE_4__ {int error; scalar_t__ eof_reached; } ;
typedef TYPE_1__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(AVIOContext *VAR_2, uint32_t *VAR_3) {
    int VAR_4, VAR_5 = 0;
    uint8_t VAR_6;
    *VAR_3 = 0;
    do {
        unsigned VAR_7;
        VAR_6 = FUNC_1(VAR_2);
        VAR_4 = VAR_6 & 0x80;
        VAR_7 = VAR_6 & 0x7f;
        if (VAR_5 <= 3 || (VAR_5 == 4 && VAR_7 < (1 << 4)))
            *VAR_3 |= VAR_7 << (VAR_5 * 7);
        else if (VAR_7)
            return VAR_0;
        if (++VAR_5 == 8 && VAR_4)
            return VAR_0;
        if (VAR_2->eof_reached || VAR_2->error)
            return VAR_2->error ? VAR_2->error : FUNC_0(VAR_1);
    } while (VAR_4);
    return VAR_5;
}
