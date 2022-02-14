
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int metadata; int * pb; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 int FUNC_0 (int,int) ;
 TYPE_2__* FUNC_1 (int ,char const*,int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(AVFormatContext *VAR_0, const char *VAR_1, uint32_t VAR_2)
{
    AVDictionaryEntry *VAR_3;
    AVIOContext *VAR_4 = VAR_0->pb;

    if ((VAR_3 = FUNC_1(VAR_0->metadata, VAR_1, ((void*)0), 0))) {
        int VAR_5 = FUNC_6(VAR_3->value);

        FUNC_4(VAR_4, VAR_2);
        FUNC_3(VAR_4, FUNC_0(VAR_5, 2));
        FUNC_5(VAR_4, VAR_3->value, VAR_5);
        if (VAR_5 & 1)
            FUNC_2(VAR_4, 0);
    }
}
