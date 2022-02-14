
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int header_count; int write_index; int sp_count; } ;
typedef TYPE_1__ NUTContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_1__*,int *,int *,int,int ) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_1)
{
    NUTContext *VAR_2 = VAR_1->priv_data;
    AVIOContext *VAR_3 = VAR_1->pb, *VAR_4;
    int VAR_5;

    while (VAR_2->header_count < 3)
        FUNC_3(VAR_1, VAR_3);

    if (!VAR_2->sp_count)
        return 0;

    VAR_5 = FUNC_1(&VAR_4);
    if (VAR_5 >= 0) {
        FUNC_0(VAR_2->write_index);
        FUNC_4(VAR_2, VAR_4);
        FUNC_2(VAR_2, VAR_3, VAR_4, 1, VAR_0);
    }

    return 0;
}
