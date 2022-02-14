
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_4__ {int* iquant; } ;
struct TYPE_5__ {int y; TYPE_1__ tbls; } ;
typedef TYPE_2__ G726Context ;



__attribute__((used)) static inline int16_t FUNC_0(G726Context* VAR_0, int VAR_1)
{
    int VAR_2, VAR_3, VAR_4;

    VAR_2 = VAR_0->tbls.iquant[VAR_1] + (VAR_0->y >> 2);
    VAR_3 = (VAR_2>>7) & 0xf;
    VAR_4 = (1<<7) + (VAR_2 & 0x7f);
    return (VAR_2 < 0) ? 0 : ((VAR_4<<VAR_3) >> 7);
}
