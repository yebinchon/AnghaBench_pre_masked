
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int tex_size; int tex_data; int gbc; } ;
typedef TYPE_1__ DXVContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_0)
{
    DXVContext *VAR_1 = VAR_0->priv_data;
    return FUNC_0(&VAR_1->gbc, &VAR_1->tex_data, &VAR_1->tex_size);
}
