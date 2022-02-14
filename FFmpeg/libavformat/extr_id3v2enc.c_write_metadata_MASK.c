
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int value; int key; } ;
struct TYPE_10__ {int version; int len; } ;
typedef TYPE_1__ ID3v2EncContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (char,char,char,char) ;
 TYPE_2__* FUNC_1 (int *,char*,TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (TYPE_1__*,int *,TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(AVIOContext *VAR_6, AVDictionary **VAR_7,
                          ID3v2EncContext *VAR_8, int VAR_9)
{
    AVDictionaryEntry *VAR_10 = ((void*)0);
    int VAR_11;

    FUNC_2(VAR_7, VAR_1, ((void*)0));
    if (VAR_8->version == 3)
        FUNC_3(VAR_7);
    else if (VAR_8->version == 4)
        FUNC_2(VAR_7, VAR_3, ((void*)0));

    while ((VAR_10 = FUNC_1(*VAR_7, "", VAR_10, VAR_0))) {
        if ((VAR_11 = FUNC_4(VAR_8, VAR_6, VAR_10, VAR_5, VAR_9)) > 0) {
            VAR_8->len += VAR_11;
            continue;
        }
        if ((VAR_11 = FUNC_4(VAR_8, VAR_6, VAR_10, VAR_8->version == 3 ?
                                         VAR_2 : VAR_4, VAR_9)) > 0) {
            VAR_8->len += VAR_11;
            continue;
        }

        if ((VAR_11 = FUNC_5(VAR_8, VAR_6, VAR_10->key, VAR_10->value)) > 0) {
            VAR_8->len += VAR_11;
            continue;
        } else if (VAR_11 < 0) {
            return VAR_11;
        }


        if ((VAR_11 = FUNC_6(VAR_8, VAR_6, VAR_10->key, VAR_10->value, FUNC_0('T', 'X', 'X', 'X'), VAR_9)) < 0)
            return VAR_11;
        VAR_8->len += VAR_11;
    }

    return 0;
}
