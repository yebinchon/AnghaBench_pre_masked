
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int comment_count; int * comment_refs; } ;
struct TYPE_5__ {char* name; int value; } ;
typedef TYPE_1__ MXFTaggedValue ;
typedef TYPE_2__ MXFPackage ;
typedef int MXFContext ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int **,char*,int ,int ) ;
 char* FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (char*,int,char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(MXFContext *VAR_3, AVDictionary **VAR_4, MXFPackage *VAR_5)
{
    MXFTaggedValue *VAR_6;
    int VAR_7, VAR_8;
    char *VAR_9 = ((void*)0);

    for (VAR_8 = 0; VAR_8 < VAR_5->comment_count; VAR_8++) {
        VAR_6 = FUNC_3(VAR_3, &VAR_5->comment_refs[VAR_8], VAR_2);
        if (!VAR_6 || !VAR_6->name || !VAR_6->value)
            continue;

        VAR_7 = FUNC_5(VAR_6->name) + 8 + 1;
        VAR_9 = FUNC_2(VAR_7);
        if (!VAR_9)
            return FUNC_0(VAR_1);

        FUNC_4(VAR_9, VAR_7, "comment_%s", VAR_6->name);
        FUNC_1(VAR_4, VAR_9, VAR_6->value, VAR_0);
    }
    return 0;
}
