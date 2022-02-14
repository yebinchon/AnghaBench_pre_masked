
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ VABufferID ;
struct TYPE_6__ {TYPE_1__* hwctx; } ;
typedef TYPE_2__ VAAPIEncodeContext ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
struct TYPE_5__ {int display; } ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,char*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void *VAR_1,
                                            uint8_t *VAR_2)
{
    AVCodecContext *VAR_3 = VAR_1;
    VAAPIEncodeContext *VAR_4 = VAR_3->priv_data;
    VABufferID VAR_5;

    VAR_5 = (VABufferID)(uintptr_t)VAR_2;

    FUNC_1(VAR_4->hwctx->display, VAR_5);

    FUNC_0(VAR_3, VAR_0, "Freed output buffer %#x\n", VAR_5);
}
