
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WriterContext ;
struct TYPE_4__ {int value; int key; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char*,TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static inline int FUNC_4(WriterContext *VAR_1, AVDictionary *VAR_2, int VAR_3)
{
    AVDictionaryEntry *VAR_4 = ((void*)0);
    int VAR_5 = 0;

    if (!VAR_2)
        return 0;
    FUNC_3(VAR_1, VAR_3);

    while ((VAR_4 = FUNC_0(VAR_2, "", VAR_4, VAR_0))) {
        if ((VAR_5 = FUNC_1(VAR_4->key, VAR_4->value)) < 0)
            break;
    }
    FUNC_2(VAR_1);

    return VAR_5;
}
