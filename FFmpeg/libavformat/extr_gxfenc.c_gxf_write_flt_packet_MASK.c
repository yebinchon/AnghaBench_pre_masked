
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int nb_fields; int* flt_entries; } ;
typedef TYPE_1__ GXFContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1)
{
    GXFContext *VAR_2 = VAR_1->priv_data;
    AVIOContext *VAR_3 = VAR_1->pb;
    int64_t VAR_4 = FUNC_0(VAR_3);
    int VAR_5 = (VAR_2->nb_fields+1) / 1000 + 1;
    int VAR_6 = VAR_2->nb_fields / VAR_5;
    int VAR_7 = 0;

    FUNC_2(VAR_3, VAR_0);

    FUNC_1(VAR_3, VAR_5);
    FUNC_1(VAR_3, VAR_6);

    if (VAR_2->flt_entries) {
        for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
            FUNC_1(VAR_3, VAR_2->flt_entries[(VAR_7*VAR_5)>>1]);
    }

    for (; VAR_7 < 1000; VAR_7++)
        FUNC_1(VAR_3, 0);

    return FUNC_3(VAR_3, VAR_4);
}
