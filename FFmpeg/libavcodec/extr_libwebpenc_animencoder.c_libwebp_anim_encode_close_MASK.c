
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_5__ {int ref; } ;
struct TYPE_6__ {int enc; TYPE_1__ cc; } ;
typedef TYPE_2__ LibWebPAnimContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0)
{
    LibWebPAnimContext *VAR_1 = VAR_0->priv_data;
    FUNC_1(&VAR_1->cc.ref);
    FUNC_0(VAR_1->enc);

    return 0;
}
