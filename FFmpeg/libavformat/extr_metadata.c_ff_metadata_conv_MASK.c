
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* key; int value; } ;
struct TYPE_7__ {char* native; char* generic; } ;
typedef TYPE_1__ AVMetadataConv ;
typedef TYPE_2__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 TYPE_2__* FUNC_1 (int *,char*,TYPE_2__*,int ) ;
 int FUNC_2 (int **,char const*,int ,int ) ;
 int FUNC_3 (char const*,char*) ;

void FUNC_4(AVDictionary **VAR_1, const AVMetadataConv *VAR_2,
                                       const AVMetadataConv *VAR_3)
{


    const AVMetadataConv *VAR_4, *VAR_5;
    AVDictionaryEntry *VAR_6 = ((void*)0);
    AVDictionary *VAR_7 = ((void*)0);
    const char *VAR_8;

    if (VAR_2 == VAR_3 || !VAR_1)
        return;

    while ((VAR_6 = FUNC_1(*VAR_1, "", VAR_6, VAR_0))) {
        VAR_8 = VAR_6->key;
        if (VAR_3)
            for (VAR_4=VAR_3; VAR_4->native; VAR_4++)
                if (!FUNC_3(VAR_8, VAR_4->native)) {
                    VAR_8 = VAR_4->generic;
                    break;
                }
        if (VAR_2)
            for (VAR_5=VAR_2; VAR_5->native; VAR_5++)
                if (!FUNC_3(VAR_8, VAR_5->generic)) {
                    VAR_8 = VAR_5->native;
                    break;
                }
        FUNC_2(&VAR_7, VAR_8, VAR_6->value, 0);
    }
    FUNC_0(VAR_1);
    *VAR_1 = VAR_7;
}
