
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {scalar_t__ tex_size; int tex_data; int gbc; } ;
typedef int GetByteContext ;
typedef TYPE_1__ DXVContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_1)
{
    DXVContext *VAR_2 = VAR_1->priv_data;
    GetByteContext *VAR_3 = &VAR_2->gbc;

    if (FUNC_1(VAR_3) < VAR_2->tex_size)
        return VAR_0;

    FUNC_0(VAR_3, VAR_2->tex_data, VAR_2->tex_size);
    return 0;
}
