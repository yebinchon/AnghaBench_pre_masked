
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int alpha; int dc; } ;
struct TYPE_7__ {int* rgba; } ;
typedef TYPE_1__ FFDrawColor ;
typedef TYPE_2__ DrawTextContext ;


 int FUNC_0 (int *,TYPE_1__*,int*) ;

__attribute__((used)) static void FUNC_1(DrawTextContext *VAR_0, FFDrawColor *VAR_1, const FFDrawColor VAR_2)
{
    *VAR_1 = VAR_2;
    VAR_1->rgba[3] = (VAR_1->rgba[3] * VAR_0->alpha) / 255;
    FUNC_0(&VAR_0->dc, VAR_1, VAR_1->rgba);
}
