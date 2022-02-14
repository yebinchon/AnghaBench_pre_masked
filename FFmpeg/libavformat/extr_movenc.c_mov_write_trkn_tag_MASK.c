
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* value; } ;
struct TYPE_5__ {int metadata; } ;
typedef int MOVMuxContext ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (int ,char*,int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static int FUNC_6(AVIOContext *VAR_0, MOVMuxContext *VAR_1,
                              AVFormatContext *VAR_2, int VAR_3)
{
    AVDictionaryEntry *VAR_4 = FUNC_1(VAR_2->metadata,
                                       VAR_3 ? "disc" : "track",
                                       ((void*)0), 0);
    int VAR_5 = 0, VAR_6 = VAR_4 ? FUNC_0(VAR_4->value) : 0;
    if (VAR_6) {
        int VAR_7 = 0;
        char *VAR_8 = FUNC_5(VAR_4->value, '/');
        if (VAR_8)
            VAR_7 = FUNC_0(VAR_8 + 1);
        FUNC_3(VAR_0, 32);
        FUNC_4(VAR_0, VAR_3 ? "disk" : "trkn");
        FUNC_3(VAR_0, 24);
        FUNC_4(VAR_0, "data");
        FUNC_3(VAR_0, 0);
        FUNC_3(VAR_0, 0);
        FUNC_2(VAR_0, 0);
        FUNC_2(VAR_0, VAR_6);
        FUNC_2(VAR_0, VAR_7);
        FUNC_2(VAR_0, 0);
        VAR_5 = 32;
    }
    return VAR_5;
}
