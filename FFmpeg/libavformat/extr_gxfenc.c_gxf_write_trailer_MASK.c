
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_9__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int map_offsets_nb; int * map_offsets; int * flt_entries; } ;
typedef TYPE_1__ GXFContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_1)
{
    GXFContext *VAR_2 = VAR_1->priv_data;
    AVIOContext *VAR_3 = VAR_1->pb;
    int64_t VAR_4;
    int VAR_5;
    int VAR_6;

    FUNC_4(VAR_1);

    FUNC_5(VAR_3);
    VAR_4 = FUNC_3(VAR_3);
    FUNC_2(VAR_3, 0, VAR_0);

    if ((VAR_6 = FUNC_7(VAR_1, 1)) < 0)
        return VAR_6;
    FUNC_6(VAR_1);
    FUNC_8(VAR_1);
    FUNC_1(VAR_3);

    for (VAR_5 = 1; VAR_5 < VAR_2->map_offsets_nb; VAR_5++) {
        FUNC_2(VAR_3, VAR_2->map_offsets[VAR_5], VAR_0);
        if ((VAR_6 = FUNC_7(VAR_1, 1)) < 0)
            return VAR_6;
        FUNC_1(VAR_3);
    }

    FUNC_2(VAR_3, VAR_4, VAR_0);

    FUNC_0(&VAR_2->flt_entries);
    FUNC_0(&VAR_2->map_offsets);

    return 0;
}
