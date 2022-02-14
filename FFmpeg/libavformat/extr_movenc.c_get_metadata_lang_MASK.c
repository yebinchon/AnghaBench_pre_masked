
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tag2 ;
struct TYPE_8__ {int * key; int value; } ;
struct TYPE_7__ {int metadata; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,char const*,TYPE_2__*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static AVDictionaryEntry *FUNC_5(AVFormatContext *VAR_1,
                                            const char *VAR_2, int *VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    AVDictionaryEntry *VAR_7, *VAR_8 = ((void*)0);
    char VAR_9[16];

    *VAR_3 = 0;

    if (!(VAR_7 = FUNC_0(VAR_1->metadata, VAR_2, ((void*)0), 0)))
        return ((void*)0);

    VAR_5 = FUNC_4(VAR_7->key);
    FUNC_2(VAR_9, sizeof(VAR_9), "%s-", VAR_2);
    while ((VAR_8 = FUNC_0(VAR_1->metadata, VAR_9, VAR_8, VAR_0))) {
        VAR_6 = FUNC_4(VAR_8->key);
        if (VAR_6 == VAR_5 + 4 && !FUNC_3(VAR_7->value, VAR_8->value)
            && (VAR_4 = FUNC_1(&VAR_8->key[VAR_6 - 3], 1)) >= 0) {
            *VAR_3 = VAR_4;
            return VAR_7;
        }
    }
    return VAR_7;
}
