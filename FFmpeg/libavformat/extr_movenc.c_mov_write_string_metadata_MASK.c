
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
typedef int AVIOContext ;
typedef int AVFormatContext ;
typedef TYPE_1__ AVDictionaryEntry ;


 TYPE_1__* FUNC_0 (int *,char const*,int*) ;
 int FUNC_1 (int *,char const*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_0, AVIOContext *VAR_1,
                                     const char *VAR_2, const char *VAR_3,
                                     int VAR_4)
{
    int VAR_5;
    AVDictionaryEntry *VAR_6 = FUNC_0(VAR_0, VAR_3, &VAR_5);
    if (!VAR_6)
        return 0;
    return FUNC_1(VAR_1, VAR_2, VAR_6->value, VAR_5, VAR_4);
}
