
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int * op_size; int * op_data; int ctex_size; int ctex_data; int tex_size; int tex_data; int gbc; } ;
typedef int GetByteContext ;
typedef TYPE_1__ DXVContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (TYPE_1__*,int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0)
{
    DXVContext *VAR_1 = VAR_0->priv_data;
    GetByteContext *VAR_2 = &VAR_1->gbc;
    int VAR_3;

    VAR_3 = FUNC_1(VAR_1, VAR_2, VAR_1->tex_data, VAR_1->tex_size,
                            VAR_1->op_data[0], VAR_1->op_size[0]);
    if (VAR_3 < 0)
        return VAR_3;

    return FUNC_0(VAR_1, VAR_2, VAR_1->ctex_data, VAR_1->ctex_size,
                               VAR_1->op_data[1], VAR_1->op_data[2],
                               VAR_1->op_size[1], VAR_1->op_size[2]);
}
