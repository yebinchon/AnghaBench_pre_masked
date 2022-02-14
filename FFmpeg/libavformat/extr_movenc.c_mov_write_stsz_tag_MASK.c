
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int entry; TYPE_1__* cluster; } ;
struct TYPE_4__ {int size; int entries; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_0, MOVTrack *VAR_1)
{
    int VAR_2 = 1;
    int VAR_3, VAR_4, VAR_5 = 0, VAR_6 = -1, VAR_7 = -1;

    int64_t VAR_8 = FUNC_1(VAR_0);
    FUNC_2(VAR_0, 0);
    FUNC_3(VAR_0, "stsz");
    FUNC_2(VAR_0, 0);

    for (VAR_3 = 0; VAR_3 < VAR_1->entry; VAR_3++) {
        VAR_6 = VAR_1->cluster[VAR_3].size / VAR_1->cluster[VAR_3].entries;
        if (VAR_7 != -1 && VAR_6 != VAR_7)
            VAR_2 = 0;
        VAR_7 = VAR_6;
        VAR_5 += VAR_1->cluster[VAR_3].entries;
    }
    if (VAR_2 && VAR_1->entry) {
        int VAR_9 = VAR_1->entry ? VAR_1->cluster[0].size / VAR_1->cluster[0].entries : 0;
        VAR_9 = FUNC_0(1, VAR_9);
        FUNC_2(VAR_0, VAR_9);
        FUNC_2(VAR_0, VAR_5);
    } else {
        FUNC_2(VAR_0, 0);
        FUNC_2(VAR_0, VAR_5);
        for (VAR_3 = 0; VAR_3 < VAR_1->entry; VAR_3++) {
            for (VAR_4 = 0; VAR_4 < VAR_1->cluster[VAR_3].entries; VAR_4++) {
                FUNC_2(VAR_0, VAR_1->cluster[VAR_3].size /
                          VAR_1->cluster[VAR_3].entries);
            }
        }
    }
    return FUNC_4(VAR_0, VAR_8);
}
