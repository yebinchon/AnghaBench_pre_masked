
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int c; int w; int h; int inputs; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int list ;
struct TYPE_7__ {int out_c; int c; int out_w; int w; int out_h; int h; } ;
typedef TYPE_2__ layer ;
typedef int ACTIVATION ;


 int FUNC_0 (char*) ;
 TYPE_2__ FUNC_1 (int ,int ,int ) ;
 char* FUNC_2 (int *,char*,char*) ;

layer FUNC_3(list *VAR_0, size_params VAR_1)
{
    char *VAR_2 = FUNC_2(VAR_0, "activation", "linear");
    ACTIVATION VAR_3 = FUNC_0(VAR_2);

    layer VAR_4 = FUNC_1(VAR_1.batch, VAR_1.inputs, VAR_3);

    VAR_4.h = VAR_4.out_h = VAR_1.h;
    VAR_4.w = VAR_4.out_w = VAR_1.w;
    VAR_4.c = VAR_4.out_c = VAR_1.c;

    return VAR_4;
}
