
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int metadata; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 TYPE_2__* FUNC_0 (int ,char const*,int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0, AVIOContext *VAR_1,
                                      const char *VAR_2, const char *VAR_3)
{
    int VAR_4;
    AVDictionaryEntry *VAR_5;

    if (!(VAR_5 = FUNC_0(VAR_0->metadata, VAR_3, ((void*)0), 0)))
        return 0;

    VAR_4 = FUNC_4(VAR_5->value);
    if (VAR_4 > 0) {
        int VAR_6 = VAR_4 + 8;
        FUNC_1(VAR_1, VAR_6);
        FUNC_3(VAR_1, VAR_2);
        FUNC_2(VAR_1, VAR_5->value, VAR_4);
        return VAR_6;
    }
    return 0;
}
