
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int refs; int w; } ;
typedef TYPE_1__ File ;


 int FUNC_0 (int ) ;

void
FUNC_1(File *VAR_0)
{
    if (!VAR_0) return;
    VAR_0->refs--;
    if (VAR_0->refs < 1) {
        FUNC_0(VAR_0->w);
    }
}
