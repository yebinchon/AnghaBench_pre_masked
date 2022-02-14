
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


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,char*,int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_0, AVFormatContext *VAR_1)
{
    AVDictionaryEntry *VAR_2 = FUNC_1(VAR_1->metadata, "tmpo", ((void*)0), 0);
    int VAR_3 = 0, VAR_4 = VAR_2 ? FUNC_0(VAR_2->value) : 0;
    if (VAR_4) {
        VAR_3 = 26;
        FUNC_3(VAR_0, VAR_3);
        FUNC_4(VAR_0, "tmpo");
        FUNC_3(VAR_0, VAR_3-8);
        FUNC_4(VAR_0, "data");
        FUNC_3(VAR_0, 0x15);
        FUNC_3(VAR_0, 0);
        FUNC_2(VAR_0, VAR_4);
    }
    return VAR_3;
}
