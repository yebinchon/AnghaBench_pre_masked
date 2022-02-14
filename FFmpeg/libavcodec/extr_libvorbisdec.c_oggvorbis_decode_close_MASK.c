
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int vc; int vi; int vd; int vb; } ;
typedef TYPE_1__ OggVorbisDecContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_0) {
    OggVorbisDecContext *VAR_1 = VAR_0->priv_data ;

    FUNC_0(&VAR_1->vb);
    FUNC_2(&VAR_1->vd);
    FUNC_3(&VAR_1->vi) ;
    FUNC_1(&VAR_1->vc) ;

    return 0 ;
}
