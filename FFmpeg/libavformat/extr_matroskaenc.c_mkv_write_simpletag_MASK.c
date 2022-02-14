
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
typedef int ebml_master ;
struct TYPE_3__ {char const* value; int key; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVDictionaryEntry ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char**) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int ,char const*) ;
 int FUNC_6 (int *,int ,int ) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static int FUNC_8(AVIOContext *VAR_6, AVDictionaryEntry *VAR_7)
{
    uint8_t *VAR_8 = FUNC_2(VAR_7->key);
    uint8_t *VAR_9 = VAR_8;
    const uint8_t *VAR_10 = ((void*)0);
    ebml_master VAR_11;

    if (!VAR_8)
        return FUNC_0(VAR_1);

    if ((VAR_9 = FUNC_7(VAR_9, '-')) &&
        (VAR_10 = FUNC_4(VAR_9 + 1, VAR_0)))
        *VAR_9 = 0;

    VAR_9 = VAR_8;
    while (*VAR_9) {
        if (*VAR_9 == ' ')
            *VAR_9 = '_';
        else if (*VAR_9 >= 'a' && *VAR_9 <= 'z')
            *VAR_9 -= 'a' - 'A';
        VAR_9++;
    }

    VAR_11 = FUNC_6(VAR_6, VAR_2, 0);
    FUNC_5(VAR_6, VAR_4, VAR_8);
    if (VAR_10)
        FUNC_5(VAR_6, VAR_3, VAR_10);
    FUNC_5(VAR_6, VAR_5, VAR_7->value);
    FUNC_3(VAR_6, VAR_11);

    FUNC_1(&VAR_8);
    return 0;
}
