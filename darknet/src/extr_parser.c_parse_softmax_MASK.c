
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int c; int h; int w; int inputs; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int list ;
struct TYPE_7__ {void* noloss; void* spatial; int c; int h; int w; int softmax_tree; void* temperature; } ;
typedef TYPE_2__ layer ;


 TYPE_2__ FUNC_0 (int ,int ,int) ;
 void* FUNC_1 (int *,char*,int) ;
 void* FUNC_2 (int *,char*,int) ;
 char* FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (char*) ;

layer FUNC_5(list *VAR_0, size_params VAR_1)
{
    int VAR_2 = FUNC_2(VAR_0, "groups",1);
    layer VAR_3 = FUNC_0(VAR_1.batch, VAR_1.inputs, VAR_2);
    VAR_3.temperature = FUNC_1(VAR_0, "temperature", 1);
    char *VAR_4 = FUNC_3(VAR_0, "tree", 0);
    if (VAR_4) VAR_3.softmax_tree = FUNC_4(VAR_4);
    VAR_3.w = VAR_1.w;
    VAR_3.h = VAR_1.h;
    VAR_3.c = VAR_1.c;
    VAR_3.spatial = FUNC_1(VAR_0, "spatial", 0);
    VAR_3.noloss = FUNC_2(VAR_0, "noloss", 0);
    return VAR_3;
}
