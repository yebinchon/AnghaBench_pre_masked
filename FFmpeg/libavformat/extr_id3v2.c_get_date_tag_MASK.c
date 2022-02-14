
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char const*,int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static AVDictionaryEntry *FUNC_3(AVDictionary *VAR_1, const char *VAR_2)
{
    AVDictionaryEntry *VAR_3;
    if ((VAR_3 = FUNC_0(VAR_1, VAR_2, ((void*)0), VAR_0)) &&
        FUNC_2(VAR_3->value) == 4 && FUNC_1(VAR_3->value))
        return VAR_3;
    return ((void*)0);
}
