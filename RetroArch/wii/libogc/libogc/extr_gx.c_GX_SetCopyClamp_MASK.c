
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int dispCopyCntrl; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(u8 VAR_1)
{
 VAR_0->dispCopyCntrl = (VAR_0->dispCopyCntrl&~1)|(VAR_1&1);
 VAR_0->dispCopyCntrl = (VAR_0->dispCopyCntrl&~2)|(VAR_1&2);
}
