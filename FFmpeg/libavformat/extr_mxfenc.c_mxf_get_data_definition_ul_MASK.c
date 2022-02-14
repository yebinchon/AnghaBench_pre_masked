
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; scalar_t__* uid; } ;
typedef TYPE_1__ MXFCodecUL ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static const MXFCodecUL *FUNC_0(int VAR_1)
{
    const MXFCodecUL *VAR_2 = VAR_0;
    while (VAR_2->uid[0]) {
        if (VAR_1 == VAR_2->id)
            break;
        VAR_2++;
    }
    return VAR_2;
}
