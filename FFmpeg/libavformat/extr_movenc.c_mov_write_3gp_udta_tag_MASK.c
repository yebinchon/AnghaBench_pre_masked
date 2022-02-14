
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int metadata; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,char const*,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char const*,char*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(AVIOContext *VAR_0, AVFormatContext *VAR_1,
                                  const char *VAR_2, const char *VAR_3)
{
    int64_t VAR_4 = FUNC_2(VAR_0);
    AVDictionaryEntry *VAR_5 = FUNC_1(VAR_1->metadata, VAR_3, ((void*)0), 0);
    if (!VAR_5 || !FUNC_12(VAR_5->value))
        return 0;
    FUNC_5(VAR_0, 0);
    FUNC_7(VAR_0, VAR_2);
    FUNC_5(VAR_0, 0);
    if (!FUNC_9(VAR_2, "yrrc"))
        FUNC_4(VAR_0, FUNC_0(VAR_5->value));
    else {
        FUNC_4(VAR_0, FUNC_8("eng"));
        FUNC_6(VAR_0, VAR_5->value, FUNC_10(VAR_5->value) + 1);
        if (!FUNC_9(VAR_2, "albm") &&
            (VAR_5 = FUNC_1(VAR_1->metadata, "track", ((void*)0), 0)))
            FUNC_3(VAR_0, FUNC_0(VAR_5->value));
    }
    return FUNC_11(VAR_0, VAR_4);
}
