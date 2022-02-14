
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int * metadata; } ;
struct TYPE_6__ {char const* key; char const* value; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;
typedef TYPE_2__ AVChapter ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char*,TYPE_1__*,int ) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char const*) ;

int64_t FUNC_3(AVDictionary *VAR_1, const char *VAR_2,
                                AVChapter **VAR_3, unsigned int VAR_4)
{
    int64_t VAR_5 = 8;
    VAR_5 += FUNC_2(VAR_2);
    if (VAR_3 && VAR_4) {
        for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
            AVDictionaryEntry *VAR_7 = ((void*)0);
            VAR_5 += 4 + 12 + 1 + 10;
            while ((VAR_7 = FUNC_0(VAR_3[VAR_6]->metadata, "", VAR_7, VAR_0))) {
                int64_t VAR_8 = !FUNC_1(VAR_7->key, "title") ? 4 : FUNC_2(VAR_7->key);
                VAR_5 += 4 + 10 + VAR_8 + 1 + FUNC_2(VAR_7->value);
            }
        }
    }
    if (VAR_1) {
        AVDictionaryEntry *VAR_9 = ((void*)0);
        while ((VAR_9 = FUNC_0(VAR_1, "", VAR_9, VAR_0))) {
            VAR_5 += 4 +FUNC_2(VAR_9->key) + 1 + FUNC_2(VAR_9->value);
        }
    }
    return VAR_5;
}
