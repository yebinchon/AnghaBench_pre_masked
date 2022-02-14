
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int const*,char const*,int *,int ) ;
 int FUNC_1 (int **,char const*,int ,int ) ;

__attribute__((used)) static int FUNC_2(AVDictionary **VAR_1, const AVDictionary *VAR_2, const char *VAR_3)
{
    AVDictionaryEntry *VAR_4 = FUNC_0(VAR_2, VAR_3, ((void*)0), 0);
    if (VAR_4)
        FUNC_1(VAR_1, VAR_3, VAR_4->value, VAR_0);
    return 0;
}
