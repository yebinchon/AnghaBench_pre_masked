
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int nb_chapters; int metadata; int pb; } ;
struct TYPE_11__ {int version; } ;
typedef TYPE_1__ ID3v2EncContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_3 (int ,int *,TYPE_1__*,int) ;

int FUNC_4(AVFormatContext *VAR_2, ID3v2EncContext *VAR_3)
{
    int VAR_4 = VAR_3->version == 3 ? VAR_0 :
                                  VAR_1;
    int VAR_5, VAR_6;

    FUNC_0(VAR_2);
    if ((VAR_6 = FUNC_3(VAR_2->pb, &VAR_2->metadata, VAR_3, VAR_4)) < 0)
        return VAR_6;

    if ((VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4)) < 0)
        return VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_2->nb_chapters; VAR_5++) {
        if ((VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_5, VAR_4)) < 0)
            return VAR_6;
    }

    return 0;
}
