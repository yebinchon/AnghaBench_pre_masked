
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int metadata; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,char const*,int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char const*) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_0, AVIOContext *VAR_1,
                                   const char *VAR_2, const char *VAR_3,
                                   int VAR_4)
{
    AVDictionaryEntry *VAR_5 = ((void*)0);
    uint8_t VAR_6;
    int VAR_7 = 24 + VAR_4;

    if (VAR_4 != 1 && VAR_4 != 4)
        return -1;

    if (!(VAR_5 = FUNC_1(VAR_0->metadata, VAR_3, ((void*)0), 0)))
        return 0;
    VAR_6 = FUNC_0(VAR_5->value);

    FUNC_3(VAR_1, VAR_7);
    FUNC_4(VAR_1, VAR_2);
    FUNC_3(VAR_1, VAR_7 - 8);
    FUNC_4(VAR_1, "data");
    FUNC_3(VAR_1, 0x15);
    FUNC_3(VAR_1, 0);
    if (VAR_4==4) FUNC_3(VAR_1, VAR_6);
    else FUNC_2 (VAR_1, VAR_6);

    return VAR_7;
}
