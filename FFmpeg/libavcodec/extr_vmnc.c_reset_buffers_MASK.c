
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cur_hy; scalar_t__ cur_hx; scalar_t__ cur_h; scalar_t__ cur_w; int screendta; int curmask; int curbits; } ;
typedef TYPE_1__ VmncContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(VmncContext *VAR_0)
{
    FUNC_0(&VAR_0->curbits);
    FUNC_0(&VAR_0->curmask);
    FUNC_0(&VAR_0->screendta);
    VAR_0->cur_w = VAR_0->cur_h = 0;
    VAR_0->cur_hx = VAR_0->cur_hy = 0;

}
