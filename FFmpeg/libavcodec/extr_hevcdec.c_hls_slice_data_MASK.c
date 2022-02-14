
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* execute ) (TYPE_2__*,int ,int*,int*,int,int) ;} ;
struct TYPE_4__ {TYPE_2__* avctx; } ;
typedef TYPE_1__ HEVCContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int*,int*,int,int) ;

__attribute__((used)) static int FUNC_1(HEVCContext *VAR_1)
{
    int VAR_2[2];
    int VAR_3[2];

    VAR_2[0] = 0;
    VAR_2[1] = 1;

    VAR_1->avctx->execute(VAR_1->avctx, VAR_0, VAR_2, VAR_3 , 1, sizeof(int));
    return VAR_3[0];
}
