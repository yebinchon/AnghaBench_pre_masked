
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int mNumberChannelDescriptions; TYPE_1__* mChannelDescriptions; int mChannelLayoutTag; } ;
struct TYPE_4__ {int mChannelLabel; } ;
typedef TYPE_2__ AudioChannelLayout ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(AudioChannelLayout *VAR_2, uint64_t VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6 = 0;
    VAR_2->mChannelLayoutTag = VAR_1;
    VAR_2->mNumberChannelDescriptions = VAR_4;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        int VAR_7;
        while (!(VAR_3 & (1 << VAR_6)) && VAR_6 < 64)
            VAR_6++;
        if (VAR_6 == 64)
            return FUNC_0(VAR_0);
        VAR_7 = FUNC_1(VAR_6);
        VAR_2->mChannelDescriptions[VAR_5].mChannelLabel = VAR_7;
        if (VAR_7 < 0)
            return FUNC_0(VAR_0);
        VAR_6++;
    }
    return 0;
}
