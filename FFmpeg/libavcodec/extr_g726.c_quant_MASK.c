
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int* quant; } ;
struct TYPE_5__ {int y; int code_size; TYPE_1__ tbls; } ;
typedef TYPE_2__ G726Context ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline uint8_t FUNC_1(G726Context* VAR_1, int VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6;

    VAR_3 = VAR_5 = 0;
    if (VAR_2 < 0) {
        VAR_3 = 1;
        VAR_2 = -VAR_2;
    }
    VAR_4 = FUNC_0(VAR_2);
    VAR_6 = ((VAR_4<<7) + (((VAR_2<<7)>>VAR_4)&0x7f)) - (VAR_1->y>>2);

    while (VAR_1->tbls.quant[VAR_5] < VAR_0 && VAR_1->tbls.quant[VAR_5] < VAR_6)
        ++VAR_5;

    if (VAR_3)
        VAR_5 = ~VAR_5;
    if (VAR_1->code_size != 2 && VAR_5 == 0)
        VAR_5 = 0xff;

    return VAR_5;
}
