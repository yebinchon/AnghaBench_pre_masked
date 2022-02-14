
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* codecpar; TYPE_2__* priv_data; } ;
struct TYPE_6__ {int first_gop_closed; int p_per_gop; int b_per_i_or_p; } ;
struct TYPE_5__ {scalar_t__ format; scalar_t__ codec_id; } ;
typedef TYPE_2__ GXFStreamContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1(AVIOContext *VAR_3, AVStream *VAR_4)
{
    GXFStreamContext *VAR_5 = VAR_4->priv_data;

    if (VAR_4->codecpar->format == VAR_2)
        FUNC_0(VAR_3, 2);
    else
        FUNC_0(VAR_3, 1);
    FUNC_0(VAR_3, VAR_5->first_gop_closed == 1);
    FUNC_0(VAR_3, 3);
    FUNC_0(VAR_3, 1);
    FUNC_0(VAR_3, VAR_5->p_per_gop);
    FUNC_0(VAR_3, VAR_5->b_per_i_or_p);
    if (VAR_4->codecpar->codec_id == VAR_1)
        FUNC_0(VAR_3, 2);
    else if (VAR_4->codecpar->codec_id == VAR_0)
        FUNC_0(VAR_3, 1);
    else
        FUNC_0(VAR_3, 0);
    FUNC_0(VAR_3, 0);
    return 32;
}
