
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ogg {int nstreams; int streams; } ;
struct TYPE_4__ {struct ogg* priv_data; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0)
{
    struct ogg *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->nstreams; VAR_2++) {
        FUNC_1(VAR_0, VAR_2);
    }

    VAR_1->nstreams = 0;

    FUNC_0(&VAR_1->streams);
    return 0;
}
