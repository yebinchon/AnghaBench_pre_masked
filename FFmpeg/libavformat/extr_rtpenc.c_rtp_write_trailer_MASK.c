
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int flags; int buf; } ;
typedef TYPE_1__ RTPMuxContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1)
{
    RTPMuxContext *VAR_2 = VAR_1->priv_data;



    if (VAR_1->pb && (VAR_2->flags & VAR_0))
        FUNC_2(VAR_1, FUNC_1(), 1);
    FUNC_0(&VAR_2->buf);

    return 0;
}
