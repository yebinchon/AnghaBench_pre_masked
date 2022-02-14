
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int blocksize; int flags; int initial; int final; scalar_t__ crc; scalar_t__ samples; scalar_t__ block_idx; scalar_t__ total_samples; int version; } ;
typedef TYPE_1__ WvHeader ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (char,char,char,char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

int FUNC_4(WvHeader *VAR_4, const uint8_t *VAR_5)
{
    FUNC_3(VAR_4, 0, sizeof(*VAR_4));

    if (FUNC_1(VAR_5) != FUNC_2('w', 'v', 'p', 'k'))
        return VAR_0;

    VAR_4->blocksize = FUNC_1(VAR_5 + 4);
    if (VAR_4->blocksize < 24 || VAR_4->blocksize > VAR_1)
        return VAR_0;
    VAR_4->blocksize -= 24;

    VAR_4->version = FUNC_0(VAR_5 + 8);
    VAR_4->total_samples = FUNC_1(VAR_5 + 12);
    VAR_4->block_idx = FUNC_1(VAR_5 + 16);
    VAR_4->samples = FUNC_1(VAR_5 + 20);
    VAR_4->flags = FUNC_1(VAR_5 + 24);
    VAR_4->crc = FUNC_1(VAR_5 + 28);

    VAR_4->initial = !!(VAR_4->flags & VAR_3);
    VAR_4->final = !!(VAR_4->flags & VAR_2);

    return 0;
}
