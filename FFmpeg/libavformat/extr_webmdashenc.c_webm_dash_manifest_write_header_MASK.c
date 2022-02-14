
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int nb_as; int is_live; } ;
typedef TYPE_1__ WebMDashMuxContext ;
struct TYPE_11__ {int pb; TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_0)
{
    int VAR_1;
    double VAR_2 = 0.0;
    int VAR_3;
    WebMDashMuxContext *VAR_4 = VAR_0->priv_data;
    VAR_3 = FUNC_3(VAR_0);
    if (VAR_3 < 0) {
        goto fail;
    }
    VAR_3 = FUNC_6(VAR_0);
    if (VAR_3 < 0) {
        goto fail;
    }
    FUNC_0(VAR_0->pb, "<Period id=\"0\"");
    FUNC_0(VAR_0->pb, " start=\"PT%gS\"", VAR_2);
    if (!VAR_4->is_live) {
        FUNC_0(VAR_0->pb, " duration=\"PT%gS\"", FUNC_2(VAR_0));
    }
    FUNC_0(VAR_0->pb, " >\n");

    for (VAR_1 = 0; VAR_1 < VAR_4->nb_as; VAR_1++) {
        VAR_3 = FUNC_4(VAR_0, VAR_1);
        if (VAR_3 < 0) {
            goto fail;
        }
    }

    FUNC_0(VAR_0->pb, "</Period>\n");
    FUNC_5(VAR_0);
fail:
    FUNC_1(VAR_0);
    return VAR_3 < 0 ? VAR_3 : 0;
}
