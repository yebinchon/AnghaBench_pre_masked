
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {TYPE_1__* frame; int g; } ;
struct TYPE_4__ {int palette_has_changed; scalar_t__* data; } ;
typedef TYPE_2__ BethsoftvidContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(BethsoftvidContext *VAR_1)
{
    uint32_t *VAR_2 = (uint32_t *)VAR_1->frame->data[1];
    int VAR_3;

    if (FUNC_1(&VAR_1->g) < 256*3)
        return VAR_0;

    for(VAR_3 = 0; VAR_3 < 256; VAR_3++){
        VAR_2[VAR_3] = 0xFFU << 24 | FUNC_0(&VAR_1->g) * 4;
        VAR_2[VAR_3] |= VAR_2[VAR_3] >> 6 & 0x30303;
    }
    VAR_1->frame->palette_has_changed = 1;
    return 0;
}
