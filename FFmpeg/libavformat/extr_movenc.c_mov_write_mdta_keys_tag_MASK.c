
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int key; } ;
struct TYPE_6__ {int metadata; } ;
typedef int MOVMuxContext ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,char*,TYPE_2__*,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(AVIOContext *VAR_2, MOVMuxContext *VAR_3,
                                   AVFormatContext *VAR_4)
{
    AVDictionaryEntry *VAR_5 = ((void*)0);
    int64_t VAR_6 = FUNC_2(VAR_2);
    int64_t VAR_7, VAR_8;
    int VAR_9 = 0;

    FUNC_3(VAR_2, 0);
    FUNC_5(VAR_2, "keys");
    FUNC_3(VAR_2, 0);
    VAR_8 = FUNC_2(VAR_2);
    FUNC_3(VAR_2, 0);

    while ((VAR_5 = FUNC_0(VAR_4->metadata, "", VAR_5, VAR_0))) {
        FUNC_3(VAR_2, FUNC_6(VAR_5->key) + 8);
        FUNC_5(VAR_2, "mdta");
        FUNC_4(VAR_2, VAR_5->key, FUNC_6(VAR_5->key));
        VAR_9 += 1;
    }
    VAR_7 = FUNC_2(VAR_2);
    FUNC_1(VAR_2, VAR_8, VAR_1);
    FUNC_3(VAR_2, VAR_9);
    FUNC_1(VAR_2, VAR_7, VAR_1);

    return FUNC_7(VAR_2, VAR_6);
}
