
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int trailer_size; scalar_t__ trailer; } ;
struct TYPE_5__ {int pb; TYPE_2__* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ ASSContext ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0)
{
    ASSContext *VAR_1 = VAR_0->priv_data;

    FUNC_1(VAR_0, 1);

    if (VAR_1->trailer) {
        FUNC_0(VAR_0->pb, VAR_1->trailer, VAR_1->trailer_size);
    }

    return 0;
}
