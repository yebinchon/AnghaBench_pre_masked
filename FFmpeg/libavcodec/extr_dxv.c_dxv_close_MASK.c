
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int * op_data; int ctex_data; int tex_data; } ;
typedef TYPE_1__ DXVContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0)
{
    DXVContext *VAR_1 = VAR_0->priv_data;

    FUNC_0(&VAR_1->tex_data);
    FUNC_0(&VAR_1->ctex_data);
    FUNC_0(&VAR_1->op_data[0]);
    FUNC_0(&VAR_1->op_data[1]);
    FUNC_0(&VAR_1->op_data[2]);
    FUNC_0(&VAR_1->op_data[3]);

    return 0;
}
