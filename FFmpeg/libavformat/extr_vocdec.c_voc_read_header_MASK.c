
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ remaining_size; } ;
typedef TYPE_1__ VocDecContext ;
struct TYPE_6__ {int ctx_flags; int * pb; TYPE_1__* priv_data; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_3)
{
    VocDecContext *VAR_4 = VAR_3->priv_data;
    AVIOContext *VAR_5 = VAR_3->pb;
    int VAR_6;

    FUNC_3(VAR_5, 20);
    VAR_6 = FUNC_2(VAR_5) - 22;
    if (VAR_6 != 4) {
        FUNC_1(VAR_3, VAR_1, "unknown header size: %d\n", VAR_6);
        return FUNC_0(VAR_2);
    }
    FUNC_3(VAR_5, VAR_6);

    VAR_3->ctx_flags |= VAR_0;

    VAR_4->remaining_size = 0;
    return 0;
}
