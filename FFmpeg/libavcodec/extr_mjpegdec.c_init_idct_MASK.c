
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int idct_permutation; } ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int scantable; TYPE_4__ idsp; } ;
typedef TYPE_1__ MJpegDecodeContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_1)
{
    MJpegDecodeContext *VAR_2 = VAR_1->priv_data;

    FUNC_0(&VAR_2->idsp, VAR_1);
    FUNC_1(VAR_2->idsp.idct_permutation, &VAR_2->scantable,
                      VAR_0);
}
