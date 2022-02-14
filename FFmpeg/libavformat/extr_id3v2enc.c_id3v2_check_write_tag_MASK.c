
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef enum ID3v2Encoding { ____Placeholder_ID3v2Encoding } ID3v2Encoding ;
struct TYPE_3__ {char* key; int value; } ;
typedef int ID3v2EncContext ;
typedef int AVIOContext ;
typedef TYPE_1__ AVDictionaryEntry ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int *,int *,int ,int *,scalar_t__,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(ID3v2EncContext *VAR_0, AVIOContext *VAR_1, AVDictionaryEntry *VAR_2,
                                 const char VAR_3[][4], enum ID3v2Encoding VAR_4)
{
    uint32_t VAR_5;
    int VAR_6;

    if (VAR_2->key[0] != 'T' || FUNC_2(VAR_2->key) != 4)
        return -1;
    VAR_5 = FUNC_0(VAR_2->key);
    for (VAR_6 = 0; *VAR_3[VAR_6]; VAR_6++)
        if (VAR_5 == FUNC_0(VAR_3[VAR_6]))
            return FUNC_1(VAR_0, VAR_1, VAR_2->value, ((void*)0), VAR_5, VAR_4);
    return -1;
}
