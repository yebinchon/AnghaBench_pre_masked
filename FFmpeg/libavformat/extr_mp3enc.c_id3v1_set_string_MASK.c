
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int metadata; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 TYPE_2__* FUNC_0 (int ,char const*,int *,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0, const char *VAR_1,
                            uint8_t *VAR_2, int VAR_3)
{
    AVDictionaryEntry *VAR_4;
    if ((VAR_4 = FUNC_0(VAR_0->metadata, VAR_1, ((void*)0), 0)))
        FUNC_1(VAR_2, VAR_4->value, VAR_3);
    return !!VAR_4;
}
