
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int metadata; } ;
typedef int MOVMuxContext ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,char*,TYPE_2__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int ,int ,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(AVIOContext *VAR_1, MOVMuxContext *VAR_2,
                                   AVFormatContext *VAR_3)
{
    AVDictionaryEntry *VAR_4 = ((void*)0);
    int64_t VAR_5 = FUNC_1(VAR_1);
    int VAR_6 = 1;

    FUNC_2(VAR_1, 0);
    FUNC_3(VAR_1, "ilst");

    while ((VAR_4 = FUNC_0(VAR_3->metadata, "", VAR_4, VAR_0))) {
        int64_t VAR_7 = FUNC_1(VAR_1);
        FUNC_2(VAR_1, 0);
        FUNC_2(VAR_1, VAR_6);
        FUNC_4(VAR_1, VAR_4->value, 0, 1);
        FUNC_5(VAR_1, VAR_7);
        VAR_6 += 1;
    }
    return FUNC_5(VAR_1, VAR_5);
}
