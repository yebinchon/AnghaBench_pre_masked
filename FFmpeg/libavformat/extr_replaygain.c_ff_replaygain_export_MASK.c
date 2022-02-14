
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * value; } ;
typedef int AVStream ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char*,int *,int ) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(AVStream *VAR_1, AVDictionary *VAR_2)
{
    const AVDictionaryEntry *VAR_3, *VAR_4, *VAR_5, *VAR_6;

    VAR_3 = FUNC_0(VAR_2, "REPLAYGAIN_TRACK_GAIN", ((void*)0), 0);
    VAR_4 = FUNC_0(VAR_2, "REPLAYGAIN_TRACK_PEAK", ((void*)0), 0);
    VAR_5 = FUNC_0(VAR_2, "REPLAYGAIN_ALBUM_GAIN", ((void*)0), 0);
    VAR_6 = FUNC_0(VAR_2, "REPLAYGAIN_ALBUM_PEAK", ((void*)0), 0);

    return FUNC_1(VAR_1,
                             FUNC_2(VAR_3 ? VAR_3->value : ((void*)0), VAR_0),
                             FUNC_2(VAR_4 ? VAR_4->value : ((void*)0), 0),
                             FUNC_2(VAR_5 ? VAR_5->value : ((void*)0), VAR_0),
                             FUNC_2(VAR_6 ? VAR_6->value : ((void*)0), 0));
}
