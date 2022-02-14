
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int value; } ;
struct TYPE_12__ {int metadata; TYPE_1__* priv_data; } ;
struct TYPE_11__ {int metadata; } ;
struct TYPE_10__ {int tc; } ;
typedef TYPE_1__ MXFContext ;
typedef TYPE_2__ AVStream ;
typedef int AVRational ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVDictionaryEntry ;


 TYPE_4__* FUNC_0 (int ,char*,int *,int ) ;
 int FUNC_1 (int *,int ,int ,int ,TYPE_3__*) ;
 int FUNC_2 (int *,int ,int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0, AVStream *VAR_1, AVRational VAR_2)
{
    MXFContext *VAR_3 = VAR_0->priv_data;
    AVDictionaryEntry *VAR_4 = FUNC_0(VAR_0->metadata, "timecode", ((void*)0), 0);
    if (!VAR_4)
        VAR_4 = FUNC_0(VAR_1->metadata, "timecode", ((void*)0), 0);

    if (VAR_4)
        return FUNC_2(&VAR_3->tc, VAR_2, VAR_4->value, VAR_0);
    else
        return FUNC_1(&VAR_3->tc, VAR_2, 0, 0, VAR_0);
}
