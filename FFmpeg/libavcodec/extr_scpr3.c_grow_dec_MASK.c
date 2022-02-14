
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; int * cnts; } ;
typedef TYPE_1__ PixelModel3 ;



__attribute__((used)) static void FUNC_0(PixelModel3 *VAR_0)
{
    int VAR_1;

    VAR_1 = 2 * VAR_0->length;
    VAR_0->cnts[2 * VAR_0->length] = VAR_0->cnts[VAR_0->length];
    VAR_0->length = VAR_1;
}
