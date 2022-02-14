
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {int value; } ;
struct TYPE_5__ {int metadata; } ;
typedef TYPE_1__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 TYPE_2__* FUNC_0 (int ,char const*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(AVIOContext *VAR_0, AVStream *VAR_1,
                                    const char *VAR_2, const char *VAR_3)
{
    int64_t VAR_4 = FUNC_1(VAR_0);
    AVDictionaryEntry *VAR_5 = FUNC_0(VAR_1->metadata, VAR_3, ((void*)0), 0);
    if (!VAR_5 || !FUNC_7(VAR_5->value))
        return 0;

    FUNC_2(VAR_0, 0);
    FUNC_4(VAR_0, VAR_2);
    FUNC_3(VAR_0, VAR_5->value, FUNC_5(VAR_5->value));
    return FUNC_6(VAR_0, VAR_4);
}
