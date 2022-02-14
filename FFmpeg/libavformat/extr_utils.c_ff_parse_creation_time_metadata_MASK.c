
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int value; } ;
struct TYPE_6__ {int metadata; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,char*,int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_2 (int*,int ,int ) ;

int FUNC_3(AVFormatContext *VAR_1, int64_t *VAR_2, int VAR_3)
{
    AVDictionaryEntry *VAR_4;
    int64_t VAR_5;
    int VAR_6;
    if ((VAR_4 = FUNC_0(VAR_1->metadata, "creation_time", ((void*)0), 0))) {
        if ((VAR_6 = FUNC_2(&VAR_5, VAR_4->value, 0)) >= 0) {
            *VAR_2 = VAR_3 ? VAR_5 / 1000000 : VAR_5;
            return 1;
        } else {
            FUNC_1(VAR_1, VAR_0, "Failed to parse creation_time %s\n", VAR_4->value);
            return VAR_6;
        }
    }
    return 0;
}
