
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {int frame1; int frame2; } ;
typedef TYPE_1__ RASCContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_0)
{
    RASCContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    FUNC_0(VAR_1->frame1);
    FUNC_0(VAR_1->frame2);
    if ((VAR_2 = FUNC_2(VAR_0, VAR_1->frame1, 0)) < 0)
        return VAR_2;

    if ((VAR_2 = FUNC_2(VAR_0, VAR_1->frame2, 0)) < 0)
        return VAR_2;

    FUNC_1(VAR_0, VAR_1->frame2);
    FUNC_1(VAR_0, VAR_1->frame1);

    return 0;
}
